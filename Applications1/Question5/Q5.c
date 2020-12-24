#include<stdio.h>
#include <unistd.h>
int main()
{ 
     //printf("%d is the priority of the current process \n",nice(1));
     printf("%d is the priority of the current process \n",nice(5));
}
