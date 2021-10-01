#include <stdio.h>
#include <string.h>

#define size 100
char stack[size];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    char store;
    store = stack[top--];
    return store;
}

int main()
{
    char arr[50];
    int i = 0, len = 0, count = 0;
    
    printf("Enter a string\n");
    scanf("%s", arr);

    len = strlen(arr);

    for (i = 0; i < len; i++)
    {
        push(arr[i]);
    }

    for (i = 0; i < len; i++)
    {
        if (arr[i] == pop())
        {
            count++;
        }
    }

    if (count == len)
    {
        printf("%s is a palindrome", arr);
    }

    else
    {
        printf("%s is not a palindrome", arr);
    }

    return 0;
}