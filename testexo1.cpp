#include <iostream>

using namespace std;

int main()
{
    int n, ans=1 ;
    cin>>n;
    if(n == 1){
        cout<<1<<endl;
    }else {
        while(n !=1){
            n = (n%2 ==0) ? (n/2) : 3 * n +1;
            cout<<n<<endl;
            ans++;
        }
    }
    cout<<"le nombre de termes = "<<ans<<endl;

    return 0;
}
