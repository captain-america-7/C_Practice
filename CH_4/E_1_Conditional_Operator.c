// Aruntej [21046]
// 1

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    ch > 98 && ch < 123 ? printf("Lower case alphabet.") : printf("Not a lower case alphabet.");
    ch < 123 && ch > 97 || chr > 64 && chr < 92 ? printf("Not a special symbol.") : printf("Special symbol.");
    return 0;
}
// 2
#include <stdio.h>
int main()
{
    char chr;
    printf("Enter a character : ");
    scanf("%c", &chr);
    chr < 123 && chr > 97 || chr > 64 && chr < 92 ? printf("Not a special symbol.") : printf("Special symbol.");
    return 0;
}