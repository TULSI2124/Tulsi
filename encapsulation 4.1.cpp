#include<iostream>
using namespace std;

class student
{
	public:
		int id;
		char name[50];
		int age;
		char course[50];
		char city[50];
		char email[50];
		char college[50];
		
		void setData(){
			cout<<"Id: ";
			cin>>id;
			cout<<"Name: ";
			cin>>name;
			cout<<"Age: ";
			cin>>age;
			cout<<"Course: ";
			cin>>course;
			cout<<"City: ";
			cin>>city;
			cout<<"Email: ";
			cin>>email;
			cout<<"College: ";
			cin>>college;
			}
			
			void getData()
			{
				cout<<"Id: "<<id<<endl
				<<"Name: "<<name<<endl
				<<"Age: "<<age<<endl
				<<"Course: "<<course<<endl
				<<"City: "<<city<<endl
				<<"Email: "<<email<<endl
				<<"College: "<<college<<endl;
			}
		
};
int main()
{
	student s1,s2,s3,s4,s5,s6,s7;
	s1.setData();
	s1.getData();
	s2.setData();
	s2.getData();
	s3.setData();
	s3.getData();
	s4.setData();
	s4.getData();
	s5.setData();
	s5.getData();
	s6.setData();
	s6.getData();
	s7.setData();
	s7.getData();
}
