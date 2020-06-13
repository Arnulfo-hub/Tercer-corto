#include "iostream"
#include "ctime"
#include "cstdlib"

using namespace std;
//Funcion main, sele pide a222l usuario el numero magico.
int main(){
    
int num, numaleatorio, con = 5;
//Funcion que se genera un numero aleatorio que el usuria adivina.
srand(time(NULL));
numaleatorio = 1+rand()%(101-1);
cout <<"NUMERO MAGICO."<<endl<<endl;
cout <<"Adivine el numero aleatorio."<<endl;
cin>>num;
for(con=0;con<=4;con++){
    if(numaleatorio==num){
        cout <<"Perfecto"<<endl;
    }else{
        cout<<"Incorrecto."<<endl;
        if(num>numaleatorio){
            cout<<"El numero es mayor.";
        }else{
            cout<<"el numero es menor";
        }
    con--;
    cout<<"intentos restantes:"<<" "<<con;

    if(con==0){
        cout<<"Ya no tiene mas intentos"; 
    }
    }

}
return 0;
}