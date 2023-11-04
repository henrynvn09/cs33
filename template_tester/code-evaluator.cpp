#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <ctime>
#include <cassert>

using namespace std;

// TODO: change program name
const string PROGRAM_NAME = "template";
// Number of test
const int NTEST = 100;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd

// l <= random number <= h.
long long Rand(long long l, long long h) {
    assert(l <= h);
    return l + rd() * 1LL * rd() % (h - l + 1);
}

void generate_input(ofstream &inp){
    // TODO: change input generator
    
}

int main()
{
    srand(time(NULL));
    for (int iTest = 1; iTest <= NTEST; iTest++)
    {
        ofstream inp((PROGRAM_NAME + ".inp").c_str());
        // input generator
        generate_input(inp);
        inp.close();
        // program reader
        system(("./" + PROGRAM_NAME).c_str());
        system(("./" + PROGRAM_NAME + "_BruteF").c_str());
        // compare .out is the tested output, .ans is the brute force output
        if (system(("diff " + PROGRAM_NAME + ".out " + PROGRAM_NAME + ".ans").c_str()) != 0)
        {
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
    return 0;
}