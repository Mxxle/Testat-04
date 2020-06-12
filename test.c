#include <stdio.h>

int primfaktor(int);

int main()
{
    int pf;

  while ((pf = primfaktor(12)) > 1)
    printf("%d\n", pf);
  while ((pf = primfaktor(7)) > 1)
    printf("%d\n", pf);
  printf("%d\n", primfaktor(1));
  return 0;

}
    

int primfaktor(int pf){


	if(pf<2) return -2;
	

	for ( int teiler = 2 ; teiler < pf; teiler++) {
		
		if( pf % teiler == 0) {
			
			while (teiler <= pf){
        		
				if (pf%teiler == 0){
            	
					pf /= teiler;
					return teiler;	
        		}
	        else{	
				teiler++;
			}
			
	    		}
	    		return -1;
			}
		}
			return -1;
	}
	return 0;
