package com.axaet.ndk;

/**
 * Created by Qiujuer
 * on 2014/12/20.
 */
public class MathKit {
    public static native int square(int num);

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }
}
