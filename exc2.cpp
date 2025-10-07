#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int sayi;
    cout<<"Bir sayi girin:";
    cin>>sayi;
    cout<<endl;

    if (sayi == 2 || sayi == 3) {
        cout << "Asal sayidir" << endl;
    }else if(sayi <= 1){
        cout<<"Asal sayi degildir"<<endl;
    }

    for(int i=2; i<(sayi/2); i++){

        if(sayi % i == 0){
            cout<<"Asal sayi degildir"<<endl;
            break;
        }else{
            cout<<"Asal sayidir"<<endl;
            break;
        }
    }
    return 0;
}