#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter number:";
    cin>>num;

    if(num>0){
            if(num%2==0)
        cout<<num<<" num is positive and even";
        else
            cout<<num<<"num is positive and odd";
    }
    else if(num<0){
        if(num%2==0)
        cout<<num<<" num is negative and even";
        else
            cout<<num<<"num is negative and odd";
    }
    else {
        cout<<" num is  zero";
    }
    return 0;
}
