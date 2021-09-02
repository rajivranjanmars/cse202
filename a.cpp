
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;

string find_word(string file, string word)
{

  int count = 0;
    string line;
 
    /* Creating input filestream */ 
    ifstream file("my_file.txt");
    while (getline(file, line))
        count++;
 

  int offset;
  string line1;
  ifstream Myfile;
  Myfile.open(open);

  if (Myfile.is_open())
  {
    while (!Myfile.eof())
    {
      getline(Myfile, line1);
      if ((offset = line1.find(word,o)) != string::npos)
      {
        return line1;
      }
    }
    Myfile.close();
  }
  else
    cout << "couldn't open...." << endl;
}

int main ()
{
  string c = find_word("my_file.txt", "$COOR");
  cout << c;
  cin.get();
  return 0;
}