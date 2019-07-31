

/**
* @file orphan.c
* @brief this file will  orphan process
* 
*
* @author suresh_babu 17114030
*
* @date 1/8/2019
*/

#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include<stdio.h>


int main() 
{ 
   
    // Create a child process       
    int pid = fork(); 
 
    if (pid > 0)
    {
        printf("in parent process""%d\n",getpid() ); 
        exit(0);
    } 
      

  
    // Note that pid is 0 in child process 
    // and negative if fork() fails 
    else if (pid == 0) 
    { 
        sleep(5); 
         printf(" parent is changing ""%d\n",getppid() ); // init pid is one its parent is init;
    } 
  
    return 0; 
} 