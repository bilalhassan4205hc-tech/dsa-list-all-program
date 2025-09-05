#include<iostream>
using namespace std;
int n=5;
int s[6],top=0;
void push();
void pop();
void print();
void destroy();
void full();
void empty();
int main(){
	
	int c;
	do{
		cout<<"\n1:push";
		cout<<"\n2:pop";
		cout<<"\n3:print";
		cout<<"\n4:empty";
		cout<<"\n5:full";
		cout<<"\n6:destroy";
		cout<<"\n7:exit";
		cout<<"\nenter your choice";
		cin>>c;
		if(c==1)
		push();
		else if(c==2)
		pop();
		else if(c==3)
		print();
		else if(c==4)
		empty();
		else if(c==5)
		full();
		else if(c==6)
		destroy();
		else if(c!=7)
		cout<<"invalid try again";
	}
	while(c!=7);
	}

void push(){
	
	int no;
	pos1:
	if(top>=n)
	cout<<"overflow";
	else{
		cout<<"enter a num";
		cin>>no;
		top=top+1;
		s[top]=no;	
	}
	cout<<"To repeat press 0 otherwise 1.";

int a;
cin>>a;
if(a==0)
goto pos1;

}
void pop(){
	int temp;
	if(top<=0){
		cout<<"underflow";
	}
	else{
		
		temp=s[top];
		s[top]=0;
		top--;
		cout<<"deleted element"<<temp;
	}
	
}
void print(){
cout<<"Here is the list:"<<endl;
	for(int i=1;i<=top;i++)
	cout<<s[i]<<endl;	
}
void full(){
if(top==n)
cout<<"full";
else
cout<<"not full";
}
void empty(){
	if(top<1){
		cout <<	"List is empty"<<endl;
	}else
	cout<<"""List is not empty"<<endl;

}
void destroy(){
	 for(int i=top;i>=1;i--)
	 pop(); 
    }
  

