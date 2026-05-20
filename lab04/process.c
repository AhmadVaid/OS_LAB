#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){
pid_t pid;
pid = fork();
if (pid<0){
printf("fork failed");
}
else if(pid==0){
printf("child process\n");
printf("child pid is %d\n",getpid());
printf("child ppid is %d\n", getppid());
}
else{
wait(NULL);
printf("paernt process\n");
printf("parent pid is %d\n",getpid());
printf("parent ppid is %d\n", getppid());
}
return 0;
}
