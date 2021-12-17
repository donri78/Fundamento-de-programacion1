# include <iostream>
using namespace std;
int main()

{
        int f1,f2,f3,n=30,c=0;
        f1=0;
        c=c+1;
        cout<<f1<<endl;

        f2=1;
        c=c+2;
        cout<<f2<<endl;

        do{
           f3=f1+f2;
           cout<<f3<<endl;
           c=c+1;
           f1=f2;
           f2=f3;
        }while(c<n);
        cout<<n<<"numeros generados"<<endl;
        return 0;

}
