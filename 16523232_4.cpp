#include <iostream>

using namespace std;
int A[2][2];
int AT[2][2];
int B[2][2];
int C[2][2];

void tranpose()
{
   for(int i=0; i<2; i++){
       for(int j=0; j<2; j++){
       AT[j][i] = A[i][j];
       }
   }
}

void total()
{
   for(int i=0; i<2; i++){
       for(int j=0; j<2; j++){
       C[i][j] = (A[i][j]+AT[i][j]+B[i][j])*3;
       }
   }
}

int main()
{
    cout << "Input Matriks A :"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
        cin >> A[i][j];
        }
    }

    tranpose();

    cout <<endl<< "Input Matriks B : "<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
        cin >> B[i][j];
        }
    }

    total();

    cout<<endl<<"Matriks C :"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
        cout << C[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
