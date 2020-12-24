#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>
void * fun(void *p)
{   printf("enter in fun \n");
    printf("%c \n",*(char *)p);
pthread_exit(NULL);
}
int main(int argc,char * argv[])
{
 pthread_t thread1;
 char a='s';

pthread_create(&thread1,NULL,fun,&a);


pthread_join(thread1,NULL);
 return 0;

}