# include <iostream>

using namespace std;
int main()
{
float a,b,c;
cout<<"ingrese el valor de a: ";  cin>>a;
cout<<"ingrese el valor de b: "; cin>>b;
cout<<"ingrese el valor de c: "; cin>>c;

if(a>b)
{
    if(a>c)
    { 
              cout<<"    a   es mas alta"<<endl; 
    }
    else
   {
              cout<<"     c      es mas alta"<<endl; 
    }
    
}else{
 
   if (b>c){
           
                   cout<<"  b es mas alta"<<endl;
      }else{
                  cout<<"   c es mas alta"<<endl;
      }


}
return  0;

}
