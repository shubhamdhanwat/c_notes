#include <stdio.h>
int countdigit(int);
int check_armstrong(int, int);

int main()
{
    int num;
    printf("Enter the number to check weather the number is armstrong no or not :");
    scanf("%d", &num);
    int ans = countdigit(num);
    // printf("The digits in %d=%d",num,ans);
    int ans1 = check_armstrong(num, ans);

    if (ans1 == 1)
    {
        printf("The %d is the armstrong number.\n", num);
    }
    else
    {
        printf("The %d is the not armstrong number.\n", num);
    }

    return 0;
}

int countdigit(int num)
{

    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    return count;
}
int check_armstrong(int num, int digit)
{
    int temp = num;
    int flag = 0;
    int sum = 0;
    while (num > 0)
    {
        int rem = num % 10;
        int pro = 1;
        for (int i = 0; i < digit; i++)
        {
            pro = pro * rem;
        }
        sum = sum + pro;
        num /= 10;
    }
    if (temp == sum)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}