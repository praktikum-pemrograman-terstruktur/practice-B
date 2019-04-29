#include <stdio.h>

int main()
{
    int a, b, index_number;

    char number[11][6] = {"one", "two", "three", "four", "five", "six",
                          "seven", "eight", "nine", "even", "odd"};
    scanf("%d\n%d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            index_number = i - 1;
        }
        else
        {
            index_number = 9 + i % 2;
        }
        printf("%s\n", number[index_number]);
    }
    return 0;
}
