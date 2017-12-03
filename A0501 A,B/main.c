# include  <stdio.h>
# include  <stdlib.h>
# include  <strings.h>
# include  "listalinearestatica.h"

int  main ( int argc, char ** argv) {
    struct Lista lta; //  lista linear estática
    struct Lista lConcat; // lista linear esatica concatenada
    struct Lista sl;
    struct Lista inter1; // inter1 = lista linear estática
    struct Lista inter2; // inter2 = lista linear estática
    int opcao;
    char c;

    do{
        printf ( " \n \n - TESTE - \n \n " );
        printf ( " 1- Iniciar uma lista \n " );
        printf ( " 2- Inserir na lista \n " );
        printf ( " 3- Inserir ordenado na lista \n " );
        printf ( " 4- Acessar da lista \n " );
        printf ( " 5- Alterar da lista \n " );
        printf ( " 6- Remover da lista \n " );
        printf ( " 7- Inverter a lista \n " );
        printf ( " 8- Mostrar lista \n " );
        printf ( " 9- sublista da lista \n " );
        printf ( " 10- Concatenar uma lista \n " );
        printf ( " 11- Localizar uma posicao \n " );//não funciona
        printf ( " 12- Colocar uma lista em ordem crescente \n " );//não funciona
        printf ( " 13- Intercalar duas listas  \n " );//não funciona
        printf ( "14- Verificar se uma lista eh palindromo\n");
        printf ( "15- Remover elementos repetidos de uma lista\n");
        printf ( "16- Finalizar programa\n\n");
        scanf  ( "%d", &opcao);
        switch(opcao){
            case  1 :
                iniciarLista (&lta);
                mostrarLista (lta);
                break ;
            case  2 :
                inserir (& lta, POS_FINAL, ' T ' );
                inserir (& lta, POS_FINAL, ' A ' );
                inserir (& lta, POS_FINAL, ' T ' );
                inserir (& lta, POS_FINAL, ' I ' );
                mostrarLista (lta);
                printf ( " \n \n Inserindo uma letra no meio ... \n " );
                inserir (& lta, 2 , ' S ' );
                mostrarLista (lta);                
                printf ( " \n \n Tentando inserir fora dos limites  ... \n " );
                inserir (& lta, 1000 , ' F ' );
                break ;
            case  3 :
                inserirOrdenado (& lta, ' I ' );
                mostrarLista (lta);
                break ;
            case  4 :
                c = acessar (lta, 1 );
                printf ( " \n Principal: % c encontrado na posicao % d " , c, 1 );
                mostrarLista (lta);
                break ;
            case  5 :
                alterar (& lta, 2 , ' G ' ); 
                mostrarLista (lta);
                break ;
            case  6 :
                printf ( " \n Removendo um elemento ... \n " );
                remover(& lta, 4 );
                mostrarLista (lta);              
                printf ( " \n Tentando remover fora dos limites  ... \n " );
                remover (& lta, 100 );
                printf ( " Nao existe a posicao! \n " );
                mostrarLista (lta);
                break ;
            case  7 :
                printf ( " \n Antes de inverter: " );
                mostrarLista (lta);
                inverter (&lta);
                printf ( " \n Depois de inverter: " );
                mostrarLista (lta);
                break ;
            case  8 :
                mostrarLista (lta);
                break ;
            case  9 :
                sl = subLista (lta, 0 , 3 );
                mostrarLista (sl);
                break ;
            case  10 :
                iniciarLista (&lConcat);
                inserir (&lConcat, POS_FINAL, ' M ' );
                inserir (&lConcat, POS_FINAL, ' U ' );
                inserir (&lConcat, POS_FINAL, ' R ' );
                inserir (&lConcat, POS_FINAL, ' I ' );
                concatenar (&lta, &lta);
                mostrarLista (lta);
                break ;
            case  11 :
                // inicializando o vetor onde [];
                int n , v = 0;
                for (v = 0; v <MAX_ELEM; v ++) {
                    n [v] = 0;
                }
                localizarNo (& lta, 'L', lta []);
                break; 
            case  12 :
                ordenar (& lta);
                mostrarLista (lta);
                break ;
            case  13 :
                inserir (& inter1, POS_FINAL, ' A ' );
                inserir (& inter2, POS_FINAL, ' H ' );
                inserir (& inter1, POS_FINAL, ' G ' );
                inserir (& inter2, POS_FINAL, ' D ' );
                inserir (& inter2, POS_FINAL, ' L ' );
                inserir (& inter2, POS_FINAL, ' F ' );
                interLista (& inter1, & inter2);
                break ;
            case 14:
                palindromo(lta);
                break;
            case 15:
                removerIguais(&lta);
                mostrarLista(lta);
                break;
            case 16:
                printf("\nFIM!");
                break;
        }
    }while(opcao!=16);


    return 0;
}


