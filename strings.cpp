#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//Palindrome

/*int main(){
    string s;
    getline(cin,s);
    string rs="";
    for (int i=s.length()-1;i>=0;i--){
        rs+=s[i];
    }
    if (rs==s){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;

}*/


//A way to declare strings

/*int main(){
    string str(5,'n');
    cout<<str<<endl;   //nnnnn
    return 0;
}*/


//APPEND AND CONCATENATE

/*int main(){
    string str1="fam";
    string str2="ily";
    str1.append(str2);
    cout<<str1<<endl;
    cout<<str1+str2<<endl;
    return 0;

}*/

//ACCESSING PARTICULAR CHAR OF STRING

/*int main(){
    string str="family";
    cout<<str[1];
    return 0;
}*/

//CLEAR

/*int main(){
    string s="pizza";
    //s.clear();
    //cout<<s[4].clear()<<endl;  not possible
    cout<<s<<endl;
    return 0;

}*/

//COMPARE

/*int main(){
    string str1="abc";
    string str2="xyz";
    cout<<str1.compare(str2);
    return 0;
}*/

//EMPTY

/*int main(){
    string s="abd";
    s.clear();
    if(s.empty()){
        cout<<"Yes"<<endl;
    }
    return 0;

}*/

//ERASE 

/*int main(){
    string s="nimcompoop";
    s.erase(3,2); //start char,from start char how many char
    cout<<s;
}*/

/*int main(){
    string s1="anagram";
    cout<<s1.find("gram")<<endl;  //return 3
    return 0;
}*/

//INSERT

/*int main(){
    string s="abe";
    s.insert(2,"cd");
    cout<<s;
    return 0;
}*/

//SUBSTRING

/*int main(){
    string s1="abcdefgh";
    string s2=s1.substr(2,5); //works like slicing
    cout<<s2;
    return 0;
}*/

//String to int

/*int main(){
    string s="456";
    int x=stoi(s);
    cout<<x;
    return 0;
}*/

//Viceversa

/*int main(){
    int x=345;
    cout<<to_string(x)+"2"<<endl;
    return 0;
}*/

//SORTING STRING

/*int main(){
    string s="gdcdhjjsash";
    sort(s.begin(),s.end());
    cout<<s;
    return 0;

}*/

//Valid anagram

/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if (s1==s2){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}*/

//upper to lower

/*int main(){
    string str="anmsjbhjchsa";
    for (int i=0;i<str.size();i++){
        if (str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    cout<<str;
    return 0;
}*/

//UPPER TO LOWER

/*int main(){
    string str="HHSHBSBSBSBSKKK";
    for (int i=0;i<str.size();i++){
        if (str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout<<str;
    return 0;
}*/

//Inbuilt function for upper/lower

/*int main(){
    string s="gjdsghgh";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
}*/

/*int main(){
    string s="ABBSB";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
}*/

//Greatest int

/*int main(){
    string num="84736439";
    sort(num.begin(),num.end(),greater<int>()); //greater int for descending order
    cout<<num;
    return 0;
}*/

//Counting maximum occurences of a char

/*int main(){
    string s="adghaaudb";
    int freq[26];
    for (int i=0;i<26;i++){
        freq[i]=0;
    }
    for (int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    char ans='a';
    int maxF=0;
    for (int i=0;i<26;i++){
        if (freq[i]>maxF){
            maxF=freq[i];
            ans=i+'a';
        }
    }
    cout<<maxF<<" "<<ans;
    return 0;
}*/




