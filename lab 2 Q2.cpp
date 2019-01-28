// lab 2 Q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"gitHubUser Q2.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

void readDataFromFile(gitHubUser * Users){
	ifstream fin("C:\\Users\TEMP\Desktop\File.txt");
	if(fin.fail()){
		cout<<"could not open file"<<endl;
	}
	else{
		char temp[30];
		int users,i=0;
		fin.getline(temp,30);
		users=temp[0]-48;
		while(fin.getline(temp,30)!='\0'){
			Users[i].firstName=temp;
		}
			while((temp[0]>48)&&(temp[0]<57)){

			}
		}
	}


int _tmain(int argc, _TCHAR* argv[])
{
	gitHubUser* User=new gitHubUser[10];
	return 0;
}

