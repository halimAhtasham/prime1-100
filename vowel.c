// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter an alphabet: ");
//     scanf("%c", &ch);

//     switch (ch)
//     {
//     case 'a':
//     case 'A':
//     case 'e':
//     case 'E':
//     case 'i':
//     case 'I':
//     case 'o':
//     case 'O':
//     case 'u':
//     case 'U':
//         printf("Vowel");
//         break;
//     default:
//         printf("Consonant");
//     }
//     return 0;
// }

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch))
    {                     // Check if the character is alphabetic
        ch = tolower(ch); // Convert to lowercase before checking

        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
        }

        // Additional check for uppercase vowels
        switch (ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("vowel");
            break;
        }
    }
    else
    {
        printf("Not an alphabet character");
    }

    return 0;
}
