
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <queue>

using namespace std;
int tamanho = 9;

typedef int strctDado;
typedef struct no
{
   strctDado dado;
   struct no *esquerda;
   struct no *direita;
} tipoNo;

typedef struct strctArvore
{
   tipoNo *raiz;
} tipoArvore;

void start(tipoArvore *a)
{
   a->raiz = NULL;
}

tipoNo *gerarNo(strctDado valor)
{
   tipoNo *novo;
   novo = (tipoNo *)malloc(sizeof(tipoNo));
   novo->dado = valor;
   novo->esquerda = NULL;
   novo->direita = NULL;
   return novo;
}

tipoNo *inserirNo(tipoNo *raiz, tipoNo *novo)
{
   if (raiz == NULL)
      raiz = novo;
   else
   {
      if (novo->dado > raiz->dado)
         raiz->direita = inserirNo(raiz->direita, novo);
      else if (novo->dado <= raiz->dado)
      {
         raiz->esquerda = inserirNo(raiz->esquerda, novo);
      }
   }
   return raiz;
}

void inOrdem(tipoNo *raiz)
{
   if (raiz != NULL)
   {
      inOrdem(raiz->esquerda);
      // printf("%d\n", raiz->dado);
      cout << raiz->dado << endl;
      inOrdem(raiz->direita);
   }
}

void preOrdem(tipoNo *raiz)
{
   if (raiz != NULL)
   {
      // printf("%d\n",raiz->dado);
      cout << raiz->dado << endl;
      preOrdem(raiz->esquerda);
      preOrdem(raiz->direita);
   }
}

void posOrdem(tipoNo *raiz)
{
   if (raiz != NULL)
   {
      posOrdem(raiz->esquerda);
      posOrdem(raiz->direita);
      // printf("%d\n", raiz->dado);
      cout << raiz->dado << endl;
   }
}

void inserirVetor(tipoArvore *a, strctDado *arrayInput, strctDado n)
{
   tipoNo *no;
   for (n = 0; n < tamanho; n++)
   {
      no = gerarNo(arrayInput[n]);
      a->raiz = inserirNo(a->raiz, no);
   }
}

void teste0(tipoNo *raiz)
{
   if (raiz != NULL)
   {
      cout << raiz->dado << endl; //imprimi raiz + dado solicitado(esq,dir)
      teste0(raiz->esquerda);     //imprimi o primeiro nível da esquerda

      // cout << raiz->dado << endl; //imprimi raiz + dado solicitado(esq,dir)
      teste0(raiz->direita); //imprimi o primeiro nível da direita
   }
}

tipoNo *buscar(tipoNo *raiz, int chave)
{
   if (raiz == NULL) // SE FOR UMA FOLHA
   {
      cout << "Nenhum valor encontrado" << endl;
      return raiz;
   }
   if (chave == raiz->dado)
   {
      cout << "Valor encontrado: " << raiz->dado << endl;
      return raiz;
   }

   if (chave < raiz->dado)
   {
      return buscar(raiz->esquerda, chave);
      //SE O CONTEÚDO DA RAIZ APONTANDO PARA x FOR x CHAME A FUNÇÃO BUSCAR
      // E VERIFIQUE NA FUNÇÃO BUSCAR SE ESSE CONTEÚDO É NULL OU SE É IGUAL AO QUE QUERO
   }
   else
   {
      return buscar(raiz->direita, chave);
      //SE O CONTEÚDO DA RAIZ APONTANDO PARA x FOR x CHAME A FUNÇÃO BUSCAR
      // E VERIFIQUE NA FUNÇÃO BUSCAR SE ESSE CONTEÚDO É NULL OU SE É IGUAL AO QUE QUERO
   }
}

tipoNo *acharMinimo(tipoNo *raiz)
{
   while (raiz->esquerda != NULL)
      raiz = raiz->esquerda;
   return raiz;
}

