// Questão 1
// a)

typedef struct Reg{
  int ref;
  float valor;
  Reg *prox, *ant;
  }No;
  
// b)

typedef struct Reg{
  char mat[10];
  char nome[20];
  int idade;
  Reg *prox;
  }No;
  
// c)
{
  novo->prox = LD->Inicio;
  LD->Inicio->ant = novo;
  LD->Inicio = novo;
  tamanho++;
}

// d)
{
  novo->ant = LD->Fim;
  LD->Fim->prox = novo;
  LD->Fim = novo;
  tamanho++;
 }
