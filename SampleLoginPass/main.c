#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_STR_LEN 50
int main()
{
    char prompt[50];
    char username[] = "amir";
    char password[] = "password";
    int login = 0;
    puts("[*] Enter Credentials");
    int attempts = 0;
    int max_attempts = 3;
    do
    {
        login = 1;
        puts("Username:");
        scanf("%s", prompt);
        if (strcmp(prompt,username) != 0)
            login = 0;
        puts("Password:");
        scanf("%s", prompt);
        if (strcmp(prompt,password) != 0)
            login = 0;
        attempts++;
        printf("Login attempts: %d\n", attempts);
        if (attempts >= max_attempts)
        {
              puts("[-] Permission denied");
              exit(1);
        }
    }while(login == 0);
    puts("[+] You've logged in succesfully\n");
}
