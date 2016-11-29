#include <pthread.h>
#include <stdio.h>


void * th_fun1(void *argv)
{
	printf("thread id is %x\n", pthread_self());

	return (void *)1;
}

void * th_fun2(void *argv)
{
	printf("thread id is %x\n", pthread_self());
	pthread_exit((void *)1);
}

void * th_fun3(void *argv)
{
	while (1) {
		printf("thread is running %x\n", pthread_self());		
	}
}


int main(int argc, char **argv)
{
	pthread_t tid;
	void *tret;
	printf("tid size %d\n", sizeof(tid));
	pthread_create(&tid, NULL, th_fun1, NULL);
	pthread_join(tid, &tret);
	printf("thread return value %d\n", (long)tret);

	pthread_create(&tid, NULL, th_fun2, NULL);
	pthread_join(tid, &tret);
	printf("thread return value %d\n", (long)tret);

	pthread_create(&tid, NULL, th_fun3, NULL);
	pthread_cancel(tid);
	pthread_join(tid, &tret);
	printf("thread exit value %d\n", (long)tret);

	return 0;
}
