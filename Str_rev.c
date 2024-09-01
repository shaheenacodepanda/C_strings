// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void str_rev( char *name)

{   char temp;
    int length = strlen(name)-1;
    for( int i = 0 ; i < length ; i++, length--)
    {    temp = name[length];//*(n+length-1);
      //  *(n+length-1) = *(n+i)
      name[length] = name[i];
        name[i] = temp;
    }
    printf("Reverse = %s \n ", name);
}

int main() {
    
char name[] = "Shaheena Kovvuri";
printf("Original = %s \n", name);
str_rev(name);
    return 0;
    
}
