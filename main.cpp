//Authors: Anthony Micodin
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  int lucky;
  string first;
  string last;

  //get user input
  cout<<"What is your first name?"<<endl;
  cin>>first;

  cout<<"What is your last name?"<<endl;
  cin>>last;

  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune ..."<<endl;

  //tell fortune
  lucky = first.length();
  cout<<"Your lucky number is "<<lucky<<endl;
  return 0;
}
