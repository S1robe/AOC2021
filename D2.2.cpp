// f = h + x, d * x
// d = a + x
// u = a - x
// a

#include <iostream>
#include <fstream>
#include <string.h>


int main(){
    using namespace std;

    ifstream f;
    f.open("in.txt");
    long int d = 0, h = 0, a = 0;
    // forward does the moving, up and down change my aim, forward executes it
    string in;
    while(getline(f, in)){

        long int x = stoi(in.substr(in.find(' ')+1));
        char c = in[0];

        if(c == 'u') a = std::max(a - x, (long int) 0);

        else if (c == 'd') a += (long int)x;

        else {h += (x); d += (a*x);}

        cout << h << endl;

    }
    cout << d << " " << h << endl << d*h << endl;
    f.close();
    return 0;
}
