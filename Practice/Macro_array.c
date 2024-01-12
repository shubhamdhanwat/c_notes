#include <stdio.h>
#define SIZE 5

void accept(int *);
void display(int *);
void oddSum(int *);
void evenSum(int *);
void sort(int *);
void max_min(int *);

void main()
{
    int arr[SIZE];
    accept(arr);
    display(arr);
    oddSum(arr);
    evenSum(arr);
    sort(arr);
    max_min(arr);
}

void accept(int *p)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter the %d element :", i);
        scanf("%d", &p[i]);
    }
}

void display(int *q)
{
    printf("The elements in the array are :");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", *(q + i));
    }
    printf(".\n");
}

void oddSum(int *p)
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (p[i] % 2 != 0)
        {
            sum += p[i];
        }
    }

    printf("The sum of odd elements in the array is %d.\n", sum);
}

void evenSum(int *p)
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (p[i] % 2 == 0)
        {
            sum += p[i];
        }
    }

    printf("The sum of even elements in the array is %d.\n", sum);
}

void sort(int *p)
{
    int temp[SIZE];
    int a = 0;

    for (int i = 0; i < SIZE; i++)
    {
        temp[i] = p[i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (temp[i] < temp[j])
            {
                a = temp[i];
                temp[i] = temp[j];
                temp[j] = a;
            }
        }
    }
    printf("The array after sorting in descending order \n");
    display(temp);
}

void max_min(int *p)
{
    int temp[SIZE];
    int a = 0;

    for (int i = 0; i < SIZE; i++)
    {
        temp[i] = p[i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (temp[i] < temp[j])
            {
                a = temp[i];
                temp[i] = temp[j];
                temp[j] = a;
            }
        }
    }
    int min = temp[SIZE - 1];
    int max = temp[0];
    printf("The minimum element in the array is %d .\n", min);
    printf("The maximum element in the array is %d .\n", max);
}