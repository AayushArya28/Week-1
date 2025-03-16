#include <stdio.h>

void printWord(int digit)
{
    char *words[] = {"zero", "one", "two", "three", "four",
                     "five", "six", "seven", "eight", "nine"};
    printf("%s ", words[digit]);
}

int main()
{
    int n, digit, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("zero\n");
        return 0;
    }
    int temp = n;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    while (rev > 0)
    {
        digit = rev % 10;
        printWord(digit);
        rev /= 10;
    }
    printf("\n");
    return 0;
}
