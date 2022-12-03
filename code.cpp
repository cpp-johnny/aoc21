#include <iostream>
#include <fstream>
using namespace std;


int main() {

  int data[2000];
  
  int increases = 0;

  string myText;
  int myInt;

  ifstream numFile("page.txt"); // reading from input file


  // read data from file (disk) to array (memory)
  int i = 0;
  while (getline(numFile, myText)) {
    myInt = stoi(myText);
    data[i] = myInt;
    i++;
  }

  for (int i = 0; i < 2000; i++) {
    // cout << data[i] << endl;
    if (data[i+1] > data[i]) {
      increases = increases + 1; // increases += 1; or increases++;
    }
  }
  
  cout << increases << endl; 
  //cout << "Hello World!\n"; // \n is the newline character
  return 0;
}
