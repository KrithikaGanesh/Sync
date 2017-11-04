#ifndef _GNU_SOURCE
#define _GNU_SOURCE 1
#endif

#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <sched.h>
#include <unistd.h>
#include "locking.h"
int global_value=0;
int main()
{

	
	struct spinlock lock;

	spinlock_init(&lock);
	
    	//compare_and_swap(&lock.free,0,1);

    
        spinlock_lock(&lock);
	{
	    global_value += 1;
	}
	spinlock_unlock(&lock);
    	printf("%d",global_value);
    return 0;

	
}
