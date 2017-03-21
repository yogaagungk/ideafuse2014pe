#include <iostream>

using namespace std;

int cek(string kata){
    for(int i=0;kata[i];i++){
        string scan;
        int b=i+8;
        for(int j=i;j<b;j++){
            scan=scan+kata[j];
        }
        if(scan=="ideafuse"){
            return i+1;
        }
    }
    return -1;
}

int main()
{
    char kata[100];
    cin.getline(kata,sizeof(kata));
    cout<<cek(kata)<<endl;
}