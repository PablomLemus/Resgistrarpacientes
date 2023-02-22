#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<conio.h>
#include<string.h>

//Pablo Murillo Lemus, Luis Adrian Caicedo, Yeison Stiven Lozano
using namespace std;

struct nodo
{	
	char name[10];
	int code, doc;
	nodo *sig;
};

nodo *cab;
nodo *aux;
nodo *aux2;

int registro(){
	if(cab==NULL){
	cab = (struct nodo *) malloc (sizeof(struct nodo));
	cout<<"digite un Codigo: ";
	cin>>cab->code;
	cout<<"digite Nombre: ";
	cin>>cab->name;	
	cout<<"digite Documento: ";
	cin>>cab->doc;	
	cab->sig = NULL;
	system("cls");		
	}else{

	aux = (struct nodo *) malloc (sizeof(struct nodo));
	cout<<"digite Codigo: ";
	cin>>aux->code;
	cout<<"digite Nombre: ";
	cin>>aux->name;
	cout<<"digite Documento: ";
	cin>>cab->doc;	
	aux->sig = NULL;
	aux2=cab; 
	system("cls");
	
	while (aux2->sig!=NULL)
	 aux2=aux2->sig;
	aux2->sig = aux;
	aux2 = aux = NULL;
	free(aux);
	free(aux2);
	}	
	return 0;
}
int mostrar(){
	for(aux=cab; aux!=NULL; aux=aux->sig){
			cout<<"Codigo: "<<aux->code<<endl;
		
			cout<<"Nombre: "<<aux->name<<endl;

			cout<<"Documento: "<<aux->doc<<endl;
		
	
	}


	
	return 0;
}

int menu(){

	int opc;
	do
	{
		
		cout<<"******Hospitalito.******\n ";
		cout<<"*Registro de pasientes*\n";
		cout<<"1. Registro  \n";
		cout<<"2. Mostrar \n";
		cout<<"3. Salir \n";
		cout<<"Que accion desea realizar?:";
		cin>>opc;
		switch(opc)
		{
			case 1: registro();
					break;
			case 2: mostrar();
			
			
					break;
				case 3:;
					break;

		
		}
		

	}while(opc!=3);
	return 0;
}

int main(){
	
   menu();	
	

}

