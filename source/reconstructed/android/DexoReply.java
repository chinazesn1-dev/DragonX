import org.json.JSONException;
import org.json.JSONObject;

/** Fields read by the client. A parsed status is not a license decision. */
public final class DexoReply {
    public final boolean status;
    public final String reason;
    public final String expirationText;
    public final String modName;
    public final String modStatus;

    private DexoReply(boolean status, String reason, String expirationText,
                      String modName, String modStatus) {
        this.status = status;
        this.reason = reason;
        this.expirationText = expirationText;
        this.modName = modName;
        this.modStatus = modStatus;
    }

    public static DexoReply parse(String response) throws JSONException {
        JSONObject root = new JSONObject(response);
        if (!Boolean.TRUE.equals(root.opt("status"))) {
            Object reason = root.get("reason");
            if (!(reason instanceof String)) {
                throw new JSONException("Expected a string reason");
            }
            return new DexoReply(false, (String) reason, null, null, null);
        }
        JSONObject data = root.getJSONObject("data");
        return new DexoReply(true, null, text(data, "EXP"),
                firstString(data, "MOD_NAME", "modname"),
                firstString(data, "MOD_STATUS", "mod_status"));
    }

    private static String text(JSONObject object, String field) {
        Object value = object.opt(field);
        return value == null ? null : value.toString();
    }

    private static String firstString(JSONObject object, String first, String second) {
        Object value = object.opt(first);
        if (value instanceof String && !((String) value).isEmpty()) {
            return (String) value;
        }
        Object fallback = object.opt(second);
        return fallback instanceof String ? (String) fallback : null;
    }
}
