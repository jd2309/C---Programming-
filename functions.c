#include<stdio.h>

void display()
{
    printf("No Argument No Return\n");
}

void show(int a)
{
    printf("Argument No Return: %d\n", a);
}

int getValue()
{
    return 100;
}

int calculate(int a)
{
    return a * 2;
}

int main()
{
    int x = 10, result;

    display();

    show(x);

    result = getValue();
    printf("No Argument With Return: %d\n", result);

    result = calculate(x);
    printf("Argument With Return: %d\n", result);

    return 0;
}
