       #include <stdio.h>
       #include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
       #include <unistd.h>
       #include <dirent.h>
       #include <string.h>
  
       int main(int argc,char * argv[])
       { char buff[100];
           printf("in child process\n");
            printf("%s \n",argv[0]);
              DIR *fd;
          struct dirent *dirE;
           fd=opendir(argv[0]);
          // printf("%d",)
       // int fd1=creat("demo.txt",0777);
         chdir(argv[0]);
         if(fd==NULL)
         {   printf("error");
              return -1;
         }
         int cntr=1;
         char *pch;
         char Name[100];
          while((dirE=readdir(fd))!=NULL)
          { 
             
              if ((strcmp(dirE->d_name,"."))&&(strcmp(dirE->d_name,"..")))
              { //printf("%s \n",dirE->d_name);
              strcpy(Name,dirE->d_name);
              pch=strtok(Name,".");
              pch=strtok(NULL,".");
              //printf("%s \n",Name);
              sprintf(buff,"%d",cntr);
              strcat(buff,".");
              strcat(buff,pch); 

              rename(dirE->d_name,buff);
              cntr++;
              memset(buff,0,strlen(buff));

              }
              else{
                
              }
          }
           


        return 0;
       }