int largest_number(int a, int b, int c)

/**
 * main - tests function that prints if integer is positive, negative, or zero
 * Return: 0
 */
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
