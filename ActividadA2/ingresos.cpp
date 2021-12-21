#include<iostream>
using namespace std;
int main()
{
	float c=0, x, s=0, si=0, l, se=0;
	
	cout<<"cuantos valores desea ingresar: "; 
	cin >>l;
	do{

		cout<<"Ingrese los valores: ";
		cin>>x;
		c=c+1;
		s=s+x;
 if (x>0) {
		si=si+x;
	} else{
		se=se+x;
	} 
	} while (c<l);

		cout<<"el saldo en egreso es: "<<se<<endl;
		cout<<"el saldo en ingreso es: "<<si<<endl;
		cout<<"el saldo total es: "<<s<<endl;
		return (0);
	}


