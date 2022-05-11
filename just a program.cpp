#include<iostream>
using namespace std;
class pyramid{
	public:
		int a;
		pyramid(){
			cout<<"enter a no."<<endl;
		cin>>a;	
		
		for(int b=0;b<=a;b++)
		{
			for(int c=a;c>b;c--)
			{
				cout<<" ";
				
			}
			cout<<"1";
			for(int d=0;d<b;d++){
					cout<<"0";
				}
				for(int e=0;e<b;e++)
				{	
					cout<<"0";
				}
				cout<<"1";
				cout<<""<<endl;
		}}
		void circle(){
			int diameter=0;
			while(diameter!=10){
				cout<<"0";
				if(diameter%2==0){
					cout<<""<<endl;
				}
			}
		}
		void rect()
		{
			int base,hieght,bs,ht;
			cout<<"enter base of rectangle"<<endl;
			cin>>base;
			cout<<"\nenter hieght of the rectangle"<<endl;
			cin>>hieght;
			bs=base;
			ht=0;
			while(ht!=hieght)
			{	ht++;
				if (ht==1||ht==hieght)
				{
					for(int aa=0;aa<bs;aa++)
					{
						cout<<"-";
					}
					cout<<""<<endl;
				}
				else
				{
					for(int bb=1;bb<=bs;bb++)
					{
						if(bb==1||bb==bs)
						{
							cout<<"-";
						}
						else
						{
							cout<<" ";
						}
					}
					cout<<""<<endl;
				}
							
			}			
		}
		void pyramid2()
{
	
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<i;j++)
			{
			cout<<"0";
			}
			cout<<"1"<<endl;
		}	
	for(int x=0;x<=a;x++)
	{
			for(int y=a;y>x;y--)
			{
				cout<<"0";
			}
			cout<<"1"<<endl;
		}		
	
	
}
void raff()
{
	
		for(int g=0;g<a;g++)
		{
			for(int h=a;h<g;h--)
			{
				cout<<"0";
			}
			cout<<"1";
			for(int k=0;k<g;k++)
			{  cout<<"0";}
				for(int l=0;l<g;l++)
				{
					cout<<"0";
				}
				cout<<"1";
				cout<<""<<endl;
			}
		
}
		
		
};


int main()
{	int choice;


do{
	pyramid ob;

	cout<<"\n1.make pyramid"<<endl;
	cout<<"\n2.make circle"<<endl;
	cout<<"\n3.make rectangle"<<endl;
	cout<<"\n4 to exit"<<endl;
		cout<<"\n1.choose what you want to do"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				pyramid();
				break;
				
			case 2:
				ob.circle();
				break;
				
			case 3:
				ob.rect();
				break;
				
			case 4:
				
				break;
				
			default:
				cout<<"error!"<<endl;
				break;
			}
}
while(choice!=4);
	return 0;
}
