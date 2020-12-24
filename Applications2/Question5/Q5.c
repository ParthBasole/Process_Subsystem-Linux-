#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>
void * fun(void *p)
{   printf("%ld",pthread_self());
pthread_exit(NULL);
}
int main(int argc,char * argv[])
{
 pthread_t thread1;
pthread_create(&thread1,NULL,fun,NULL);


pthread_join(thread1,NULL);

 return 0;

}