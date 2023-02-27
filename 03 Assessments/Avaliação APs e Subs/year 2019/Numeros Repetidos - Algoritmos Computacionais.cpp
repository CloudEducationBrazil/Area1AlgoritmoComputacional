#include <stdio.h>
int main(void)
{ int tam;
  int a[tam], b[tam], aux;
  int cont = 0; int ind = 0;
 
  printf("Digite Tamanho: "); scanf("%d", &tam);
  
  for ( int x = 0; x < tam; x++)
    { printf("Digite Elemento [%d]: ", x); scanf("%d", &a[x]); 
    }
    
  for ( int x = 0; x < tam; x++){
    cont = 0;
    for ( int y = x + 1; y < tam; y++)
      if ( a[x] == a[y] )
      { cont++;
      }
     
	 if ( cont > 0 )
	 {  aux = 0;
	    for ( int w = 0; w <= ind; w++)
          if ( b[w] == a[x] )
            aux = 1;
	    if ( aux == 0 )
	    {	
          b[ind] = a[x];
          ind++;
		}
  	}
  }
  for ( int x = 0; x < ind; x++)
    printf("%d ", b[x]);

  printf("Total Repetidos: %d ", ind);
}
