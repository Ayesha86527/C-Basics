#include <iostream>
using namespace std;

//POINTERS

/*int main(){
    int a=3;
    int* b=&a;
    cout<<b<<endl;     //b and &a are same
    cout<<&a<<endl;
    cout<<*b<<endl;   //3
    
//Pointer to pointer
    int**c=&b;      //storing the address of a pointer 
    cout<<c<<endl;
    return 0;
}*/


//ARRAYS

/*int main(){
    //Two ways of making arrays

    int marks[4]={98,70,65,87};
    int size[2];
    size[0]=6;
    size[1]=4;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //We can change the value of array

    marks[3]=80;
    cout<<marks[3]<<endl;


    for (int i=0;i<4;i++)
    {
        cout<<"The value of marks: "<<marks[i]<<endl;   //Quick quiz do the same with while and do while
    }


    return 0;
}*/


//POINTER ARTHEMATIC

//New address(p+i)=current address(p)+i*size of datatype

int main(){
    int marks[4]={98,70,65,87};
    int* p=marks;
    cout<<*(p++);
    cout<<*p;
    cout<<*(++p);
    /*cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;*/
    return 0;
    
}
























