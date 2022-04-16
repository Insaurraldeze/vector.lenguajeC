/*generar la lectura por teclado de un vector de 200 elementos,luego mediante una busqueda identifique el valor mayor
y su posicion mostrandolo en pantalla*/
#include<stdio.h>
int main()
{
	const int n=5;
	int i;
	int v[n];
	int mayor;
	int pos;
	for(i=0;i<n;i++)
	{
		printf("INGRESE EL VALOR DE LA POSICION %d: ",i+1);
		scanf("%d",&v[i]);
		fflush(stdin);
	}
	for(i=0;i<n;i++)
	{
		if (mayor=v[0])
		{
		mayor=v[0];
		pos=0+1;
		}
		else(v[i]>mayor);
		{
		
		mayor=v[i];
		pos=i+1;
		}
	}
	printf("EL NUMERO MAYOR ES %d Y SU POSICION ES %d",mayor,pos);
	
}
