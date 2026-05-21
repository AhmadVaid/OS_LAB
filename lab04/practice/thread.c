#include <stdio.h>
#include <pthread.h>

void *thread_code (void *arg){
printf("inside child thread\n");
}

int main(){
pthread_t thread;
pthread_create (&thread, NULL, thread_code, NULL);
printf("inside main thread\n");
pthread_join(thread, NULL);
return 0;
}
