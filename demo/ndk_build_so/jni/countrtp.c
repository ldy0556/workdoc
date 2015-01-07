/*******************************************
 * filename countrtp.c
 * tony 2015.01.04
 *
*******************************************/
#include <stdio.h>
int countRTP=0;
int getCountRTP(){
    countRTP++;
    printf("getCountRTP...countRTP=%d\n",countRTP);
    return countRTP;
}

void setCountRTP(int count){
    countRTP=count;
    printf("setCountRTP...countRTP=%d\n",countRTP);
}


