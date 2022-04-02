#include <iostream>
using namespace std;

int main() {
    int i, n, a=0, b=1, sum=0;
    cout<<"inserisci quante n volte sviluppare la serie di fibonacci."<<endl;
    cin>>n;

    if(n>=2){
        for(i=0; i<n; i++){
            sum=a+b;
            cout<<sum<<endl;
            a=b;
            b=sum;
        }
        }else{
            cout<< "errore"<<endl;
            }
            return 0;
        }
