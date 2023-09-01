#include<stdio.h>
#include<unistd.h>
int main()
{
pid_t pid ,ppid;
pid = getpid();
ppid = getppid();
 printf("pid = %d \n",pid);
 printf("ppid = %d \n",ppid);
}
