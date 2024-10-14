#include<iostream>
#include<stack>
using namespace std;
int postfixeval(string exp){
    stack<int> stack;
    for(int i=0;i<exp.length();i++){
        if(exp[i]>='0'&& exp[i]<='9'){

        
        stack.push(exp[i]-'0');
    }
    else {
        int x= stack.top();
        stack.pop();
        int y=stack.top();
        stack.pop();
        if(exp[i]=='+')
        stack.push(y+x);
               else if(exp[i]=='-')
        stack.push(y-x);
       else if(exp[i]=='*')
        stack.push(y*x);
        else if(exp[i]=='/')
        stack.push(y/x);

    }
    }
    return 
    stack.top();
}
int main(){
    char exp[20];
    char*e;
    cout<<"\nEnter postfix expression="<<endl;
    cin>>exp;
    e=exp;
    cout<<postfixeval(e);
    return 0;
}
