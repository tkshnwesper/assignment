#include <iostream>
#include <cstdlib>
#include "Encrypt.h"

using namespace std;

int main(int nargs, char** args) {
    string input_str = "";
    int key = atoi(args[nargs - 1]);
    for(int i = 1; i < nargs - 1; i++) {
        input_str = input_str + args[i] + " ";
    }
    input_str.erase(input_str.length() - 1);
    Encryption e(input_str, key);
    cout << e.encrypt();
    return 0;
}
