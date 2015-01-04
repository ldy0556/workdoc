public class main {  
	public static void main(String argv[]) {  

        System.loadLibrary("example");  
//        System.out.println(System.getProperty("java.library.path")); 
		System.out.println(example.getMy_variable());  
		System.out.println(example.fact(5));
        System.out.println(example.my_mod(9,5));
		System.out.println(example.get_time());  
	}  
}  
