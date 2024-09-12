#include <stdio.h>
#include <ctype.h>

int isVowel(char ch)
{
    ch = tolower(ch); // Convert character to lowercase
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
    FILE *inputFile, *vowelFile, *nonVowelFile;
    char ch;

    // Open files
    inputFile = fopen("text1.txt", "r");
    vowelFile = fopen("vow.TXT", "w");
    nonVowelFile = fopen("nonvow.TXT", "w");

    // Check if files opened successfully
    if (inputFile == NULL || vowelFile == NULL || nonVowelFile == NULL)
    {
        printf("Unable to open files.\n");
        return 1;
    }

    // Read from input file and write to respective files
    while ((ch = fgetc(inputFile)) != EOF)
    {
        if (isalpha(ch))
        {
            if (isVowel(ch))
                fputc(ch, vowelFile);
            else
                fputc(ch, nonVowelFile);
        }
    }

    // Close files
    fclose(inputFile);
    fclose(vowelFile);
    fclose(nonVowelFile);

    printf("Vowels and non-vowels have been written to vow.TXT and nonvow.TXT respectively.\n");

    return 0;
}
