#include<iostream>
using namespace std;
class temp{
    public:
    int a,b,result;
    char op;

    void num1(){
        
        cin>>a;
    };
    void num2(){
        
        cin>>b;
    };
    void getop(){
        
        cin>>op;
    };


    void add(){
        result=a+b;
        cout<<result<<endl;
        a=result;
        b=0;
    };
    void sub(){
        result=a-b;
        cout<<result<<endl;
        a=result;
        b=0;
    };
    void mul(){
        result=a*b;
        cout<<result<<endl;
        a=result;
        b=0;
    };
    void div(){
        result=a/b;
        cout<<result<<endl;
        a=result;
        b=0;
    };
    void mod(){
        result=a%b;
        cout<<result<<endl;
        a=result;
        b=0;
    }


};

int main(){
    cout<<"     SIMPLE-CALCULATOR FOR   +  -  *  /  %     "<<endl;
    cout<<"Enter equation with two operands only:"<<endl;
    temp obj;
    obj.num1();
    
    char i;
while(i!='N'){
    function:{
    obj.getop();
    obj.num2();

    
        switch(obj.op){
                case '+':
                    obj.add();
                    break;
                
                case '-':
                    obj.sub();
                    break;
                
                case '*':
                    obj.mul();
                    break;
                
                case '/':
                    obj.div();
                    break;
                case '%':
                obj.mod();
                break;

                default:{
                cout<<"!!!Invalid Operator!!!\n";
                cout<<"Enter again:";
                obj.num1();
                goto function;
                        }

            }
    }
    
        cout<<"\nDo you want to continue:Y OR N:\n";
        cin>>i;

        if((i=='Y')||(i=='y')){
            cout<<"Enter operator along with operand:\n"<<obj.a;
        }
        else
            cout<<"THANKYOUUU!!!";
}

    return 0;
}
