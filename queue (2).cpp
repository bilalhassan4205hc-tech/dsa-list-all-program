#include<iostream>
using namespace std;
int n=5;
int q[6],R=0,F=0;
void ins();
void del();
void print();
void destroy();
void full();
void empty();
int main(){
	
	int c;
	do{
		cout<<"\n1:ins";
		cout<<"\n2:del";
		cout<<"\n3:print";
		cout<<"\n4:empty";
		cout<<"\n5:full";
		cout<<"\n6:destroy";
		cout<<"\n7:exit";
		cout<<"\nenter your choice";
		cin>>c;
		if(c==1)
		ins();
		else if(c==2)
		del();
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

void ins(){
	
	int no;
	pos1:
	if(R>=n)
	cout<<"overflow";
	else{
		cout<<"enter a num";
		cin>>no;
		if(F==0 || R==0){
			F=1;
			R=1;
		}else
		R=R+1;
		q[R]=no;	
	}
	cout<<"To repeat press 0 otherwise 1.";

int a;
cin>>a;
if(a==0)
goto pos1;

}
void del(){
	int temp;
	if(F==0 ||R==0){
		cout<<"queue is empty";
	}
	else{
		
		temp=q[F];
		q[F]=0;
		if(F==R){
			F=0;
			R=0;
		}else 
		F=F+1;
	
		cout<<"deleted element"<<temp;
	cout<<"rear"<<R<<"front"<<F;	}
	
}
void print(){
cout<<"Here is the list:"<<endl;
	for(int i=1;i<=R;i++)
	cout<<q[i]<<endl;	
}
void full(){
if(R>=n)
cout<<"full";
else
cout<<"not full";
}
void empty(){
	if(F==0&&R==0){
		cout <<	"List is empty"<<endl;
	}else
	cout<<"""List is not empty"<<endl;

}
void destroy(){
	while(R!=0&&F!=0)
	del();
    }
  

