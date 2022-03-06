#include <stdio.h>
#include <stdbool.h>
void main ()
{
  int n1,i,a=0,i2,a2=0;
  bool np;
  printf ("Introduce un numero\n");
  scanf ("%i",&n1);
  for(i=1;i<=n1;i++)
    {
      if (n1%i==0)
		{
	 	 a++;
		}
    }
 	 while (a == 2)
    	{
      	printf("El numero es primo\n");
     	np=true;
      	break;
    	}
  if(a>2)
    {
      printf("El numero no es primo\n");
      np=false;
    }
  if(np==true)
    {
    	printf("np true\n");
    }
    else
    {
    	printf("np false\n");
    }
    	while(np==true)
    	{
    		n1--;     
    		for (i2 = 1; i2 <= n1; i2++)
    			{
    			  if (n1 % i2 == 0)  
    			    {
    					a2++;
    		   		}   		 
    			}  
    		if (a2 == 2 && n1 > 0)
    			{    			  
    				printf ("%i es primo\n", n1);
        		}		      
    		    	else if (a2 > 2 && n1 > 0)
    			{ 
    			printf ("%i no es primo \n", n1);
    			} 
    			a2 = 0;  
    			if (n1 < 0)
    			{
    	  			break;
    	  		}
    	}
}