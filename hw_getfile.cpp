#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;
 
//~~~~~for entire line, change cout<<word to cout line
//~~~~~~~~~~~~~~~~~~~~prints line from target word on.
int main(int argc, char* argv[]){
  
  //for (int i = 0; i<argc; i++)
  string word = string(argv[1]);
  

  string line;
  string fileName = "meals.txt";
  ifstream infile (fileName.c_str());

  if (infile.good() == false){
    cout << "unable to open the file name." << fileName;
    exit(1);
  }

  while(true) {
    getline(infile, line);
    size_t pos = line.find(word);
    if (pos == 2){
      string word = line.substr(pos);
      cout << word  << endl;
    }
    if(infile.eof()) break;
  }
  return 0;
}
