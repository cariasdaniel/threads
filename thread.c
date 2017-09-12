#include <stdio.h>
#include <pthread.h>

void *trabDeThread(void * trab){
	printf("isso é uma thread\n");


	return NULL;
}

int main(){

	void* job;
	
	pthread_t trabalho;
	pthread_create(&trabalho,NULL,trabDeThread,&job);
	pthread_join(trabalho,NULL);
	return 0;
	}
