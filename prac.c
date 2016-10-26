#include <stdio.h>
void main()
{
int i = 1, x = 5;
i = i || (x=10);
printf ("x = %d",x);
}
