#include <iostream>
#include <fstream>
#include <math.h>
#include <string.h>
#include <cmath>



int main(){
    using namespace std;

    ifstream f;
    f.open("in.txt");
    unsigned short gamma = 0;

    string in = "";
    getline(f, in); // give me first line

    int size = in.size()-1; // exclude the /n and make it an index
    int freq[size+1];      // exclude the /n

    for (int i = 0; i <= size; i++){freq[i] = 0;}

    do {
      for(int i = 0; i <= size; i++){ // run through each number counting 1's and 0s
        if(in[i]-48) freq[i]++; //if 1 add
        else freq[i]--;           // if 0 sub
      }
    }while(getline(f, in)); // continue while file has lines

    for(int i = 0; i <= size; i++){
      if(freq[i] > 0){
         gamma = (gamma | (short) pow(2, size-i));
      }
    }

    cout << gamma << endl;

    unsigned short epsilon = ~gamma & 0b0000111111111111;

    cout << epsilon << endl;

    cout << gamma * epsilon;
    f.close();
    return 0;
}


