#include<iostream>
using namespace std;
int main()
{
	float x, c=0, l=30, ca=0, cr=0;
	do {
	cout<<"ingrese el promedio del estidiante: ";
	cin >>x;
	c=c+1;
	if (x>7) {
		ca=ca+1;
	} else {
		if (x<5) {
			cr=cr+1;
		} else {}
	}
	} while (c<l);
	cout<<"aprueban: " <<ca<<endl;
	cout<<"reprueban: "<<cr<<endl;
	return (0);
}

