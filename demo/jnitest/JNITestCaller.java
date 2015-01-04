    public class JNITestCaller {  
        static {  
            // 在系统路径中（如system32）加载名为JNITest.dll文件  
            System.loadLibrary("JNITest");  
        }  
      
        public static void main(String[] arg) {  
            JNITest jniTest = new JNITest();  
            jniTest.test();  
        }  
    }  
