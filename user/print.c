#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    write(1, "My student no is 052010420\n", 27);
    exit(0);
}
