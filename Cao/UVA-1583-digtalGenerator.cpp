#include <iostream>
#include <vector>
int main(int argc, char const *argv[])
{
    int n;
    std::vector<int> res(100001, 0);
    
        for (int i = 1; i < 100001; i++) {
            int a = i;
            int ans = i;
            while(a != 0) {
                ans += a%10;
                a /= 10;
            }
            if (res[ans] == 0 || res[ans] > i) {
                res[ans] = i;
            }
        
    }    
    std::cin >> n;
    while (n--){
        int num;
        std::cin >> num;
        std::cout << res[num] <<"\n";
    }
    
    return 0;
}
