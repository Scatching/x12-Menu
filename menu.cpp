//Authors: Xinru Lin Sarah Catching 
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  do {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (S)how grocery list";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/S/Q): ";
  cin>>input;
}
while(input!='Q' && input!='q');
  



  return 0;
}
