// Questão 3

// a) Busca de elementos na lista encadeada

No* Busca(No* L, int k)
{
  No* p;
  for (p = L->prox; p!= NULL; p = p->prox) 
    if (p->info == k) return p; 
   return NULL;
 }

// b) Busca elementos na LDE

int BuscarDadoLD(Dupla *LD, int k)
{
  int achou=0;
  int pos=1;
 No *copia;
 if(L_Vazia(LD)) cout<<"Lista vazia!"<<endl; 
 else
  copia = LD->Inicio; 
  while(copia->prox != NULL) 
  { if(copia->info == k) achou = pos; 
    else
    pos++; 
   copia = copia->prox; 
   }
  }
 return achou; 
 }
 
 // c) Impressão de dados na LDE
 
 void ImprimeLD(Dupla *LD)
 { No *copia;
    copia = LD->Inicio;
    int cont=1;
    if(L_Vazia(LD)) cout << "Lista vazia" << endl;
    else
    while (copia!=NULL)
    {
      cout<<"Lista["<<cont<<"] = "<<copia->info<<endl;
      copia = copia->prox;
      cont++;
      }
    }
