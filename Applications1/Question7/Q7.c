#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
extern char **environ;
int main()
{
    char **env = environ;
    

    char *pch;
   while(*env!=NULL)
   {
       
        pch=strtok(*env,"=");
        if (!(strcmp(pch,"HOME")&&strcmp(pch,"LOGNAME")))
        {    printf("%s : ",pch);
           pch=strtok(NULL,"=");
         printf("%s\n",pch);
        }
    env++;   
   }

    return 0;
    }