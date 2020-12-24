#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>
void * fun(void *p)
{
    printf("inside Thread \n");

 pthread_exit(NULL); 
}



int main()
{
     pthread_t thread1;
int ret=0;
   ret = pthread_create(&thread1,   // Address of pthread_t pointer
                                    NULL,       // Attributes of thread
                                    fun,        // Address of callback function
                                    NULL); 
     if(ret==-1)
     {
         printf("error");
     }
     
     printf("parent \n");

      pthread_join(thread1,NULL);
return 0;
}