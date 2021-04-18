#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m, n;
    cout<<"Molq vuvedete stoinost za estestvenoto chislo m"<<endl;
    cin>>m;
    while (m <= 0){
        cout<<"Vuveli ste nepravilno chislo. Molq vuvedete estestveno."<<endl;
        cin>>m;
    }

    cout<<"Molq vuvedete stoinost za estestvenoto chislo n, koqto e po-golqma ot m"<<endl;
    cin>>n;
    while (n < m){
        cout<<"Vuveli ste nepravilno chislo. Molq vuvedete chislo po-golqmo ot m."<<endl;
        cin>>n;
    }
    for (int i = m; i <= n; i++){
        if (i%5==0){
            cout<<i<<" se deli na 5"<<endl;
        }
    }
    return 0;
}
