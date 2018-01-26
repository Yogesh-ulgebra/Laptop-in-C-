#include<iostream>
#include<string>
#include<vector>
using namespace std;


vector<string> arr;
int stringLength(string str){
    int i=0;
    while(str[i]!='\0')
        i++;
    return i;
}

bool palindromeString(string str){
    int i;
    int len=stringLength(str);
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1])
            return false;
    }
    return true;
}

string subString(string str,int start,int str_end){
    int i;
    string newStr="";
    for(i=start;i<=str_end;i++){
        newStr+=str[i];
    }
    return newStr;
}

bool insertIfNotInArray(string str){
    int i=0,len=arr.size();
    if(len==0) arr.push_back(str);
    for(i;i<=len;i++){
        if(arr[i]==str){
            return false;
        }
    }
    arr.push_back(str);
    return true;
}

string longarr(vector<string> *arr){
    string str="";
    int max_str=0;
    for(auto i=arr->begin();i!=arr->end();i++){
        if(max_str<stringLength(*i)){
            max_str=stringLength(*i);
            str=*i;
        }
    }
    return str;
}

string minarr(vector<string> *arr){
    string str=arr->at(0);
    int min_str=stringLength(arr->at(0));
    for(auto i=arr->begin()+1;i!=arr->end();i++){
        if(min_str>stringLength(*i)){
            min_str=stringLength(*i);
            str=*i;
        }
    }
    return str;
}

void palinCount(string str){
    int i,j,len=stringLength(str);
    string substringg="";
    for(i=0;i<len;i++){
        insertIfNotInArray(subString(str,i,i));
        for(j=len-1;j>i;j--){
            substringg=subString(str,i,j);
            if(palindromeString(substringg)){
               insertIfNotInArray(substringg);
            }
        }
    }
    cout<<"Available palindromes are : "<<endl;
    for(auto k=arr.begin();k!=arr.end();k++){
        cout<<*k<<endl;
    }
    cout<<"Largest palindrome is "<<longarr(&arr)<<endl;
    cout<<"shortest palindrome is "<<minarr(&arr)<<endl;
}

void getInput(string *var){
    getline(cin,*var);
}

int main(){
    string str;
    getInput(&str);
    palinCount(str);
}
