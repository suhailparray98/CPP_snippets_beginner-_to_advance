// c++ program to ask user to input numeric and display it in characters
#include <cstdio>
#include<iostream>
using namespace std;

int main() {
    const int ONE = 1;
    const int TWO = 2;
    const int THREE = 3;
    const int FOUR = 4;

    int x;
    cout<<"enter the number in numeric format: "<<endl;
    cin>>x;

    switch(x) {
        case ONE:
            puts("one");
            break;
        case TWO:
            puts("two");
            break;
        case THREE:
            puts("three");
            break;
        case FOUR:
            puts("four");
            break;
        default:
            puts("default");
            break;
    }
    return 0;
}
//code contibuted by suhail ahmad parray
