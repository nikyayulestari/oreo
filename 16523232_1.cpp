#include <iostream>

using namespace std;
int rekursif(int n){
    int hasil;
    if (n==1||n==2){
        hasil=1;
    }else{
        hasil=n*(rekursif(n-1)+rekursif(n-2));
    }
    return hasil;
}
int main()
{
    int biln, H;
    cout<<"Input n = ";
    cin>>biln;
    cout<<"Hasil = "<<rekursif(biln)<<endl;

    return 0;
}
