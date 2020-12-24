#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<pthread.h>
void * fun(void *p)
{   printf("enter in fun \n");
    printf("%c \n",*(char *)p);
int * a=malloc(4);
*a=4;
pthread_exit(a);
}
int main(int argc,char * argv[])
{
 pthread_t thread1;
 char a='s';
 void **ptr;
pthread_create(&thread1,NULL,fun,&a);


pthread_join(thread1,ptr);
printf("return value %d",**(int**)ptr);
 return 0;

}