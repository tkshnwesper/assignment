#ifndef ENCRYPT_H_INCLUDED
#define ENCRYPT_H_INCLUDED

using namespace std;

class Encryption {
    private:
    string opstring;
    int key;
    char performIncrement(char c);

    public:
    Encryption(string s, int k);
    string encrypt();
};

#endif // ENCRYPT_H_INCLUDED
