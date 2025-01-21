#include <iostream>
using namespace std;

//typedef struct employee    typedef wen using shorform like ep
//{
    /* data */
/*   int id;
    char favchar;
    float salary;
}ep;*/

//int main(){
    //struct employee Ayesha;
    //OR
    //ep Ayesha;
    /*struct employee Harry;
    Harry.id=2;
    Harry.favchar='C';
    Harry.salary=120000000;
    Ayesha.id=001;
    Ayesha.favchar='A';
    Ayesha.salary=120000000;
    cout<<Ayesha.id<<endl;
    cout<<Ayesha.favchar<<endl;
    cout<<Ayesha.salary<<endl;
    return 0;*/
//}


//UNION


/*union money    
{
    Can only use one from these
    int rice;
    char car;
    float pounds;
};

int main(){
    union money m1;
    m1.rice=34;     now it will give garbage value
    m1.car='c';
    cout<<m1.car<<endl;
    cout<<m1.rice<<endl;
    return 0;
}*/



//ENUM

int main(){
    enum Meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;  //0
    cout<<lunch<<endl;      //1
    cout<<dinner<<endl;     //2
    Meal m1=breakfast;
    cout<<m1<<endl;     //0
    return 0;

}





