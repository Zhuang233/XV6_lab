#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

int main(int argc,char* argv[]){
    fprintf(1,"This is my own app\n");
    fprintf(1,"My CPU id is: %d\n",getcpuid());
    exit(0);
}
