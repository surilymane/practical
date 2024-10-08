// check whether given character is vowel or consonant

#include <stdio.h>

int main()
{
    char alphabet;

    printf("Please enter the alphabet: ");
    scanf("%c",&alphabet);

    if ((alphabet=='a')||(alphabet=='e')||(alphabet=='i')||(alphabet=='o')||(alphabet=='u')||(alphabet=='A')||(alphabet=='E')||(alphabet=='I')||(alphabet=='O')||(alphabet=='U'))
    {
        printf("The alphabet %c is a vowel.",alphabet);
    }
    else
    {
        printf("The alphabet %c is a consonant.",alphabet);
    }

    return 0;

}
