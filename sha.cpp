#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <openssl/sha.h>

using namespace std;

// Function to compute SHA256 hash
string sha256(const string inputStr){
    unsigned char hash[SHA256_DIGEST_LENGTH];
    const unsigned char * data = (const unsigned char *)inputStr.c_str();
    SHA256(data, inputStr.length(), hash);
    stringstream ss;
    for(int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        ss << hex << setw(2) << setfill('0') << (int)hash[i];
    }
    return ss.str();
}

int main() {
    string input;
    cout << "Enter a string to hash using SHA256: ";
    cin >> input;
    
    string hash = sha256(input);
    cout << "SHA256 hash of \"" << input << "\":\n" << hash << std::endl;

    return 0;
}
