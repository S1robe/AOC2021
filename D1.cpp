// This one is about counting # of increasing subseqeuences
#include <iostream>
#include <fstream>

int main(){
   using namespace std;
   ifstream f;
   f.open("in.txt");
   int comp, i = 0;
   f >> comp; // grab first in sequence for comparison
   for(int n, k; f >> n; comp = n){
       if (n > comp)
         i++;
   }
   f.close();
   cout << i;
}
