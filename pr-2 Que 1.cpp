#include<iostream.h>
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
					Train trains[100];
					int totalTrains=0;
					
					void addTrain()
					{
						if(totalTrains<100)
						{
							trains[totalTrains].traindetails();
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
							if(trains[i].trainNumber==number){
								cout<<"\nTrain found:\n";
								trains[i].displayTrainDetails();
							}
						}
					}
		}	
}



























