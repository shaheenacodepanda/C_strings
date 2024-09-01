// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
 

void str_rev( char *name, int initial, int final)

{   char temp;
    for( int i = initial ; i < final ; i++, final--)
    {   temp = name[final];
        name[final] = name[i];
        name[i] = temp;
    }
  
}

int main() {
    
char name[] = "Shaheena Kovvuri Princess";
printf("Original = %s \n", name);
int initial = 0, final;
int length = strlen(name);
 for( int i = 0 ; i <= length ; i++)
 { 
     if(name[i] == ' ' || name[i] == '\0')
     { 
         final = i-1;
         str_rev(name, initial, final);
         initial = i+1;
        
     }
 }
 
  printf("Reverse = %s \n ", name);

    return 0;
    
}
