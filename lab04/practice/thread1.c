#include <stdio.h>
#include <pthread.h>

void *thread_func(void *arg){
for (int i=0;i<5;i++){
printf(" im just a baby:(\n");
}
}
int main (){
pthread_t thread;
pthread_create (&thread,NULL,thread_func, NULL);
for (int j=0;j<5;j++){
printf("im the parent :)\n");
}
pthread_join(thread,NULL);
return 0;
}
