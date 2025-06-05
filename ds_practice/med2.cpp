// Medium 2. Count Vowels in a String Using Pointers
#include <iostream>
using namespace std;
int main() {
    char str[1000];
    cin.getline(str, 1000);
    char *p = str;
    int count = 0;
    while(*p) {
        char c = *p;
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') count++;
        p++;
    }
    cout << count;
    return 0;
}
