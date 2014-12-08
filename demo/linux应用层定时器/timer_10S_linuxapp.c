#include <stdio.h>
#include <signal.h>
#include <sys/time.h>
 
/*
*******************************************************************************************************
** Function name: main()
** Descriptions : Demo for timer.
** Input        : NONE
** Output       : NONE
** Created by   : Chenxibing
** Created Date : 2005-12-29
**-----------------------------------------------------------------------------------------------------
** Modified by  :
** Modified Date:
**-----------------------------------------------------------------------------------------------------
*******************************************************************************************************
*/
/* signal process */
void timeout_info(int signo)
{
                printf("in -------------timeout_info.\n");
                return;
}
     
    /* init sigaction */

void init_sigaction(void)
{
        struct sigaction act;
        act.sa_handler = timeout_info;
        act.sa_flags   = 0;
        sigemptyset(&act.sa_mask);
        sigaction(SIGPROF, &act, NULL);
}
     /* init */
void init_time(void)
{
        struct itimerval val;
        val.it_value.tv_sec = 10;
        val.it_value.tv_usec = 0;
        val.it_interval = val.it_value;
        setitimer(ITIMER_PROF, &val, NULL);
}

int main(void)
{
        init_sigaction();
        init_time();
        printf("You have only 10 seconds for thinking.\n");
        while(1);
        return 0;
 }
