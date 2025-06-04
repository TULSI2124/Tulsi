#include<iostream>
using namespace std;

class train
{
	public:
		int trainnumber;
		char trainname[50];
		char trainsource[50];
		char destination[50];
		char traintime[10];
		static int traincount;
		
		void setData()
{
	cout<<"Enter train number:";
	cin>>trainnumber;
	cout<<"Enter train name:";
	cin>>trainname;
	cout<<"Enter train source:";
	cin>>trainsource;
	cout<<"Enter train destination:";
	cin>>destination;
	cout<<"Enter train time:";
	cin>>traintime;
	cout<<"Enter train count:";
	cin>>traincount;
}

	void getData(){
	cout<<"Enter train number: "<<trainnumber<<endl
		<<"Enter train name: "<<trainname<<endl
		<<"Enter train source: "<<trainsource<<endl
		<<"Enter train destination: "<<destination<<endl
		<<"Enter train time: "<<traintime<<endl
		<<"Enter train count: "<<traincount<<endl;
	}
};
int train :: traincount=3;
int main()
{
	int i;
	train t1,t2,t3;
	t1.setData();
	t1.getData();
	t2.setData();
	t2.getData();
	t3.setData();
	t3.getData();
}
class railwaysystemclass
{
	public:
		 train trains[100];
		 int totaltrain;
		 
		 void addtrain()
		 {
		 	if(totaltrain<100){
		 		train(totaltrain),setData()
		 		totaltrain++;
		 		cout<<"Your data entered successfully..."
			 }
			 else{
			 	cout<<"No extra space to enter the data...";
			 }
		 }
		 void displayalltrain();
		 if(totaltrain == 0)
		 {
		 	cout<<"No train record available.\n";
		 }
		 for(int i=0;i<totaltrain;i++)
		 {
		 	cout<<"\nTrain"<<i+1<<"details\n";
		 	train[i].getData();
}
};
	void search(int num)
	{
		for(int i=0;i<totaltrain;i++)
		{
			if(train[i].getData()==num)
			{
				cout<<"Train found:\n";
				train[i].getData();
			}
		}
	}
	switch(--- Railway Reservation System Menu ---){
	case '1':
		cout<<" Add New Train Record"<<endl
		break;
	case '2':
		cout<<"Display All Train Records"<<endl
		break;
	case'3':
		cout<<"Search Train by Number"<<endl
		break;
	case '4':
		cout<<"Exit"<<endl
		break;
}
