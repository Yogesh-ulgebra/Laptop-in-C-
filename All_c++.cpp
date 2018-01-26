#include<iostream>
#include<string>
#include<list>
#include<stack>
#include<vector>

using namespace std;

void c(string s){
    cout<<s;
}

void print_repeat(int count,string c){
    for(int j=0;j<count;j++)
        cout<<c;
}

bool checkNumeric(char c){
    return (c>='0' && c<='9');
}

void getInput(string message,string * var){
    c(message);
    getline(cin,*var);
}

void getInput(string message,int * var){
    c(message);
    cin>>*var;
}

void getInput(string * var){
    getInput("Enter a string : ",var);
}

void getInput(int * var){
    getInput("Enter a number : ",var);
}

void parseArray(string str,list<int> *v){
    int i,k=0;
    for(i=0;i<str.length();i++){
        if(checkNumeric(str[i])){
            k=(k*10)+(str[i]-'0');
        }
        else{
            if(k==0){
                continue;
            }
            v->push_back(k);
            k=0;
        }
        if(i==str.length()-1){
            v->push_back(k);
        }
    }
}

int str_len(string s){
    int i=0;
    while(s[i]!='\0')
        i++;
    return i;
}

int string_size(){

    string str;
    getInput(&str);
    cout<<str_len(str);

    return 0;
}

int parseInt(char c){
    return ((checkNumeric(c))?(c-'0'):0);
}

int parseInt(string str){
    int i,str_value=0;
    for(i=0;i<str_len(str);i++){
        if(checkNumeric(str[i])){
            str_value=(str_value*10)+parseInt(str[i]);
        }
    }
    return str_value;
}


