#ifndef SJF_H
#define SJF_H

typedef int bool;
#define true 1
#define false 0

struct Job 
{
    char name[4];
    int arrivalTime;
    int serviceTime;
    int priority;    
};

struct Node 
{
    struct Job job;
    struct Node* next;
};

struct LinkedList 
{
    struct Node* front;
    struct Node* back;
};


void insert(struct Job record, struct LinkedList *queue);
struct Job* dequeue(struct LinkedList *queue);
void readFile(struct Job record[]);
void print_queue(struct LinkedList* queue);
bool isEmpty(struct LinkedList *queue);
void bubbleSort(struct Job record[]); 


#endif // SJF_H 

