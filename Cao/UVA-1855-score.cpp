#include <iostream>
#include <string>
int main(int argc, char const *argv[])
{
    int n;
    std:: cin >> n;
    std::string s;
    while(n--) {
        std::cin >> s;
        int score = 1;
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'X') {
                score = 1;
            }
            else {
                res += score;
                score ++;
            }
        }
        std::cout << res <<"\n";

    }
        return 0;
}
