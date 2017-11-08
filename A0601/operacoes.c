
#include <stdlib.h>
#include "Pilha.h"


void iniciarPilha (struct Pilha* p){
    int i;
    
    for (i=p->topo; i > 0;i--){
    p->elem[i] = 0;
    p->topo++;
}
p->topo=PILHA_VAZIA;
}


int iserir(struct Pilha* p,char dado){
    if (p->topo==MAX_ELEM-1)
        printf ("\nNão é possivel inserir!PILHACHEIA");
    else{
        p->topo++;
        p->elem[p->topo]=dado;        
    }
}

int palindromo (struct Pilha p){
    struct Pilha pp;
    int resultado = SIM;
    int i;
    
    iniciarPilha(&pp);
    
    for (i=p.topo;i >=0;i--){
        inserir(&pp,p.elem[i]);
    }
    
    i=0;
    
    while(resultado==SIM && i < p.topo){
        if(p.elem[i] == pp.elem[i])
            i++;
        else
            resultado=NAO;
               
    }
    
    return resultado;
       
}






