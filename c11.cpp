#include <iostream>
using namespace std;

//FACTORIAL

/*int fact(int a){
    int facto=1;
    if (a==0 or a==1)
    {
        return 1;
    }
    else
    {
        for(int i = 1; i <(a+1); i++)
        {
            facto=facto*i;
        }
        return facto;
        
    }

}*/

//RECURSIVE FUNCTIONS

/*int fact(int a){
    int facto=1;
    if (a==1 or a==0)
    {
        return 1;
    }
    else
    {
       return a*fact(a-1);
    }
    
}



int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<fact(a)<<endl;
    return 0;


}*/


//SUM OF NUMBERS

/*int sum(int a){
    if (a==0)
    {
        return 0;
    }
    else if (a==1)
    {
        return 1;
    }
    else
    {
        return a+sum(a-1);
    }

}

int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"The fibonacci sum is :"<<sum(a)<<endl;
    return 0;
}*/


//FIBONACCI

/*int fib(int n){
    if(n<2){
        return 1;
}
return fib(n-2)+fib(n-1);*/


//FUNCTION OVERLOADING

/*int add(int a,int b){
    return a+b;
}*/

/*int add(float a,int b){  //This is also acceptable
    return a+b;
}*/

/*int add(int a,int b,int c){
    return a+b+c;
}

int main(){
    cout<<add(2,3)<<endl;
    cout<<add(2,3,1)<<endl;
    return 0;

}*/


//A very good example

float area(float a){
    return (a*a);
}

float area(float a,float b){
    return (a*b);
}

float area(float a,float b,float c){
    return (0.5*a*b);
}

int main(){
    cout<<"The area of square is "<<area(2.5);
    cout<<"The area of rect is "<<area(2.5,3);
    cout<<"The area of triangle is "<<area(2,7.34,0);
    return 0;


}





