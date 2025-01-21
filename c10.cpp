#include <iostream>
using namespace std;

/*int pro(int a,int b){
    return a*b;

}*/

//IN-LINE FUNCTION (saves time/fast)

/*inline int pro(int a,int b){
    return a*b;
}*/

//STATIC VARIABLE

/*int pro(int a,int b){
    static int c=0;  //Will execute once
    c=c+1;
    return a*b+c;

}*/

//DEFUALT ARGUMENT

/*float moneyRecieved(float currentMoney,float factor=1.04){
    return currentMoney*factor;


}*/

/*int main(){
    float money;
    cin>>money;
    cout<<"If you have "<<money<<"then you will recieve "<<moneyRecieved(money);
    cout<<"If you are VIP "<<money<<"then you will recieve "<<moneyRecieved(money,1.1);
    return 0;
}*/

//CONSTANT ARGUMENTS


int strlen(const char *p){

}




/*int main(){
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    cout<<"The product of a and b is "<<pro(a,b); //3 wen a=1 and b=2
    cout<<"The product of a and b is "<<pro(a,b); //4 wen a=1 and b=2
    return 0;
}*/

