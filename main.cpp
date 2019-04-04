#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <numeric>

using namespace std;
int arraySum(int a[9]);


int main() 
{ 	
const char* lista2[6]={"BCG","BGC","CBG","CGB","GBC","GCB"};  
 
int minimos[6]={0,0,0,0,0,0};
int lista[9];

    
    while (scanf("%d", &lista[0])!=EOF)
    {
    for (int i = 1; i < 9; ++i) 
    {
        scanf("%d",&lista[i]);
    }
    
    int suma = (arraySum(lista));
	

    		minimos[0]=suma-lista[0]-lista[5]-lista[7];
    		minimos[3]=suma-lista[2]-lista[4]-lista[6];
    		minimos[4]=suma-lista[1]-lista[3]-lista[8];
			minimos[2]=suma-lista[2]-lista[3]-lista[7];
			minimos[1]=suma-lista[0]-lista[4]-lista[8];
			minimos[5]=suma-lista[1]-lista[5]-lista[6];

	int menorNRO = 1000000000;
	for (int z=0;z<6;z++)
	{
		if (menorNRO>=minimos[z])
		{
			menorNRO=minimos[z];
		}
		
	}
	int cont = 0;
	
	int menorINDEX;
	int interruptor = 0;

	for (int z=0;z<6;z++)
	{	
		if (interruptor == 1)
		{
			break;
		}
		if(minimos[z] == menorNRO)
		{
		menorINDEX = z;
		interruptor = 1;
		
		}
	}
	
    cout<<lista2[menorINDEX]<<" "<<menorNRO<<endl;
}
    return 0;
}


int arraySum(int a[9])  
{ 
    int initial_sum  = 0; 
	for (int i=0;i<9;i++) 
	{
		initial_sum= initial_sum +a[i];
	}
    return initial_sum; 
} 
  
