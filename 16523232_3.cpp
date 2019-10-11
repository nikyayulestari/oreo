#include <iostream>

using namespace std;

int main()
{
    int A [4][4],i,j,k;
    int B [4][4];
    i = 0;
    while (i<2){
        j = 0;
        while (j<4){
            A[i][j] = (i-(2*j)+2);
            j++;
        }
    i++;
    }

    i = 2;
    while (i<4){
        j = 0;
        while (j<4){
            k = i-2;
            A[i][j] = A[k][j]+(i-k)*2;
            j++;
        }
    i++;
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            B[i][j]=A[i][j]*3;
            cout << B[i][j]<<" ";
        }
        cout<< endl;
    }
}
