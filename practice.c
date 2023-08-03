#include<stdio.h>
#include<string.h>

void hello(char *name)
{
    if (strcmp(name,"imman") == 0)
    {
        pritnf("Hello Boss %s!",name);
    }else{
        printf("Welcome");
    }
    
}


int main()
{
    char user;
    
    hello(user);
    return 0;
}