// f = horizonal
// d = dive
// u = lift

#include <iostream>
#include <fstream>
#include <string.h>


int main(){
    using namespace std;

    ifstream f;
    f.open("in.txt");
    int d = 0, h = 0;
    string in;
    while(getline(f, in)){
        
        char x = in[in.size()-1];
        cout << x << endl;
        char c = in[0];

        if(c == 'u') d -= (x - 48);
        else if (c == 'd') d += (x-48);
        else h += (x-48);
    }
    cout << d << " " << h << " " << d*h;
    f.close();
    return 0;
}
