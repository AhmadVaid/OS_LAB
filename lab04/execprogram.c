#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){
pid_t pid;
pid=fork();
if (pid<0){
printf("fork failed");
}
else if (pid==0){
execl("./process", "process", NULL);
}
else{
wait(NULL);
printf("parent process");
}
return 0;
}
