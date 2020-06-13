#include "iostream"

using namespace std;
//Función para calcular si el año es bisiesto o no.

int bisiesto(int a){

int anio;

     if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){
         cout<<"El anio  si es bisiesto ";
     }else{
         cout<<"El anio no es bisiesto ";
     }
    return anio;
}

//Función main donde se le pide a la persona que ingrese el año.
int main(){

int a;
cout <<"Anio bisiesto"<<endl<<endl;

cout<<"Ingrese un anio para verificar si es bisiesto:"<<endl;
cin>>a;
//Aqui es donde si invoca la función
bisiesto(a);

    return 0;
}