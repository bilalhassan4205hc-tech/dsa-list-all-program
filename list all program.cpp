#include<iostream>
using namespace std;
int n=5;
int l[6],m=0,i;
void ins();
void del();
void print();
void destroy();
void full();
void empty();
int main(){
	
	int c;
	do{
		cout<<"\n1:inseration";
		cout<<"\n2:delection";
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
	
	int no,p;
	pos1:
	if(m>=n)
	cout<<"overflow";
	else{
		cout<<"enter a num";
		cin>>no;
		pos:
		cout<<"enter position";
		cin>>p;
		if(p>m+1||p==0){
			cout<<"invalid pos";
			goto pos;
		}
		for(i=m;i>=p;i--){
			l[i+1]=l[i];
		}
		l[p]=no;
		m++;
	}
	cout<<"To repeat press 0 otherwise 1.";

int a;
cin>>a;
if(a==0)
goto pos1;

}
void del(){
	int dp,temp;
	if(m<=0){
		cout<<"underflow";
	}
	else{
		A:
		cout<<"enter delected position";
		cin>>dp;
		if(dp<1||dp>m){
			cout<<"invalid position";
		goto A;
		}
		temp=l[dp];
		l[dp]=0;
		for(i=dp;i<m;i++)
			l[i]=l[i+1];
		l[i]=0;
		cout<<"deleted element"<<temp;
		m=m-1;
	}
	
}
void print(){
cout<<"Here is the list:"<<endl;
	for(i=1;i<=m;i++)
	cout<<l[i]<<endl;	
}
void full(){
	cout << (m>= n ? "List is full" : "List is not full") << endl;
}
void empty(){
	cout << (m == 0 ? "List is empty" : "List is not empty") << endl;
}
void destroy(){
	  for(i=1;i<=m;i++) {
	  
	  l[i]=0;
	  m=0;  
    }
    cout << "All elements have been deleted." << endl;
}
