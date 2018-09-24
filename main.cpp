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

  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..."<<endl;

  //tell fortune
  lucky = first.length();
  cout<<"your lucky number is "<<lucky<<endl;
  
  
  if (first[0] == 'a'|| first[0] == 'e' || first[0] == 'i' || first[0] == 'o'|| first[0] == 'u'|| first[0] == 'A' || first[0] == 'E' || first[0] == 'I' || first[0] == 'O' || first[0] == 'U' )
  {
   cout<<"you are destined to be famous!"<<endl;
  }       

  else 
  {
   cout<<"you should keep a low profile."<<endl;
  }
  
  int index = last.length() - 1;

 if (last[index] == 'a' || last[index] == 'A' || last[index] == 'e' || last[index] == 'E' || last[index] == 'i' || last[index] == 'I' || last[index] == 'o' || last[index] == 'O' || last[index] == 'u' || last[index] == 'U')
 {
         cout<<"you have already met your true love."<<endl;
 }

 cout<<"have a good day!"<<endl;
  return 0;
}

