#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char command[50];
    const char *allowed_commands[] = {"dir", "cd", "echo", "type", "cls", NULL};
    int valid_command = 0;

    // Remove newline character
    printf("Enter the command: ");
    fgets(command, sizeof(command), stdin);
    command[strcspn(command, "\n")] = '\0';

    // Validate the command against the whitelist
    for (int i = 0; allowed_commands[i] != NULL; i++)
    {
        if (strcmp(command, allowed_commands[i]) == 0)
        {
            valid_command = 1;
            break;
        }
    }

    if (valid_command)
    {
        system(command);
    }
    else
    {
        printf("Invalid command. Allowed commands are: dir, cd, echo, type, cls\n");
    }

    return 0;
}