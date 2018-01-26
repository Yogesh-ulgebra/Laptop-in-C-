#include<iostream>
using namespace std;

class Line {

    public:
        int current;
        int speed;

    Line(int num1,int num2){
        current=num1;
        speed=num2;
    }

    void run(){
        current*=speed;
    }

};

class jhon {
    public:
        int power;

    jhon(int num){
        power=num;
    }

    void attack(int num){
        if(num==-1)
            power-=4;
        if(num==1)
            power+=3;
    }
};

int main(){
    Line a(3,4);
    Line b(4,3);
    int i=0;
    while(a.current!=b.current){
        a.run();
        b.run();
        i++;
        if(i==1000)
            break;
    }
    if(i!=1000)
        cout<<i<<" : steps backs matched position : "<<a.current;
    else
        cout<<"Line not matched";
}

int main_jhon(){
    jhon yoga(3);
    int aruls[]={1,1,1,-1,1,-1,1,1,-1,-1,1},i=0;
    int len=sizeof(aruls)/sizeof(int);
    while(yoga.power>0 && len--){
        yoga.attack(aruls[i++]);
    }
    if(yoga.power<0)
        cout<<"jhon died";
    else
        cout<<"jhon saved a brother.";
    return 0;
}
