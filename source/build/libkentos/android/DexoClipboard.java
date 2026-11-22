import android.content.ClipboardManager;
import android.content.Context;

public final class DexoClipboard {
    private DexoClipboard() {}

    /** Call when the user presses Paste Key. */
    @SuppressWarnings("deprecation")
    public static String readPastedKey(Context context) {
        ClipboardManager clipboard = (ClipboardManager)
                context.getSystemService(Context.CLIPBOARD_SERVICE);
        if (clipboard == null) {
            return "";
        }
        CharSequence text = clipboard.getText();
        return text == null ? "" : text.toString();
    }
}
