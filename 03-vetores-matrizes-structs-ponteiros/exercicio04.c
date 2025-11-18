// - Ponteiros em C -

// Utilizados para fazer manipulação direta de endereços de memória.
// (*): usado para declarar o ponteiro
// (&): utilizado para acessar o endereço de memória

// <tipo> *<nome_do_ponteiro>;
int *idade;

Exemplo :

    int
    main()
{
    int *ptr;
    int valor = 10;

    ptr = &valor;

    printf("Endereço = %x", &valor);
    printf("Endereço = %x", ptr);
    printf("Valor = %d", *ptr);

    return 0;
}

// - Ponteiro para vetores -

// O nome de um vetor corresponde ao endereço do seu primeiro elemento, isto é, se v for um vetor v == &v[0].

int v[3] = {10, 20, 30, 40, 50};
int *ptr;

ptr = v;
ou
    ptr = &v[0];