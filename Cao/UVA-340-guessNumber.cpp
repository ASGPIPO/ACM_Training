#include <iostream>
#include <utility>
#include <vector>

int main (int argc, char *argv[]) {
    int game = 1;
    int n;
    do {
        std::cin >> n;
        if(n != 0) {
            std::cout << "Game " << game << ":\n";
            game++;
        }
        int count[10] = {0,0,0,0,0,0,0,0,0,0};
        std::vector<int> ans(n, 0);
        for (int i = 0; i < n; i++) {
            std::cin >> ans[i];
            count[ans[i]] += 1;
        }
        
        while (true) {
            int over = 0;
            int guess[n];
            int tempCount[10];
            std::copy(std::begin(count), std::end(count), std::begin(tempCount));
            std::pair<int, int> res = {0,0};
            for(int i = 0; i < n; i++){
                std::cin >> guess[i];
                if(guess[i] == 0 ){
                    over++;
                }
                if (guess[i] == ans[i]) {
                    tempCount[guess[i]] --;
                    res.first ++;
                }
            }
            if (over == n) {
                break;

            }
            for (int i = 0; i < n; i++){
                if(guess[i] != ans[i] && tempCount[guess[i]] != 0) {
                    res.second ++;
                    tempCount[guess[i]]--;
                
                }

            }


             std::cout <<"    ("<< res.first <<"," << res.second <<")\n";

        }


    } while(n != 0);
    return 0;
}
