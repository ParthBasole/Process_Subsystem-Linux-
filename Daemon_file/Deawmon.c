#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<sys/types.h>
#include<string.h>

int main()
{
pid_t pid;
pid_t sid;
pid=fork();
FILE *fp;
if(pid<0)
{
    printf("Error while Fork");
    exit(-1);
}
if(pid>0)
{
  printf("Fork executed parent process PID child: %d \n",pid);
  exit(0);
}

sid=setsid();
close(0);
close(1);
close(2);
//unmask(0);
fp=fopen("Demo.txt","w+");
if(fp==NULL)
{
    printf("Unable to create file");
}
while(1)
{
sleep(2);
fprintf(fp,"Process running");
fflush(fp);
    
}

return 0;
}
