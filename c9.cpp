#include <iostream>
using namespace std;


//FUNCTIONS      (sum ko phele mention karna here in this simple case)

/*int sum(int a,int b){
    int c=a+b;
    return c;
    

}

int main(){
    int num1, num2;
    cout<<"Enter the first number:"<<endl;
    cin>>num1;
    cout<<"Enter the second number:"<<endl;
    cin>>num2;
    cout<<"The sum is: "<<sum(num1,num2)<<endl;
    return 0;
}*/


//FUNCTION PROTOTYPE

//type function-name(arguments)

/*int sum(int a, int b);
void g(void);
//void g() also acceptable
//int sum(int,int) also acceptable

int main(){
    int num1, num2;
    cout<<"Enter the first number:"<<endl;
    cin>>num1;
    cout<<"Enter the second number:"<<endl;
    cin>>num2;
    cout<<"The sum is: "<<sum(num1,num2)<<endl;
    g();
    return 0;
}

int sum(int a,int b){
    int c=a+b;
    return c;
    

}


//If tired of writing cout again and again

void g(){
    cout<<"hELLO!"<<endl; 
}*/


/*int sum(int a,int b){
    int c=a+b;
    return c;
}

void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;

}*/

/*void swappointer(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;

}*/

//Call by reference using c++ reference variables  (second method)

/*void swapreferncevar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

}*/

//This can also happen

int & swapreferncevar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return a;

}


int main(){
    int a=4,b=5;
    //cout<<"The sum of two numbers is "<<sum(2,3);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    //swap(a,b);     ///no effect of swap because the value of a and b is copied to formal parameters
    //swappointer(&a,&b); //call by reference using pointer
    swapreferncevar(a,b)=766;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}










