int factorial(int nb)
{
    int temp = nb - 1;

    while (temp != 0) {
        nb = nb * temp;
        temp - 1;
    }
}

void my_putchar(char c)
{
    write(1, &c, 1);
}
