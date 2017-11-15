#include <stdio.h>
#include <stdlib.h>

struct lista
{
  int info;
  struct lista *prox;
};

typedef struct lista Lista;

Lista *lista_cria(void);
Lista *lista_insere(Lista *l, int v);
Lista *lista_imprimi(Lista *l);

int main()
{
  Lista *l;
   
  l = lista_cria();
  l = lista_insere(l, 23);
  l = lista_insere(l, 12);
  l = lista_insere(l, 35);
  l = lista_insere(l, 40);
  lista_imprimi(l);

  return 0;
}

Lista *lista_cria(void)
{
  return NULL;
}

Lista *lista_insere(Lista *l, int v)
{
  Lista *novo = (Lista*)malloc(sizeof(Lista));
  novo->info = v;
  novo->prox = l;
  return novo;
}

Lista *lista_imprimi(Lista *l)
{
  Lista *p;
  for(p = l; p != NULL; p = p -> prox)
  {
    printf("%d", p -> info);
   
  }
}

