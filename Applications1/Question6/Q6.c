#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
extern char **environ;
int main()
{
    char **env = environ;
    
    printf("environmental variables are");
    
    while(*env!=NULL)
    {
     
        printf("%s\n",*env);
    env++;
    }
    }