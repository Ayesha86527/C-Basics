#include <iostream>
#include <vector>
using namespace std;

/*int main(){
    //int arr[]={1,2,3,4,5};
    //cout<<*arr<<endl;  //returns 1

    int a=15,b=10;  //but we cannot do this in case array
    int* ptr=&a;
    cout<<*ptr<<endl;
    ptr=&b;
    cout<<*ptr<<endl;
    return 0;
}*/

//POINTER OPERATIONS

//Increment / decrement

/*int main(){
    int arr[]={1,2,3,4};
    int a=10;
    int* ptr=&a;
    cout<<ptr<<endl;
    ptr++; //or p--
    cout<<ptr<<endl;
    return 0;
}*/

//Addition / subtraction

/*int main(){
    int arr[]={1,2,3,4};
    int a=10;
    int* ptr=&a;
    cout<<ptr<<endl;
    ptr+=2; //or p--
    cout<<ptr<<endl;
    return 0;
}*/

//We can use this with arrays

/*int main(){
    int arr[]={1,2,3,4};
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    return 0;

}*/

//We can subtract pointer of same type but cannot add

int main(){
    int* ptr2;
    int* ptr1=ptr2+2;
    cout<<ptr1-ptr2<<endl;  //2 integer space available
    return 0;

}

//We can also compare pointers

//using relational operators








