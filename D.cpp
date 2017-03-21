#include <iostream>

using namespace std;

int main()
{
    int a, b, max, ax, bx;
    cin>>a>>b;
    if(a>b){
        max = a;
    }else{
        max = b;
    }
    for(int i=1;i<=max;i++){
        if(a%i==0 && b%i==0){
            ax=a/i;
            bx=b/i;
        }
    }
    if(ax==a && bx==b){
        cout<<"Tidak"<<endl;
    }else{
        cout<<ax<<" "<<bx<<endl;
    }
}