tipoNo *remover(tipoNo *raiz, int valor)
{
   tipoNo * temp;

   if (raiz == NULL)
      return raiz;

   else if (valor < raiz->dado) //menor que o valor da árvore
   {
      raiz->esquerda = remover(raiz->esquerda, valor); //chama a função e entra no nó
   }

   else if (valor > raiz->dado) // maior que o valor da árvore
   {
      raiz->direita = remover(raiz->direita, valor); //chama a função e entra no nó
   }
   else if (valor == raiz->dado) // se o valor que procuro for encontrado
   {
//caso1
      if (raiz->direita == NULL && raiz->esquerda == NULL) // se ele não tem filhos
      {
         raiz->dado = NULL;
         // delete raiz;
         return raiz;
      }
//caso2 direita
      if (raiz->direita != NULL && raiz->esquerda == NULL) // se tem algo na direita
      {

         // pai = raiz->direita; //puxa-se o filho para o lugar do pai
         raiz = raiz->direita;//FIXME:Exclusão
         return raiz;

         // raiz->direita = NULL; // removendo o nó
      }
//caso2 esquerda
      else if (raiz->direita == NULL && raiz->esquerda != NULL) // se tem algo na esquerda
      {
         raiz = raiz->esquerda;//FIXME:Exclusão
         return raiz;
      }
//caso3
      else if (raiz->direita != NULL && raiz->esquerda != NULL)
      {
         temp = acharMinimo(raiz->direita);
         raiz->dado = temp->dado;
         raiz->direita = remover(raiz->direita,raiz->dado);
      }
   }
      else
      {
         temp = raiz;
         if (raiz->esquerda == NULL)
         {
            raiz=raiz->direita;
         }
         else if (raiz->direita == NULL)
         {
            raiz=raiz->esquerda;
         }
         delete temp;
      }
      return raiz;
   
}


tipoNo *show(tipoNo *raiz)
{

   if (raiz == NULL)
   {
      return raiz;
   }
   else if (raiz->dado != NULL)
   {
      cout << "saida:" << raiz->esquerda << endl;
      cout << "saida:" << raiz->direita << endl;
      show(raiz);
   }
}

int opcoes()
{
   int escolhaUsuario;
   cout << "\n----------------------------------- " << endl;

   cout << "Opções: " << endl;
   cout << "1 - INSERIR DADOS" << endl;
   cout << "2 - MOSTRAR ÁRVORE ORIGINAL" << endl;
   cout << "3 - MOSTRAR RAIZ" << endl;
   cout << "4 - PRE ORDEM" << endl;
   cout << "5 - POS ORDEM" << endl;
   cout << "6 - IN ORDEM" << endl;
   cout << "7 - LARGURA" << endl;
   cout << "8 - BUSCAR" << endl;
   cout << "9 - REMOVER" << endl;
   cout << "0 - SAIR" << endl;
   cin >> escolhaUsuario;
   // system("clear");

   cout << "\n----------------------------------- " << endl;

   return escolhaUsuario;
}

int main()
{
   int i, j, arrayInput[tamanho];
   tipoArvore tree;
   tipoNo *no;

   int escolhaUsuario;
   start(&tree);

   queue<int> fila; //gerar fila

   do
   {
      escolhaUsuario = opcoes();
      switch (escolhaUsuario)
      {
      case 1:
         for (j = 0; j < tamanho; j++)
         {
            printf("inserir o número[%d]", j);
            scanf("%d", &arrayInput[j]); // o input vai parar no array
            fila.push(arrayInput[j]);    //colocar na fila
         }
         inserirVetor(&tree, arrayInput, j); //inserindo o arrayInput na árvore
         break;

      case 2:
         for (j = 0; j < tamanho; j++)
         {
            printf("%d\n", arrayInput[j]);
         }
         break;

      case 3:
         if (tree.raiz == NULL)
         {
            printf("Raiz vazia. Utilize a opção 1");
         }
         else
         {
            printf("Raiz: %d", tree.raiz->dado);
            break;
         }

      case 4:
         if (tree.raiz == NULL)
         {
            printf("Raiz vazia. Utilize a opção 1");
         }
         else
         {
            printf("pre ordem: \n");
            preOrdem(tree.raiz);
         }
         break;

      case 5:
         if (tree.raiz == NULL)
         {
            printf("Raiz vazia. Utilize a opção 1");
         }
         else
         {

            printf("pos ordem: \n");
            posOrdem(tree.raiz);
         }
         break;

      case 6:
         if (tree.raiz == NULL)
         {
            printf("Raiz vazia. Utilize a opção 1");
         }
         else
         {

            printf("in ordem: \n");
            inOrdem(tree.raiz);
         }
         break;

      case 7:
         // teste0(tree.raiz);
         printf("Largura: \n");
         while (!fila.empty())
         {
            cout << ' ' << fila.front();
            fila.pop();
         }
         break;

      case 8:
         int escolha;
         cout << "Qual número quer buscar?" << endl;
         cin >> escolha;
         buscar(tree.raiz, escolha);

         break;

      case 9:
         int op;
         cout << "Qual número quer remover?" << endl;
         cin >> op;
         remover(tree.raiz, op);

         break;
      }
      int getch();
   } while (escolhaUsuario != 0);
}
