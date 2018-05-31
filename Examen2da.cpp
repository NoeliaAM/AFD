#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
int main()
{
	char cadena [100];
	int est;
	char op;
	cout<<"Introduzca una cadena de entrada: ";
	cin.getline(cadena,100,'\n');
	
	int n=0;
	int longitud;
	longitud=strlen(cadena);
	est = 0;
	
	for(n=0;n<=longitud;n++)
	{		
		op=cadena[n];
		
		if (est == 0){
			if (op=='a'){
				est=1;
			}else{
				est=0;
			}
		}
		if (est == 1){
			if (op=='a'){
				est=2;
			}else{
				est=0;
			}
		}
		if (est == 2){
			if (op=='a'){
				est=3;
			}else{
				est=0;
			}
		}
		if (est == 3){
			if (op=='a'){
				est=3;
			}else{
				est=3;
			}											
		}
		
		n=n+1;		
	}
	
	if(est==3){
		cout<<"Cadena aceptada"<<endl;
	}else{
		cout<<"Cadena denegada"<<endl;
	}

	getch();
	return 0;
}
