#include <cs50.h>
#include <stdio.h>
 
int main()
{
    int a, b, dob=1;
    a = get_int ("A: ");
    b = get_int ("B: ");
    
    for (int i = a; i < b; i++)
    {
        dob *= i;
    }
    printf ("A*B=%d\n", dob);
}