// - Criação de uma struct - 

struct Cadastro {
    char nome[30];
    int idade;
    char rua [50];
    int numero;
};

// Declaração no main:

struct Cadastro c1;


typedef struct {
    char nome[30];
    int idade;
    char rua [50];
    int numero;
} Cadastro;

// Declaração no main:

Cadastro c1;

// - Acesso aos dados -

// Cada campo(variável) da estrutura pode ser acessado usando o operador "."(ponto)

struct Cadastro c1;

strcpy(c1.nome, "Joao"); //← Atribuição direta
c1.idade = 32;

fgets(c1.rua, 30, stdin);// ← inseção pelo teclado
scanf("%d", &c1.numero);

// - Atribuição -

struct Ponto{
int x;
int y;
};

struct Ponto x;
struct Ponto y = {1,3};

x = y;

// - Aninhamento -

struct Endereco{
char rua[50];
int numero;
};

struct cadastro{
char nome[50];
int idade;
struct Endereco end;
};

// - Vetores -

struct Cadastro c[4];
c[0].idade = 18;