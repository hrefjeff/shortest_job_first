#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "SJF.h"


int main(int argc, char** argv) 
{
    // Initializing clock variables...
    bool cpu = false; // Whether or not a job is in the CPU
    int  clockTime = 0; // Clock counter
    int  cpuTime = 0; 
    int  cpuCount = 0; // number of jobs in CPU 
    int  waitTime = 0; // How long the current job needs to wait in CPU
    
    
    // Blocking out space for waiting queue, current job, and jobs...
    struct Job* currentJob; 
    memset(&currentJob, '\0', sizeof(currentJob));
    struct LinkedList waitingQueue;
    memset(&waitingQueue, '\0', sizeof(waitingQueue));    
    struct Job record[4];
    memset(&record, '\0', sizeof(4));


    // Read input from the file
    readFile(record);

    
    // Number of elements in array of jobs
    int elements = sizeof record / sizeof record[0];


 
    // TODO: Find out why we can't insert more than 2 jobs? I'm thinking not enough memory is being allocated
    for (int i=0; i<2; i++){
        insert(record[i], &waitingQueue);
        printf("Job %d has been enqueue'd \n",i);
    }

    print_queue(&waitingQueue);

    // TODO: Find out why dequeue doesn't work
    // dequeue(&waitingQueue);

    // // Big clock loop  
    // do {
    //     if (cpu == true)
    //     {
    //         cpuTime--;
    //         if(cpuTime == 0)
    //         {  
    //             printf("%s %d %d %d", currentJob->name, currentJob->arrivalTime, 
    //                     waitTime, clockTime); 
    //             printf("\n");
    //             cpu = false; 
    //             elements--; 
    //             cpuCount--;
    //         }    
    //     }
        
        
    //     for(int i = 0; i < 4; i++)
    //     {
    //         if(clockTime == record[i].arrivalTime)
    //         {
    //             printf("Job %d has arrived!!! \n",i);
    //             insert(record[i], &waitingQueue);               
    //             printf("Job %d has been enqueue'd \n",i);
    //             print_queue(&waitingQueue);
    //             cpuCount++; 
    //         }
    //     }
        
    //     if((cpu == false) && (!isEmpty(&waitingQueue)))
    //     { 
    //         currentJob = dequeue(&waitingQueue);
    //         cpuTime = currentJob->serviceTime;
    //         waitTime = clockTime - currentJob->arrivalTime; 
    //         cpu = true;            
    //     }
                
    //     clockTime++; 
       
    // } while ((!isEmpty(&waitingQueue)) || (cpu == true) || (elements > 0)); 

 
    return (EXIT_SUCCESS);
}
