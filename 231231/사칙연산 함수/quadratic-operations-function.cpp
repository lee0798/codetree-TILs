#include <iostream>
using namespace std;
int a1(int a, int b){
    return a+b;
}
int a2(int a, int b){
    return a-b;
}
int a3(int a, int b){
    return a/b;
}
int a4(int a, int b){
    return a*b;
}
int main() {
    int a, c;
    char o;
    cin>>a>>o>>c;
    if(o=='+'){
        cout<<a<<" + "<<c<<" = "<<a1(a, c);
    }
    else if(o=='-'){
        cout<<a<<" - "<<c<<" = "<<a2(a, c);
    }
    else if(o=='/'){
        cout<<a<<" / "<<c<<" = "<<a3(a, c);
    }
    else if(o=='*'){
        cout<<a<<" * "<<c<<" = "<<a4(a, c);
    }
    else{
        cout<<"False";
    }
    return 0;
}