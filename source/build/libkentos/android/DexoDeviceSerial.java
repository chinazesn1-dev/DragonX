import android.content.Context;
import android.os.Build;
import android.provider.Settings;

import java.io.ByteArrayOutputStream;
import java.util.Objects;
import java.util.UUID;

public final class DexoDeviceSerial {
    private DexoDeviceSerial() {}

    public static String fromDevice(Context context, byte[] nativeKeyBytes) {
        String androidId = Settings.Secure.getString(
                context.getContentResolver(), Settings.Secure.ANDROID_ID);
        return fromParts(nativeKeyBytes, Objects.requireNonNull(androidId),
                         Build.MODEL, Build.BRAND);
    }

    static String fromParts(byte[] nativeKeyBytes, String androidId,
                            String model, String brand) {
        ByteArrayOutputStream bytes = new ByteArrayOutputStream();
        bytes.write(nativeKeyBytes, 0, nativeKeyBytes.length);
        appendModifiedUtf8(bytes, androidId);
        appendModifiedUtf8(bytes, model);
        appendModifiedUtf8(bytes, brand);
        return UUID.nameUUIDFromBytes(bytes.toByteArray()).toString();
    }

    private static void appendModifiedUtf8(ByteArrayOutputStream bytes, String value) {
        for (int i = 0; i < value.length(); i++) {
            int ch = value.charAt(i);
            if (ch >= 1 && ch <= 0x7f) {
                bytes.write(ch);
            } else if (ch <= 0x7ff) {
                bytes.write(0xc0 | (ch >> 6));
                bytes.write(0x80 | (ch & 0x3f));
            } else {
                bytes.write(0xe0 | (ch >> 12));
                bytes.write(0x80 | ((ch >> 6) & 0x3f));
                bytes.write(0x80 | (ch & 0x3f));
            }
        }
    }
}
