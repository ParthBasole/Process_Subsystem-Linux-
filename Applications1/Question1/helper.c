       #include <stdio.h>
       #include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
        #include <unistd.h>
       #include <dirent.h>
       #include <string.h>
       int main(int argc,char * argv[])
       { //char buff[1024];
           printf("in child process\n");
            printf("%s \n",argv[0]);
              DIR *fd;
          struct dirent *dirE;
           fd=opendir(argv[0]);
          // printf("%d",)
        int fd1=creat("demo.txt",0777);
         if(fd==NULL)
         {   printf("error");
              return -1;
         }
          while((dirE=readdir(fd))!=NULL)
          {
              // printf("%s \n",dirE->d_name);
               write(fd1,dirE->d_name,strlen(dirE->d_name));
               write(fd1,"\n",1);
          }
           


    return 0;
       }