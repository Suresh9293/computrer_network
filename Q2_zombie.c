
/**
* @file zombie.c
* @brief this file will  zombie process
* 
*
* @author suresh_babu 17114030
*
* @date 1/8/2019
*/


// A C program to demonstrate Zombie Process. 
// Child becomes Zombie as parent is sleeping 
// when child process exits. 

// ps -e -o pid,stat,cmd  command to check all running process
#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include<stdio.h>
int main() 
{ 
 
   char * cmd=" ps -e -o pid,stat,cmd ";

  // Fork returns process id 
  // in parent process 
  int  child_pid = fork(); 

  // Parent process 
  if (child_pid > 0) 
  {
    printf( "this is parent""%d\n" , getpid());
    sleep(5);
    system(cmd);
    sleep(5);
   }  
  

  // Child process 
  else 
  {
     printf("this is child""%d\n", getpid());
    exit(0); 
    
  }   
}