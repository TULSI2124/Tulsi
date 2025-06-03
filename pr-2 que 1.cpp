#include<iostream>
#include<string>
using namespace std;

class train
{
	public:
		int trainNumber;
		char trainName[50];
		char source[50];
		char destination[50];
		char trainTime[50];
		
		void trainsdetails()
		{
			cout<<"Enter train number: ";
			cin>>trainNumber;
			
			cout<<"Enter train name: ";
			cin>>trainName;
			
			cout<<"Enter train source: ";
			cin>>source;
			
			cout<<"Enter train destination ";
			cin>>destination;
			
			cout<<"Enter train time: ";
			cin>>trainTime;
		} 
		
		void traindetails()
		{
			{
				cout<<"\nTrain Number: "<<trainNumber;
				cout<<"\nTrain Name: "<<trainName;
				cout<<"\nsource: "<<source;
				cout<<"\ndestination: "<<destination;
				cout<<"\nTrain time: "<<trainTime;				
			}
		};
		class railwaysystem
		{
			public:
					train trains[100];
					int totalTrains=0;
					
					void addTrain()
					{
						if(totalTrains<100)
						{
							train[totalTrains].traindetails();
							totalTrains++;
						}else{
							cout<<"Train limit reached.\n";
						}
					}
					void displayAllTrains()
					{
						if(totalTrains==0)
						{
							cout<<"No trains available.\n";
						}else{
							for(int i=0;i,totalTrains;i++)
							{
								cout<<"\nTrain"<<(i=1)<<"details";
								train[i].Traindetails();
							}
						}
					}
					void  searchTrainByNumber(int number)
					{
						for(int i=0;i<totalTrains;i++)
						{
							if(train[i].trainNumber==number){
								cout<<"\nTrain found:\n";
								train[i].displayTrainDetails();
							}
						}
							cout<<"Train with number"<<number<<"not fouhnd.\n";
					}
};
};

	int main()
	{
		char  railwaysystem rs;
		int choice, number;
		
		while(choice != 4)
		{
			cout<<"\n---Railway System Menu---";
			cout<<"\n1. Add New Train Record";
			cout<<"\n2. Display All Train Record";
			cout<<"\n3. Search Train By Number";
			cout<<"\n4. Exit";
			cout<<"\nEnter your choice: ";
			cin>> choice;
			
			switch(choice)
			{
				case 1:
					rs.addTrain();
					break;
				case 2:
					rs.displayAllTrains();
					break;
				case 3:
					cout<<"Enter Train Number to Search: ";
					cin>> number;
					rs.searchTrainByNumber(number);
					break;
				case 4:
					cout<<"Good Bye!\n";
					break;
				default: 
					cout<<"Invalid choice.\n";
				
			}	
		}
}
                                            