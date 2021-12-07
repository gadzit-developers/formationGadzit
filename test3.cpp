// library REALLY IMPORTANT
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //random int in the range [1 to 100]
    srand (time(NULL));
    int random = rand()%100 +1 ;
    bool lost = true;
    int i = 0, tmp;
    for(; i < 10 ;i++){
        cin>>tmp;
        if(tmp == random){
            cout<<"You Won the random number was "<<random<<'\n';
            lost = false;
            break;
        }else if(tmp < random){
            cout<<"the random number is greater than "<<tmp<<endl;
        }else {
            cout<<"the random number is less than "<<tmp<<endl;
        }
    }
    if(lost){
        cout<<"You lost the random number was "<<random<<'\n';
    }

    return 0;
}
