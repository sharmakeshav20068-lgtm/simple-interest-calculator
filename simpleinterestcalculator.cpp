#include <iostream>
using namespace std;
/*making simple interest calculator*/
int main(){
    cout<<"welcome to simple interest calculator"<<endl;
    double principal{0};
    cout<<"enter principal amount: ";
    cin>>principal;
    double rate{0};
    cout<<"enter rate amount: ";
    cin>>rate;
    double time{0};
    cout<<"enter time or duration: ";
    cin>>time;
    cout<<"your simple interest value: "<<principal*rate*time/100<<endl;
    return 0;
}

