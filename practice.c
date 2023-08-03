#include <stdio.h>
#include <string.h> // Include the string.h library for strcmp function

void hello(const char *name)
{
    if (strcmp(name, "imman") == 0) // Use strcmp to compare strings
    {
        printf("Welcome Boss %s!\n", name);
    }
    else
    {
        printf("Hello %s!\n", name);
        printf("Welcome\n");
    }
}

int main()
{
    char user[100]; // Use a character array to store the user's input (string)

    printf("Enter your name: ");
    scanf("%s", user); // Read the user's input into the character array

    hello(user); // Pass the user's name to the hello function

    return 0;
}

