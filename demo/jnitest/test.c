#include <jni.h>  
#include <stdlib.h>  
#include "JNITest.h"
#ifdef __cplusplus  
extern "C" {  
#endif  
/*这个方法名称一定要和头文件的一模一样，不过头文件中的参数只有类型，没有名称，需要加成如下参数*/  
JNIEXPORT void JNICALL Java_JNITest_test(JNIEnv *jenv, jobject jobj) {  
  /*就打印这一条语句*/  
  printf("=====888\n");
  printf("tony test jni\n");
}  
#ifdef __cplusplus  
}  
#endif 
