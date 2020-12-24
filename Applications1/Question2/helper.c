       #include <stdio.h>
       #include <sys/types.h>
       #include <sys/stat.h>
       #include <stdlib.h>
       #include <fcntl.h>
       #include <unistd.h>
       #include <dirent.h>
       #include <string.h>
       
       int main(int argc,char * argv[])
       { //char buff[1024];
        char buff[10];
           int fdd=open("Demo.txt",O_RDONLY);
           int fdh=open("Hello.txt",O_RDONLY);
            char a[1];
            char b[1];
           if((fdh==-1)||(fdd==-1))
           {
              printf("error opening files \n");
           }
          int cntr1=0,cntr=0,dc=0,hc=0;
          while((dc=read(fdd,a,1))||(hc=read(fdh,b,1)))
          { 
            if(dc!=0)
            {
            if(((int)a[0]>=65)&&((int)a[0]<=90))
            {
              cntr++;
            }
            }
             if(hc!=0)
             {
             if(((int)b[0]>=65)&&((int)b[0]<=90))
            {
              cntr1++;
            } 
             }
          }
          close (fdd);
          close(fdh);
          fdh=creat("count.txt",0777);
          write(fdh,"Capital Count Demo.txt",22);
          sprintf(buff, " %d", cntr); 
          write(fdh,buff,strlen(buff));
          write(fdh,"\n",1);
          write(fdh,"Capital Count Hello.txt",23);
          sprintf(buff, " %d", cntr1);  
          write(fdh,buff,strlen(buff));
          write(fdh,"\n",1);
          // printf("%d",)
       
           close(fdh); 


    return 0;
       }
