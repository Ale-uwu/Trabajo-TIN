#include <stdio.h>
#include <stdbool.h>

void main()
{
int n1=8,i2,a2=0;
bool a=true;
while (a==true)
{
n1--;
for(i2=1;i2<=n1;i2++)
    				{
    					if(n1%i2==0)
    						{
    							a2++;
    						}

    				}
    			if(a2==2 && n1>0)
    				{
    					printf("%i es primo\n",n1);
    				}
    			else if (a2>2 && n1>0)
    				{
    					printf("%i no es primo \n",n1);
    				}
a2=0;
if(n1<0)
	{
		break;
	}
}
}