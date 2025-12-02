int main(int argc,char *argv[])
{
    int i = 2;
    int nb = atoi(argv[1]);

    if (argc == 2)
    {
        if (nb == 1)
            printf("1");
        while (nb > 1)
        {
            if (nb % i == 0)
            {
                printf("%d",i);
                nb = nb / i;
                if (nb > 1)
                    printf("*");
            }
            else
                i++;
        }
        
    }
    printf("\n");
}