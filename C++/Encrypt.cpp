#include <iostream>
#include <cstring>
#include "Encrypt.h"

using namespace std;

char Encryption::performIncrement(char c) {
    int res;
    if(c >= 'a' && c <= 'z') {
        res = (c - 'a' + key) % 26 + 'a';
    }
    else if(c >= 'A' && c <= 'Z') {
        res = (c - 'A' + key) % 26 + 'A';
    }
    else {
        res = c;
    }
    return (char) res;
}

Encryption::Encryption(string s, int k) {
    opstring = s;
    key = k;
}

string Encryption::encrypt() {
    int len = opstring.length();
    string output = "";
    for(int i = 0; i < len; i++) {
        output += performIncrement(opstring[i]);
    }
    return output;
}

