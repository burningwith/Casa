#include "stdio.h"

int main(int argc, char const *argv[])
{
    for(int i=1950; i<=2002; i++){
        printf("<option value=\"%d\">%d</option>\n", i, i);
    }
}