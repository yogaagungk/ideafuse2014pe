#include <iostream>

using namespace std;

string cek(int x){
    if(x%2==0){
        return "Tidak";
    }else{
        return "Perlu";
    }
}

int main()
{
    int g;
    cin>>g;
    cout<<cek(g)<<endl;
}