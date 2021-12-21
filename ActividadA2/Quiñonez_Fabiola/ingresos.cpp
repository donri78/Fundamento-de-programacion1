#include<iostream>
using namespace std;
int main()
{
	float x, c=0, l, s=0, si=0, se=0;
	cout<<"cuantos valores desea ingresar: ";
	cin>>l;
	do {
		cout<<"ingresar los valores: ";
		cin>>x;
		c=c+1;
		s=s+x;
		if (x>0) {
			si=si+x;
		} else {
			se=se+x;
		}
	} while (c<l);
	cout<<"el saldo en egresos es: " <<se<<endl;
	cout<<"el saldo en ingresos es: " <<si<<endl;
	cout<<"el saldo total es: " <<s<<endl;
	return (0);
}
