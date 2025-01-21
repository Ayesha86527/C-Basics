//IF-ELSE 

//SELECTION STRUCTURE

#include <iostream>
using namespace std;

/*int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if (age<18){
        cout<<"You cannot drive!";
    }
    else if(age==18){
        cout<<"You need a license!";

    }
    else if(age<0){
        cout<<"You are not born yet!";
    }
    else{
        cout<<"You can drive!";
    }
    return 0;
}*/



//SWITCH CASE

int main(){
    int age;
    cin>>age;
    switch(age)
    {
    case 18:
        cout<<"You are 18!"<<endl;
        break;
    case 22:
        cout<<"You are 22!"<<endl;
        break;
    default:
        cout<<"Non speacial cases!"<<endl;
        break;
    }
    cout<<"Done!"<<endl;
    return 0;
}

