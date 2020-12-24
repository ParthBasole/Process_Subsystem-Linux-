#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <dirent.h>
int main(int argc,char * argv[])
{
int a= fork();    
 if(a)
 {

 }
 else{
     printf("in child process");
 if( execl("./helper",argv[1],NULL)==-1)
 {
 printf("Err \n");
 }   
 }
return 0;
}