#include <stdio.h>
#include <string.h>

// Takes a char* string then copied into variable
// called buffer with a size of 99 plus \0 but
// problem is that it is copied without check the size of input
// therefore it is vulnerable to buffer overflow attack capable of
// corrupting the memory (stack overflow).

void vulnerable_function(char *input)
{
    // copies buffers into input
    char buffer[100];
    strcpy(buffer, input);
    printf("Input: %s\n", buffer);
}

int main()
{
    // Set char buffer to 1000
    char user_input[1000];

    // Get user input
    printf("Enter your input: ");
    gets(user_input);

    // call function
    vulnerable_function(user_input);
    return 0;
}