#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <numeric>
//#include <cstdio>

using namespace std;
int arraySum(int a[9]);


int main() 
{ 
    const char* lista2[6]={"BCG","CGB","GBC","CBG","BGC","GCB"};  
int minimos[6]={0,0,0,0,0,0};
int lista[9];
    
    while (scanf("%d", &lista[0])!=EOF)
    {
    for (int i = 1; i < 9; ++i) 
    {
        scanf("%d",&lista[i]);
    }
    
    
    int suma = (arraySum(lista));
	
	//cout<<suma<<endl;

    		minimos[0]=suma-lista[0]-lista[5]-lista[7];
    		minimos[1]=suma-lista[2]-lista[4]-lista[6];
    		minimos[2]=suma-lista[1]-lista[3]-lista[8];
			minimos[3]=suma-lista[2]-lista[3]-lista[7];
			minimos[4]=suma-lista[0]-lista[4]-lista[8];
			minimos[5]=suma-lista[1]-lista[5]-lista[6];

	/*for (int z=0;z<9;z++)
	{
		cout<<lista[z]<<" ";
	}
	cout<<endl;*/
	for (int z=0;z<6;z++)
	{
		cout<<minimos[z]<<" ";
	}
	cout<<endl;
    
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
  
/*void ingreso(int V[9]) 
{
	for (int i=0;i<10;i++)
	{
		int V[9] = {0,0,0,0,0,0,0,0,0};
		cin>>V[i];
	//int a,b,c,d,e,f,g,h,i;
		//while((scanf("%d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i))==9)
		//int lista[]={a,b,c,d,e,f,g,h,i};
		//a=lista[1]
		//cout<<a;
	}
}
int main()
{
	cout<<"Hola";
    return 0;
}*/
