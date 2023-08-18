#include <iostream>

//Library for the input of the text file using data handling.

#include <fstream>
using namespace std;

//main() function starts.

int main()
{
 
 string s;
 cout<<"Please enter the name of file : ";
 cin>>s;
 
 //Opening the text file in Read mode using inbuilt function data handling i.e. ifstream.
 
 ifstream fin(s); 
 
 //will not count first word so initial value is 1

 int word=1; 
 char ch;
 
 //bring position of file pointer to begining of file.
 
 fin.seekg(0,ios::beg); 
 
 while(fin)
 {
  fin.get(ch);
  if(ch==' '||ch=='\n')
  word++;
 } 
 
 cout<<"\n Number of Words= "<<word<<"\n";
 
 //closing file
 
 fin.close(); 
 
 return 0;

}