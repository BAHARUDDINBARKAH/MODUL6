#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseSentence(string sentence) {
    stack<char> charStack;
    string word = "";

    cout << "Data : ";

    for (char c : sentence) {
        if (c == ' ') {
            // Proses kata yang ada di stack
            while (!charStack.empty()) {
                cout << charStack.top();
                charStack.pop();
            }
            cout << " "; // Tambahkan spasi setelah kata
        } else {
            charStack.push(c);
        }
    }

    // Proses kata terakhir setelah loop
    while (!charStack.empty()) {
        cout << charStack.top();
        charStack.pop();
    }
    cout << endl;
}

int main() {
    string kalimat;
    cout << "Masukkan Kata: ";
    getline(cin, kalimat);
    reverseSentence(kalimat);
    return 0;
}