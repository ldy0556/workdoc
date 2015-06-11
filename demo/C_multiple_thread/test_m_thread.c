#include <stdio.h>   
#include <stdlib.h>   
#include <pthread.h>   
#define true 1

int  piao = 100;   
  
pthread_mutex_t mut;   
    
void* tprocess1(void* args){   
   int a = 0;   
       while(true){   
           pthread_mutex_lock(&mut);   
           if(piao>0){   
            sleep(1);   
            piao--;   
            printf("xiancheng 1----------------»¹Ê£%dÕÅÆ±\n",piao);   
           }else{   
            a = 1;   
           }   
          pthread_mutex_unlock(&mut);  
          sleep(1);
           if(a == 1) {   
            break;   
           }   
        }     
           
     
       return NULL;   
}   
  
void* tprocess2(void* args){   
     int a = 0;   
       while(true){   
           pthread_mutex_lock(&mut);   
           if(piao>0){   
            sleep(1);   
           piao--;   
        printf("xiancheng 2----------------»¹Ê£%dÕÅÆ±\n",piao);   
           }else{   
            a = 1;   
           }   
          pthread_mutex_unlock(&mut);  
          sleep(1);
           if(a == 1) {   
            break;   
           }   
        }     
           
     
       return NULL;   
}   
  
void* tprocess3(void* args){   
   int a = 0;   
       while(true){   
           pthread_mutex_lock(&mut);   
           if(piao>0){   
       sleep(1);   
             piao--;   
          
        printf("xiancheng 3----------------»¹Ê£%dÕÅÆ±\n",piao);   
           }else{   
            a = 1;   
           }   
          pthread_mutex_unlock(&mut);   
          sleep(1);
           if(a == 1) {   
            break;   
           }   
        }     
           
     
       return NULL;   
}   
  
void* tprocess4(void* args){   
       int a = 0;   
       while(true){   
           pthread_mutex_lock(&mut);   
           if(piao>0){   
       sleep(1);   
         
                   piao--;   
          
        printf("xiancheng 4----------------yu%dÕÅÆ±\n",piao);   
           }else{   
            a = 1;   
           }   
          pthread_mutex_unlock(&mut);
          sleep(1);
           if(a == 1) {   
            break;   
           }   
        }     
           
     
       return NULL;   
}   
  
int main(){   
  pthread_mutex_init(&mut,NULL);   
  pthread_t t1;   
  pthread_t t2;   
  pthread_t t3;   
  pthread_t t4;   
  pthread_create(&t4,NULL,tprocess4,NULL);   
  pthread_create(&t1,NULL,tprocess1,NULL);   
  pthread_create(&t2,NULL,tprocess2,NULL);   
  pthread_create(&t3,NULL,tprocess3,NULL);   
  printf("tony test-----end0\n");
  sleep(102); 
  printf("tony test-----end1\n");
  return 0;   
}  
