#include <string>
#include <iostream>
int isSmaller(std::string &s, int size, int index, int mins) {
    for(int i = 0; i < size; i++) {
        if (s[mins + i] < s[index + i]) {
            return mins;
        } else if (s[mins + i] > s[index + i]) {
            return index;
        }
        
    }
    return mins;
}
int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    while(n--) {
        std::string s;
        int mins = 0;
        std::cin >> s;
        int size = s.size();
        s +=s;
        for (int i = 0; i <= size; i++ ){
            mins = isSmaller(s, size, i, mins);
        }
        while(size--) {
            printf("%c", s[mins++]);
        }
        printf("\n");    
        
    }
    return 0;
}
