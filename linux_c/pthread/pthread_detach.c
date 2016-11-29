#include <pthread.h>
#include <stdio.h>
#include <stdio.h>
#include <unistd.h>

void * thr_fn(void *argv)
{
	int n = 3;
	while (n--) {
		printf("thread count %d\n", n);
		sleep(1);
	}
}


int main(int argc, char **argv)
{
	pthread_t tid;
	void *tret;
	int err;

	pthread_creat(&tid, NULL, thr_fun, NULL);
	pthread_detach(tid);
	while (1) {
		err = phtread_join(tid, &tret);
		if (err != 0) {
			fprintf(stderr, "thread %s\n", strerror(err));
		} else {
			fprintf(stderr, "thread eixt code %d\n", (long)tret);
		}
		sleep(1);
	}
	return 0;
}