void sortIint(int *arr,int length,bool ascend){
    int i,j,temp;
    for(i=0;i<length;i++){
        for(j=0;j<length;j++){
            if((ascend)?(arr[i]>arr[j]):(arr[i]<arr[j])){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void printArray(int *arr,int length){
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
}

string lettersOnly(string str){
    int i,length=str_len(str);
    string newString="";
    for(i=0;i<length;i++){
        if(str[i]>='A' && str[i]<='z'){
            newString+=str[i];
        }
    }
    return newString;
}

string sortString(string str,bool ascend){
    str=lettersOnly(str);
    int i,j,length=str_len(str);
    char temp;
    for(i=0;i<length;i++){
        for(j=0;j<length;j++){
            if((ascend)?(str[i]>str[j]):(str[i]<str[j])){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    return str;
}

int main___(){
    string str;
    getInput(&str);
    bool ascending=0;
    cout<<sortString(str,ascending);
}

int main_int(){
    int arr[]={4,56,2,1};
    int arr_length=sizeof(arr)/sizeof(int);
    bool ascending=1;
    sortIint(arr,arr_length,ascending);
    printArray(arr,arr_length);
}

int main_i(){
    string str;
    getInput(&str);
    cout<<str<<"-1 value is "<<(parseInt(str)-1);
    return 0;
}

bool palindrome(int orig){
    int rev_num=0;
    int temp_num=orig;
    while(temp_num>0){
        rev_num=(rev_num*10)+(temp_num%10);
        temp_num/=10;
    }
    return (orig==rev_num);
}

bool palindrome(string str){
    int i,strlen=str_len(str);
    for(i=0;i<strlen/2;i++){
        if(str[i]!=str[strlen-1-i]){
            return false;
        }
    }
    return true;
}

void printResult(string str,bool success,string question){
    cout<<str<<" is "<<((success)?"":"not ")<<question;
}

void printResult(int num,bool success,string question){
    cout<<num<<" is "<<((success)?"":"not ")<<question;
}

bool ope_Close(string str){
    int i,length=str_len(str),cou_nt=0,f=0;
    int open=0,close=0,err=0;
    vector<int>start;
    vector<int>closed;
    vector<int>diff;
    for(i=0;i<length;i++){
        if(str[i]=='('){
            open++;
            f++;
            start.push_back(i);
        }
        if(str[i]==')'){
            close++;
            if(f==0){
                err=1;
                continue;
            }
            f--;
            cou_nt++;
            closed.push_back(i);
        }
    }
    for(auto j=0;j<start.size();j++){
        auto num=closed[j]-start[j];
        diff.push_back(num);
        cout<<start[j]<<" ";
        cout<<closed[j]<<endl;
    }
    for(auto k=0;k<diff.size();k++){
        cout<<diff[k];
    }
   // cout<<"( - "<<open<<endl<<") - "<<close<<endl<<"closed count - "<<cou_nt<<endl;
    return (f==0 && err==0);
}

bool openClose(string str){
    int i,length=str_len(str);
    stack<char> squre;
    stack<char> circle;
    stack<char> curly;
    for(i=0;i<length;i++){
        switch (str[i]){
            case '[':
                squre.push('[');
                break;
            case '(':
                circle.push('(');
                break;
            case '{':
                curly.push('{');
                break;
            case ']':
                if(squre.empty()){
                   return false;
                }
                else
                    squre.pop();
                break;
            case ')':
                if(circle.empty()){
                   return false;
                }
                else
                    circle.pop();
                break;
            case '}':
                if(curly.empty()){
                   return false;
                }
                else
                    curly.pop();
                break;
        }
    }
    if(!squre.empty() || !circle.empty() || !curly.empty())
        return false;
    return true;
}


string sub_str(string str,int start,int closed){
    string sub_string="";
    for(int i=start;i<=closed;i++){
        sub_string+=str[i];
    }
    return sub_string;
}


bool checkIfStrExist(string *str,int len,string str_val){
    for(int i=0;i<len;i++){
        if(str[i]==str_val){
            return true;
        }
    }
    return false;
}

bool allClosesOpen(string str){
    int i,length=str_len(str),open_count=0;
    list<char>circle;
    int fail=0,diff=0,max_position=0,min_position=0,max_diff=0,min_diff=1;
    vector<int>start;
    vector<int>closed(str.length(),-1);
    vector<int>open;
    bool initialized=false;
    for(i=0;i<length;i++){
        switch (str[i]){
                case '(':
                    start.push_back(i);
                    circle.push_back('(');
                    open.push_back(open_count++);
                    break;
                case ')':
                    if(circle.empty()){
                        fail++;
                    }
                    else{
                        circle.pop_back();
                        closed[open.back()]=i;
                        open.pop_back();
                    }
                        break;
        }
    }
    for(auto j=0;j<start.size();j++){
        if(closed[j]<0){
            continue;
        }

        diff=closed[j]-start[j];

        if(!initialized){
            min_diff=diff;
            max_diff=diff;
            initialized=true;
        }

        if(max_diff<diff){
            max_diff=diff;
            max_position=j;
        }
        if(min_diff>diff){
            min_diff=diff;
            min_position=j;
        }

    }

    string printed[start.size()];
    string printNow;
    int k=0;
    for(int l=0;l<start.size();l++){
        printNow=sub_str(str,start[l],closed[l]);
        if(!checkIfStrExist(printed,k,printNow)){
            printed[k++]=printNow;
            cout<<k<<" matched "<<printed[k-1]<<"\n\n"<<endl;
        }
    }

    cout<<"Min matched "<<sub_str(str,start[min_position],closed[min_position])<<endl;
    cout<<"Max matched "<<sub_str(str,start[max_position],closed[max_position])<<endl;
    if(!circle.empty() || fail!=0)
        return false;
    return true;
}

int main_parnthise(){
    string str;
    getInput("Enter code : ",&str);
    printResult(str,allClosesOpen(str),"closed");
}

string multiChar(char c,int len){
    string str="";
    for(int i=0;i<len;i++)
        str+=c;
    return str;
}

void crossString(string str){
    char c=' ';
    int i,length=str_len(str),end_len,front_len,middle_len,k;
    k=length/2;
    middle_len=end_len=length;
    front_len=k-1;
    for(int i=0;i<length;i++){
        if(i==k){
            if(length%2==0)
                continue;
            else
                front_len++;
        }
        if(i<=k){
            end_len--;
            middle_len-=2;
            cout<<multiChar(c,i)<<((k==i)?'\0':str[i])<<multiChar(c,middle_len)<<str[end_len]<<multiChar(c,i)<<endl;
        }
        if(i>k){
            front_len--;
            middle_len+=2;
            cout<<multiChar(c,front_len)<<str[front_len]<<multiChar(c,middle_len)<<str[i]<<multiChar(c,front_len)<<endl;
        }
    }
}

int main(){
    string str;
    getInput(&str);
    crossString(str);
    return 0;
}

int pow(int num,int x){
    int result=1;
    for(int i=1;i<=x;i++){
        result*=num;
    }
    return result;
}

string intToString(int num,int length){
    char c;
    string str="";
    while(length>0){
        length-=1;
        c=num/pow(10,length);
        num-=(c*pow(10,length));
        c+='0';
        str+=c;
    }
    return str;
}

int intLength(int num){
    int i=0;
    while(num>0){
        num/=10;
        i++;
    }
    return i;
}

int main_inttostr(){
    int num,length;
    getInput(&num);
    length=intLength(num);
    cout<<intToString(num,length);
    return 0;
}

int main_p(){
    string str;
    getInput(&str);
    printResult(str,palindrome(str),"palindrome");
    return 0;
}

int main__(){
    int num;
    getInput(&num);
    printResult(num,palindrome(num),"palindrome");
    return 0;
}

int main_o()
{
    int k=0,i;
    string str,next_print;
    list <int> arr;
    list <int> odd;
    list <int> eve;
    getInput(&str);

    parseArray(str,&arr);

    int final_size=arr.size();

    auto arr_list_pointer=arr.begin();

    for(int a=0;a<final_size;a++){
        if(a%2==0){
            odd.push_back(*arr_list_pointer++);
        }else{
            eve.push_back(*arr_list_pointer++);
        }
    }

    odd.sort();
    eve.sort();
    odd.reverse();

    auto odd_list_pointer=odd.begin();
    auto even_list_pointer=eve.begin();


    for(int a=0;a<final_size;a++){
        if(a%2==0){
            cout<<*odd_list_pointer++;
        }else{
            cout<<*even_list_pointer++;
        }
        cout<<((a<final_size-1)?",":"");
    }

    return 0;
}
