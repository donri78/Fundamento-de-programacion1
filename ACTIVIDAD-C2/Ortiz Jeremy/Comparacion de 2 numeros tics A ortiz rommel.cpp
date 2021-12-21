#include<iostream>
using namespace std;
int main()
{
	float p1,p2;
	if(p1=p2){
		cout<<"El Valor de p1: "<<p1<<"Es igual a p2: "<<p2<<endl;
	}else{
		if(p1<p2){
			cout<<"El Valor de p1: "<<p1<<"Es menor a p2: "<<p2<<endl;
		}else{
			cout<<"El Valor de p1: "<<p2<<"Es menor a p1: "<<p1<<endl;
		}
	}
	return 0;
}
