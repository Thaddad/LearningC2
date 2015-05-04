#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;
 
//~~~~~for entire line, change cout<<word to cout line
//~~~~~~~~~~~~~~~~~~~~prints line from target word on.
int main(int argc, char* argv[]){
  
  if (argc < 2) {
    cerr << "ERROR: missing first argument" << endl;
    exit(1);
  }
  string word = string(argv[1]);
  

  string line;
  string fileName = "meals.txt";
  ifstream infile (fileName.c_str());

  if (infile.good() == false){
    cerr << "ERROR: unable to open the file name " << fileName << endl;
    exit(1);
  }

  while(true) {
    getline(infile, line);
    size_t pos = line.find(word);
    if (pos != -1){
      string word = line.substr(pos);
      cout << word  << endl;
    }
    if(infile.eof()) break;
  }
  return 0;
}
