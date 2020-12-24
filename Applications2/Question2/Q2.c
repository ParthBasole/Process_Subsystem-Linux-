#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>
void * fun(void *p)
{printf("entering fun \n");
    for(int i=0;i<=500;i++)
    {
        printf("FUN :%d\n",i);
    }
  //  printf("inside Thread \n");

 pthread_exit(NULL); 
}

void * gun(void *p)
{printf("entering gun \n");
    for(int i=500;i>=0;i--)
    {
        printf("GUN:%d\n",i);
    }

    //printf("inside Thread \n");

 pthread_exit(NULL); 
}

int main()
{
     pthread_t thread1,thread2;
int ret=0,ret1=0;
   ret = pthread_create(&thread1,   // Address of pthread_t pointer
                                     NULL,       // Attributes of thread
                                     fun,        // Address of callback function
                                    NULL); 
    
    
    ret1=pthread_create(&thread2,NULL,gun,NULL); 
     if(ret==-1)
     {
         printf("error");
     }
     if(ret1==-1)
     {
         printf("error");
     }


     printf("parent \n");

      pthread_join(thread1,NULL);
       pthread_join(thread2,NULL);
return 0;
}