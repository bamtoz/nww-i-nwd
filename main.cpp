#include <iostream>

using namespace std;


int nwd(int a, int b){

    int ilosc=0;
    int dzielnik;


    if(a>b){ilosc = b;}
    else{ilosc=a;}

    for(int i=1;i<=ilosc;i++){
        int reszta1=a%i;
        int reszta2=b%i;

        if(reszta1==0 && reszta2==0){
            dzielnik=i;
        }
    }
    return dzielnik;
}

int nww(int a, int b){

    int wielokrotnosc;

    for(int i=1;i<=(a*b);i++){

        int wielokrotnosc_a=a*i;

        for(int j=1;j<(a*b);j++){

            int wielokrotnosc_b=b*j;

            if(wielokrotnosc_a==wielokrotnosc_b){
                wielokrotnosc=wielokrotnosc_a;
                return wielokrotnosc;
            }
        }
    }
}

int main(){

    int a;
    int b;

    cout << "Podaj liczbe a: ";    cin >> a;
    cout << "Podaj liczbe b: ";    cin >> b;

    cout << "NWD(" << a << "," << b << ") = " << nwd(a,b) << endl;
    cout << "NWW(" << a << "," << b << ") = " << nww(a,b) << endl;

    return 0;
}
