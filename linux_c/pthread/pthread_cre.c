#include <pthread.h>
#include <stdio.h>

void * run(void *arg)
{
	int *p = (int *)arg;
	printf("thread run %x\n", pthread_self());
	printf("*arg = %d\n", *p);
}

int main()
{
	pthread_t tid;
	int n = 10;
	
	pthread_create(&tid, NULL, run, (void *)&n);
	printf("main thread id = %x\n", pthread_self());
	printf("PID = %d\n", getpid());
	printf("main child id = %x\n", tid);
	sleep(2);
	return 0;
}
