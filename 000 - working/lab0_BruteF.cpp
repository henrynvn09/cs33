#include<iostream>
#include<fstream>

using namespace std;

// TODO: change program name
const string PROGRAM_NAME = "lab0";

void solve(ofstream &ofs, int num) {
    ofs << num*3/4;
}

int main(int argc, char const *argv[])
{
    ifstream ifs((PROGRAM_NAME + ".inp").c_str());
    ofstream ofs((PROGRAM_NAME + ".ans").c_str());

    // read data
    int num;
    ifs >> num;
    
    // Solve
    solve(ofs, num);


    ifs.close();
    ofs.close();

    return 0;
}
