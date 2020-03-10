#include <stdio.h>

int main()
{
    char ch;
    
    scanf("%c", &ch);
    
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("Lettuce");
    else if(ch >= '0' && ch <= '9')
        printf("Durian");
    else
        printf("Nani!?");

    return 0;
}
