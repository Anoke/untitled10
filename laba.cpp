#include <stdio.h>

int main ()
{
    char str[200];
    gets(str);
    printf("Строка:");
    puts(str);
    int a;
    scanf("%d",&a);
    printf("число:");
    printf("%d",a);
    return 0;
}
