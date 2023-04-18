#include <iostream>

using namespace std;

int n,acum;

int main(){
    cin>>n;
    acum=1;
    for(int i=1;i<=n;i++){
        acum*=i;
    }
    cout<<acum;
    return 0;
}