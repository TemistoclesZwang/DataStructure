#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;


typedef struct
{
   int ** adjacencia;
   int n;
}Grafo;

typedef Grafo * tipoGrafo;



tipoGrafo criarGrafo(int n){
   int i,j;
   tipoGrafo g = (Grafo* )malloc(sizeof(Grafo));
   
   g -> n = n;
   g -> adjacencia =(int **) malloc (n * sizeof(int *));
   
   for (i = 0; i < n; i++)
   {
      g -> adjacencia[i] = (int *) malloc (n * sizeof(int));
   }
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         g->adjacencia[i][j] = 0;
      }
      
   }
   return g;
}

void mostrarArestas(tipoGrafo g){
	int u = 0;
   int v = 0;
   int loop = v += u+1;
	for(u; u < g->n; u++){
		for(loop; v < g->n; v++){
			if(g->adjacencia[u][v]){
            cout << "[u]" << u << endl;
            cout << "[v]" << v << endl;
			}
		}
	}
}

void insere_aresta(tipoGrafo g, int u, int v){
	g->adjacencia[u][v] = 1; 
	g->adjacencia[u][v] = 1; 
}



int grau ( tipoGrafo g, int u) {
   int v = 0; 
   int grau = 0;
   for (v = 0; v < g->n; v++)
   {
      if ( g->adjacencia [u][v])
      {
         grau++;
      }
   }
   return grau;
}


int mais_popular ( tipoGrafo g) {

   int u, max , grau_max , grau_atual ;
   max = 0;
   grau_max = grau(g, 0);

   for (u = 1; u < g->n; u++) {
      grau_atual = grau(g, u);
      if ( grau_atual > grau_max ) 
      {
         grau_max = grau_atual;
         max = u;
      }
   }
   return max;
}

void remove_aresta(tipoGrafo g, int u, int v){
   if (g == NULL)
   {
      cout << "NULL" << endl;
   }
   

	g->adjacencia[u][v] = 0; 
	g->adjacencia[u][v] = 0;
}

int verificarAresta(tipoGrafo g, int u, int v){
	return g->adjacencia[u][v];
}


void destruirGrafo(tipoGrafo g){
	int i = 0;
	for(i; i < g->n; i++){
		free(g->adjacencia[i]);
	}
	free(g->adjacencia);
	free(g);
}

int main(int argc, char *argv[])
{
   // gerar matriz
   int entrada;
   tipoGrafo novoGrafo;

   cout << "Insira o tamanho da matriz: " << endl;
   cin>>entrada;
   novoGrafo = criarGrafo (entrada);
   
   // inserindo arestas
   int qtdArestas ;

   cout << "Quantas arestas quer inserir?" << endl;
   cin>>qtdArestas;
   
   int u,v;
   for (int i = 0; i < qtdArestas; i++)
   {
      cout << "Insira os valores para as arestas [U] e [V]" << endl; 
      cout << "Somente entre 0 e " << entrada << endl;
      cout << "[U]: " << endl;
      cin>>u;
      cout << "[V]: " << endl;
      cin>>v;
      insere_aresta(novoGrafo,u,v);
   }
   // menu de opções
   int op;
   while (op!=0)
   {
      cout << "---------------------------------------" << endl;
      cout << "1 - Remover arestas" << endl;
      cout << "2 - Encontrar mais popular" << endl;
      cout << "3 - Verificar aresta" << endl;
      cout << "4 - Mostrar arestas" << endl;
      cout << "5 - Destruir grafo" << endl;

      cout << "0 - Sair" << endl;
      cin >> op;

      switch (op)
      {
      case 1:
      cout << "Insira os valores de U e V para remover:" << endl;
      cout << "[U]: " << endl;
      cin>>u;
      cout << "[V]: " << endl;
      cin>>v;
      remove_aresta(novoGrafo,u,v);
      cout << "Remoção concluída" << endl;
      break;

      case 2:
      cout << "Resultado: " << mais_popular(novoGrafo) << endl;
      break;
      
      case 3:
      cout << "Insira os valores de U e V para verificar a aresta:" << endl;
      cout << "[U]: " << endl;
      cin>>u;
      cout << "[V]: " << endl;
      cin>>v;
      cout << "Resultado: "<< verificarAresta(novoGrafo,u,v) << endl;
      break;

      case 4:
      cout << "Arestas:" << endl;
      mostrarArestas(novoGrafo);
      break;

      case 5:
      destruirGrafo(novoGrafo);
      cout << "Destruído" << endl;
      break;

   }  
   }
   

   return 0;
}

