#include"main.h"
/**
 * times_table - Entry point
 * description: function that prints times table
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
        int i;

        if (n < 98)
        {
                for (i = n; i <= 98; i++)
                {
                    	printf("%d", i);
                        if(i < 98)
                        {
                                printf(", ");
                        }
                }
        }
        if (n == 98)
        {
                printf("%d", n);
        }
        if (n > 98)
        {
                for (i = n; i >= 98; i--)
                {
                        printf("%d", i);
                        if(i > 98)
                        {
                                printf(", ");
                        }
                }
        }
        printf("\n");
}
