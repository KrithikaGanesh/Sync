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
	
    
    
        spinlock_lock(&lock);
	{
	    global_value += 1;
	}
	spinlock_unlock(&lock);
    
    return 0;

	
}
