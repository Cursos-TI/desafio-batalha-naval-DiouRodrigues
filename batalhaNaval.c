#include <stdio.h>

#define tam   10
#define navio 3
#define agua  0

int main(){                                                   
    int letras[10]={'A','B','C','D','E','F','G','H','I','J'};//VARIAVEL RESPONSAVEL PELAS LETRAS DAS LINHAS
    int tabuleiro[tam][tam]= {agua};                           //(LEMBRANDO QUE O 'A' É REFERENTE A 0 E O 'J' É REFERENTE A 9)
    //NAVIO HORIZONTAL
    tabuleiro[0][3]= navio;
    tabuleiro[0][4]= navio;
    tabuleiro[0][5]= navio;

    //NAVIO VERTICAL
    tabuleiro[7][2]= navio;
    tabuleiro[6][2]= navio;
    tabuleiro[5][2]= navio;

   int i,j;
   
   //RESPONSAVEL POR INDENTIFICAR SE PODE ADICIONAR UM NAVIO NA POSIÇÃO
   int podeColocarNavio(int tabuleiro[tam][tam], int linha, int coluna, int tamanho, char direcao) {
    for (int i = 0; i < tamanho; i++) {
        int l = linha;
        int c = coluna;

        if (direcao == 'H') c += i; // horizontal
        else if (direcao == 'V') l += i; // vertical

        // Fora dos limites do tabuleiro
        if (l >= tam || c >= tam) return 0;

        // Espaço já ocupado
        if (tabuleiro[l][c] != agua) return 0;
    }
    return 1;
    
    } ; 
   //FOR RESPONSAVEL POR ENUMERAR AS COLUNAS(LEMBRANDO QUE O 1 É REFERENTE A 0 E O 10 É REFERENTE A 9)
   printf("  ");
   for ( i = 1; i <= tam; i++)
   {
    printf("%2d ",i);
   };
   printf("\n");
   
   //FOR RESPONSAVEL POR EXIBIR O TABULEIRO
   for ( i = 0; i < tam; i++)
   {
    printf("%c|",letras[i]);
    for ( j = 0; j < tam; j++)
    {   
        printf(" %d|",tabuleiro[i][j]);
    };
    printf("\n");
    
   };
   

    return 0;
}