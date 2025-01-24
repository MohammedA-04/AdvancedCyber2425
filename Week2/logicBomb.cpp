#include <stdio.h>
#include <string.h>

/* To Trigger It

Try to input "trigger"
This match the conditional statement and remove the file
In turns removes the file "important_file.txt"

*/

int main()
{

    char userInput[50];
    printf("Enter your input:");

    fgets(userInput, sizeof(userInput), stdin);
    userInput[strcspn(userInput, "\n")] = '\0'; // finds 1st instance of \n and replaces with \0

    // if string compared is equal to trigger then remove file
    if (strcmp(userInput, "trigger") == 0)
    {
        // < would file removal as remove("important_file.txt");
        printf("Removing the file!\n");
    }
    else
    {
        printf("You're safe!\n");
    }
}