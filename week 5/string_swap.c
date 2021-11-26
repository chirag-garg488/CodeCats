#include <stdio.h>
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    char a, b;
    printf("Enter the numbers");
    scanf("%c %c", &a, &b);
    swap(&a, &b);
    printf("%c %c", a, b);
    return 0;
}
