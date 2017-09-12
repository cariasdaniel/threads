#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void){
	pid_t processo;
	int id;
processo = fork();
if(processo<0){

	perror("deu errado\n");
	exit(1);
}
if(processo ==0){
id = 2;	
printf("tarefa Filho %d \n",id);
}
else{
id = 5;	
printf("tarefa Pai %d \n", id);

}
id = 3;
printf("processo em comum %d \n", id);
exit(0);

}