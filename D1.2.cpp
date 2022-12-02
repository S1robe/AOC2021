#include <iostream>
#include <fstream>


int main(){
   using namespace std;
   ifstream f;
   f.open("in.txt");
   int count = 0;
   int fSum = 0;
   int sSum = 0;
   int i ,j,k, l;
   f >> i >> j >> k; // Pull 3 ints from list to start
   fSum = i + j + k;
   for(;;){
      sSum = fSum - i;
      i = j;
      j = k;
      if(!(f >> k)){
         break;
      }
      sSum += k;
      if(sSum > fSum)
         count++;
      fSum = sSum;
   }
   cout << count;
}
