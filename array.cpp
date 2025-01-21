//ARRAY PROBLEMS

//PROB 1 :DETECTING EVEN/ODD NUMBERS IN AN ARRAY
/*#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;
    int num[n];
    for (int i = 0; i <n; i++)
    {
        cout<<"Enter the value of "<<i+1<<" element of the array:"<<endl;
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" "<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i]%2==0){
            cout<<"Even"<<endl;
        }
        else
        {
            cout<<"Odd"<<endl;
        }  
    }
    return 0; 
}*/


//PROB 2: MIN AND MAX

/*#include <iostream>
#include <climits>
using namespace std;*/

/*int main(){
    int n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;
    int num[n];
    for (int i = 0; i <n; i++)
    {
        cout<<"Enter the value of "<<i+1<<" element of the array:"<<endl;
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" "<<endl;
    }
    int max_no=INT_MIN;
    int min_no=INT_MAX;
    for(int i=0;i<n;i++){
        if (num[i]>max_no){
            max_no=num[i];
        }
        if (num[i]<min_no){
            min_no=num[i];
        }
    }
    cout<<"The maximum no is "<<max_no<<endl;
    cout<<"The minimum no is "<<min_no<<endl;
    return 0;
}*/

//SECOND METHOD
/*#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;
    int num[n];
    for (int i = 0; i <n; i++)
    {
        cout<<"Enter the value of "<<i+1<<" element of the array:"<<endl;
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" "<<endl;
    }
    int max_no=INT_MIN;
    int min_no=INT_MAX;
    for(int i=0;i<n;i++){
        max_no=max(max_no,num[i]);
        min_no=min(min_no,num[i]);
    }
    cout<<"The maximum no is "<<max_no<<endl;
    cout<<"The minimum no is "<<min_no<<endl;
    return 0;

}*/

//LINEAR SEARCH

/*#include <iostream>
using namespace std;

int linearsearch(int num[],int n,int key){
    for(int i=0;i<n;i++){
        if(num[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;
    int num[n];
    for (int i = 0; i <n; i++)
    {
        cout<<"Enter the value of "<<i+1<<" element of the array:"<<endl;
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" "<<endl;
    }
    int key;
    cout<<"Enter the element you want to search: "<<endl;
    cin>>key;
    cout<<linearsearch(num,n,key)<<endl;
    return 0;
}*/


//RETURNING INDEX OF SMALLEST AND LARGEST ARRAY

/*#include <iostream>
#include <climits>
using namespace std;

int main(){
    int num[5]={45,67,87,5,3};
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for (int i=0 ;i<5;i++){
        smallest=min(largest,num[i]);
        largest=max(smallest,num[i]);
    }
    cout<<"The largest number is :"<<smallest<<endl;
    cout<<"The smallest number is :"<<largest<<endl;
}*/


//TWO POINTER LOGIC FOR REVERSING ARRAY

/*#include <iostream>
using namespace std;

void reverseArray(int arr[],int sz){
    int start=0,end=sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int sz=7;
    reverseArray(arr,sz);
    for (int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/

//TWO SUM

/*#include <iostream>
using namespace std;

void sum(int arr[],int sz,int target){
    int plus;
    for (int i=0;i<sz;i++){
        plus=arr[i]+arr[i+1];
            if (plus==target){
            cout<<i<<" "<<(i+1);
        }
            else{
                continue;
        }
        
    }

}

int main(){
    int arr[]={5,7,1,3,9,4};
    sum(arr,5,8);
    return 0;
}*/


//PLUS ONE (to be completed)

/*#include <iostream>
using namespace std;

void PlusOne(int arr[],int end){
    for (int i=0;i<=end;i++){
         cout<<arr[i]<<" ";
         if (arr[i]==arr[end]){
            arr[end]+1;
        }
    }

}

int main(){
    int arr[]={4,3,2,1};
    PlusOne(arr,3);
    return 0;
}*/








