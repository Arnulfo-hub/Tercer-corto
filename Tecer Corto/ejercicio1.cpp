#include "iostream"

using namespace std;

//Función que se utiliza para calcular el salario, horas = las trabajadas, horas_x = las horas extras trabajadas.
//Las variables des_ss, des_afp y des_renta son los descuentos que se le hacen al salario.
float total1(float horas, float horas_x){

float total, a, sal1, sal2, des_ss, des_afp, des_rent, des;

sal1 = horas * 1.75;
sal2 = horas_x * 2.50;
total = sal1 + sal2 * 30;
des_ss = total *4 /100;
des_afp = total * 6.25 / 100;
des_rent = total * 10 / 100;
des = des_ss + des_afp + des_rent;
a = total - des;

    return a;
}

//Funcion main, se le pide al usuario que ingrese las horas trabajadas y las horas extras de cada trabajador.
//Para calcular el salario de cada uno
int main(){

float h, hx, total, salario_real;
int emp1, emp2, emp3, emp4, ex1, ex2, ex3, ex4;

cout <<"CALCULO DE SALARIOS."<<endl<<endl;
cout <<"A continuacion se le pedira las horas trabajadas de 4 empleados"<<endl<<endl;

cout <<"Ingrese las horas trabajadas del primer empleado: "<<endl;
cin >>emp1;

cout <<"Ingrese las horas extras trabajadas del primer empleado: "<<endl;
cin >>ex1;

cout <<"Ingrese las horas trabajadas del segundo empleado: "<<endl;
cin >>emp2;

cout <<"Ingrese las horas extras trabajadas del segundo empleado: "<<endl;
cin >>ex2;

cout <<"Ingrese las horas trabajadas del tercer empleado: "<<endl;
cin >>emp3;

cout <<"Ingrese las horas extras trabajadas del tercer empleado: "<<endl;
cin >>ex3;

cout <<"Ingrese las horas trabajadas del cuarto empleado: "<<endl;
cin >>emp4;

cout <<"Ingrese las horas extras trabajadas del cuarto empleado: "<<endl;
cin >>ex4;

//Se muestra el salario real del trabajador.
cout <<"El total es:"<< total1 (emp1, ex1)<<endl;
cout <<"El total es:"<< total1 (emp2, ex2)<<endl;
cout <<"El total es:"<< total1 (emp3, ex3)<<endl;
cout <<"El total es:"<< total1 (emp4, ex4)<<endl;
    return 0;
}
