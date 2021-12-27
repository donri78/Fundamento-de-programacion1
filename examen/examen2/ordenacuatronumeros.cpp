#include <iostream>

using namespace std;
int main()
{
int a,b,c,d,ordenar;

cout<<"ingrese primero numero"<<endl;
cin>>a;
cout<<"ingrese segundo numero:"<<endl;
cin>>b;
cout<<"ingrese tercer numero:"<<endl;
cin>>c;
cout<<"ingrese el cuarto numero:"<<endl;
cin>>d;
if(a>b)
{ordenar=a;
a=b;
b=ordenar;
}
if(a>c)
{ordenar=a;
a=c;
c=ordenar;
}
if(a>d)
{ordenar=a;
a=d;
d=ordenar;
}
if(b>c)
{ordenar=b;
b=c;
c=ordenar;
}
cout<<"los numeros ordenados son:"<<endl;
cout<<"1er: "<<a<<endl;
cout<<"2do: "<<b<<endl;
cout<<"3er: "<<c<<endl;
cout<<"4to: "<<d<<endl;
system("PAUSE");
return EXIT_SUCCESS;
}
