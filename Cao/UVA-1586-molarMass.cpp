#include <iostream>
#include <string>
#include <unordered_map>

int main(int argc, char const *argv[])
{
    std::unordered_map<char, double> table = {{'C', 12.01}, {'H', 1.008}, {'O', 16.0}, {'N', 14.01}};
    int n;
    std:: cin >> n;
    std::string s;
    while(n--) {
        std::cin >> s;
        double res = 0;
            for (int i = 0; i < s.size(); i++) {
            int j = i;
            if (table.find(s[i]) != table.end()) {
                if (i < (s.size() - 2) && 
                isdigit(s[j+1])  && 
                isdigit(s[j+2])) {
                    res += table.at(s[i]) * ((s[j+1] - '0') * 10 + (s[j+2] - '0'));
                }
                else if (i < (s.size()- 1) && isdigit(s[j+1])) {
                    res += table.at(s[i]) * (s[j+1] - '0');

                }
                else {
                    res += table.at(s[i]);
                }
            }
        }
        printf("%.3lf\n", res);

    }
        return 0;
}