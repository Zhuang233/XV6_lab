#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

int main(int argc,char* argv[]){
    int a;
    fprintf(1,"This is my own app\n");
    fprintf(1,"My PID is: %d\n",getpid());
    a = fork();
    a = fork();

    while(1)
        a++;
    exit(0);
}

