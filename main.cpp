#include <iostream>
#include <getopt.h>

using std::cout;
using std::endl;


int main(int argc, char* argv[]){


    for(int i=0; i<argc; ++i){
        cout << "Arg: " << i << " = " << argv[i] << endl;
    }

    cout << endl << "===============================================" << endl << endl;

    int opt = getopt(argc, argv, "abX");

    while (opt != -1){
        switch(opt){
            case 'a': 
                cout << "Option a passed" << endl;
                break;
            case 'b': 
                cout << "Option b passed" << endl;
                break;
            case 'X': 
                cout << "Option X passed" << endl;
                break;
        }
        opt = getopt(argc, argv, "abX");
    }
}