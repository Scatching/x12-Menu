//Authors: Xinru Lin Sarah Catching 
#include<iostream>
#include<string>
using namespace std;

int main()
{
  std::string item;
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
   if(input=='A' || input=='a')
   {
   cout<<"What is your item you wish to add?"<<endl;
   cin>>item;
   cout<<"Adding "<<item<<" to menu."<<endl;
   list[numItems]=item;
   numItems++;
   if(numItems>4)
   {
   cout<<"You'll need a bigger list!"<<endl;
   }}
   if(input=='S' || input=='s')
   {
   for(int i=0; i<numItems; i++)
   {
   cout<<"Your list contains "<<list[i]<<endl;
   }}



}
while(input!='Q' && input!='q');
 // if(input=='A'|| input=='a')
 // {
  //cout<<"What is your item you wish to add?"<<endl;
 // cin>>item;
 // cout<<"Adding "<<item<<" to menu."<<endl;
 // } 


  return 0;
}
