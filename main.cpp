#include <iostream>
using namespace std;

int main() {
        int i, n, a=1, b=1, sum=0;
        cout<<"inserisci quante n volte sviluppare la serie di fibonacci."<<endl;
        cin>>n;

        if(!cin or n<2){
            cout<<"errore"<<endl;
            return -1;
        }

        cout<<endl;
        cout<<a<<endl;
        cout<<b<<endl;

        for(i=0; i<n; i++){
            sum=a+b;
            cout<<sum<<endl;
            a=b;
            b=sum;
        }
   return 0;
}
