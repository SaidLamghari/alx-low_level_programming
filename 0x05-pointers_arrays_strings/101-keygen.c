#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

    char getRandomChar(const char *charset, int charsetLength) {
   return charset[rand() % charsetLength];
}

int main() {
    srand(time(NULL));

    const char *lowercaseChars = "abcdefghijklmnopqrstuvwxyz";
    const char *uppercaseChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char *digitChars = "0123456789";
    const char *specialChars = "!@#$%^&*()-_+=<>?";

    const char *allChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_+=<>?";

    int passwordLength = 12;

    char password[passwordLength + 1];

    for (int i = 0; i < passwordLength; i++) 
    {
        const char *charset = allChars;

            int charsetLength = strlen(charset);
        password[i] = getRandomChar(charset, charsetLength);
    }

    password[passwordLength] = '\0';
    printf("Generated Password: %s\n", password);

    return 0;
}
