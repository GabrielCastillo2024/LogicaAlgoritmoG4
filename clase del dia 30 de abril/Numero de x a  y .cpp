#include<iostream>

using namespace std;

void mostrar (int x, int y);

int main()
{
    int x,y;
    cout <<"Digite un #";
    cin>>x;
    cout<<"Digite otro #";
    cin>>y;
    mostrar(x,y);

    return 0;
}



void mostrar(int x, int y ){
    for (int i = x; i<=y; i++){
        if(i % 2 !=0){
            cout<< i << endl;
        }
    }
}

