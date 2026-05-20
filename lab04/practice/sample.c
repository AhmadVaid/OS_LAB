#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(){
pid_t pid;
pid = fork();
if (pid<0){
printf("fork failed");
}
else if(pid==0){
printf("child process");
}
else{
printf("parent process");
}
return 0;
}
