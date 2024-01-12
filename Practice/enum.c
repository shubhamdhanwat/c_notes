#include <stdio.h>
enum days
{
    MONDAY,
    TUESDAY,
    WEDNESDAY
};
int main()
{
    enum days dd;

    switch (MONDAY)
    {
    default:
        printf("by");
        break;
    case MONDAY:
        printf("hello");
        break;

    case TUESDAY:
        printf("wrold");
        break;
    }
}