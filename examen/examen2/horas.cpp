#include <iostream>
using namespace std;
int main()
{
    int hi,mi,si,hf,mf,sf,ht,mt,st,miseg,horseg;
    cout<<"ingrese la hora inicial"<<endl;
    cin>>hi;

    cout<<"ingrese los minutos incial"<<endl;
    cin>>mi;

    cout<<"ingrese los segundos inicial"<<endl;
    cin>>si;

    cout<<"ingrese la hora final"<<endl;
    cin>>hf;

    cout<<"ingrese los minutos finales"<<endl;
    cin>>mf;

    cout<<"ingrese los segundos finales"<<endl;
    cin>>sf;

    ht=(int)(hf-hi);
    mt=(int)(mf-mi);
    st=(int)(sf-si);
    horseg=(ht*3600);
    miseg=(mt*60);
    ht=(horseg);
    mt=(miseg);

    cout<<ht<<"h "<<mt<<"m "<<st<<"s";
return 0;
}
