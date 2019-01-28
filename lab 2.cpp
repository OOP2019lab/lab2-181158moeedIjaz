// lab 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include"gitHubUser.h"
using namespace std;

bool Comparison(gitHubUser User1,gitHubUser User2){
	if(User1.firstName==User2.firstName){
		if(User1.userName==User2.userName){
			if(User1.email==User2.email){
				if(User1.password==User2.password){
					if(User1.folderCount==User2.folderCount){
						return true;
					}
				}
			}
		}
	}
	return false;
}
bool exists(gitHubUser* Users,int size,string UserName){
	for(int i=0;i<size;i++){
		if(Users[i].userName==UserName){
			return true;
		}
	}
	return false;
}
void InputFromUser(gitHubUser* Users,int size,string UserName){
	for(int i=0;i<size;i++){
		cout<<"Enter first name for user "<<i<<" : ";
		cin>>Users[i].firstName;
		cout<<"Enter user name for user "<<i<<" : ";
		cin>>UserName;
		for(int j=0;exists(Users,size,UserName)==true;j++){
			cout<<"This userName already exists, enter another userName"<<endl;
			cout<<"Enter user name for user "<<i<<" : ";
			cin>>UserName;
		}
		Users[i].userName=UserName;
		cout<<"Enter email for user "<<i<<" : ";
		cin>>Users[i].email;
		cout<<"Enter password for user "<<i<<" : ";
		cin>>Users[i].password;
	}
}
gitHubUser* searchUser( gitHubUser* Users, int size, string UserName){
	for(int i=0;i<size;i++){
		if(Users[i].userName==UserName){
			return (Users+i);
		}
	}
	return nullptr;

}
int _tmain(int argc, _TCHAR* argv[])
{
	gitHubUser User1,User2;
	gitHubUser* Users=new gitHubUser[4];
	int size=4;
	string UserName="Ali";
	//Users[1].userName="Ali";
	//InputFromUser(Users,size,UserName);
	//cout<<searchUser(Users,size,UserName);
	return 0;
}

