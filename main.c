#include<stdio.h>
#include<conio.h>
int main()
{
    char character;
    printf("enter a character:");
    scanf("%c",&character);
    printf("!------------!\n");
    switch(character)
    {
    case 'a': printf("it is a vowel");

            break;

    case 'e': printf("it is a vowel");

            break;
    case 'i': printf("it is a vowel");

            break;
     case 'o' :printf("it is a vowel");

             break;
      case 'u':printf("it is a vowel");

             break;
    default:printf("it is not a vowel");
    }
    printf("\n!------------!");
return 0;
}
