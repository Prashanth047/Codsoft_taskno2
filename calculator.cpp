#include<iostream>
using namespace std;
int main(){
cout<<"Simple Calculator\n";
int n,x,y,z;
while(1){
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter your choice:";
    cin>>n;
    cout<<endl;
    switch(n)
    {
        case 1:cout<<"enter num1:";
                cin>>x;
                cout<<"enter num2:";
                cin>>y;
                cout<<x<<"+"<<y<<"="<<x+y<<endl;
                cout<<endl;
                break;
        case 2:cout<<"enter num1:";
                cin>>x;
                cout<<"enter num2:";
                cin>>y;
                cout<<x<<"-"<<y<<"="<<x-y<<endl;
                cout<<endl;
                break;
        case 3:cout<<"enter num1:";
                cin>>x;
                cout<<"enter num2:";
                cin>>y;
                cout<<x<<"*"<<y<<"="<<x*y<<endl;
                cout<<endl;
                break;
        case 4:cout<<"enter num1:";
                cin>>x;
                cout<<"enter num2:";
                cin>>y;
                cout<<x<<"/"<<y<<"="<<x/y<<endl;
                cout<<endl;
                break;
        default:cout<<"enter correct choice:"<<endl<<endl;
                break;
    }
}

}
