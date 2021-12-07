#include <iostream>

using namespace std;

int main()
{
    int N, res;
    cin>>N;
    if( N >= 10 && N <= 99){
        while(N!=9){
            res = (N%10)*10 + N/10;
            N = abs(res - N);
            if(N ==0){
                cout<<"inifinte loop\n";
                break;
            }
            cout<<N<<endl;
        }
    }else {
        cout<<"Wrong input\n";
    }


    return 0;
}
