float power(float, int);
int factorial(int);

float power(float x, int y)
{
    float pow = 1;

    for (int i = 1; i <= y; i++)
    {
        pow *= x;
    }
    return pow;
}

int factorial(int n)
{
    int fact = 1;
    for (int i = n; i > 1; --i)
    {
        fact *= i;
    }
    return fact;
}

int isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}