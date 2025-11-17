int main()

{
    int num = 2;
    if (num >= 0)
    {
        if (num % 2 == 0)
            printf("é par e positivo");
        else
            printf("é impar e positivo");
    }
    else
        printf("é negativo");
    return 0;
}