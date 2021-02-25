#include <iostream>
#include <getopt.h>

using std::cout;
using std::endl;

// global variables from getopt.h:
// extern char *optarg;
// extern int optopt, optind, opterr;


int main(int argc, char* argv[]){


    for(int i=0; i<argc; ++i){
        cout << "Arg: " << i << " = " << argv[i] << endl;
    }

    cout << endl << "===============================================" << endl << endl;

    int opt = getopt(argc, argv, ":a:b:X");

    while (opt != -1){
        switch(opt){
            case 'a': 
                cout << "Option a passed with argument: " << optarg << endl;
                break;
            case 'b': 
                cout << "Option b passed with argument: " << optarg << endl;
                break;
            case 'X': 
                cout << "Option X passed" << endl;
                break;
            case '?':
                cout << "Unknown option passed in: " << static_cast<char>(optopt) << endl;
                break;
            case ':':
                cout << "Option: " << static_cast<char>(optopt) << "missing required argument" << endl;
                break;
        }
        opt = getopt(argc, argv, ":a:b:X");
    }
}