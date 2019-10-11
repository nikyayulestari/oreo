#include <iostream>

using namespace std;
void rekursi(int x)
{
    int i=1;
    int j=x+2;
    while(i<j){
        cout << x;
        x--;
        i++;
    }
}

int main()
{
    int x;
    cin>> x;
    rekursi(x);
    return 0;
}
