#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
int main(){
pid_t pid;
pid=fork();
if(pid==0){
printf("child process created\n");
exit(0);
}
else{
printf("parent process created\n");
sleep(10);
}
return 0;
}
