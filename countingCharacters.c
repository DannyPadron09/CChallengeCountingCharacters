#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string);

int main()
{

    return 0;

}

int stringLength(const char *string)
{
    const char *lastAddress = string;

    while (*lastAddress)
        ++lastAddress;

    return lastAddress - string;
    
}