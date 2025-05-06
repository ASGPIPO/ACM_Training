#include <iostream>
#include <utility>
#include <vector>
#include <cmath>

int main (int argc, char *argv[]) {
    int game = 1;
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        printf("Game %d:\n" ,game);
        game++;
        std::vector<int> answer(n, 0); 
        int guess[n] = {0};
        for(int i = 0; i < n; i++){
            scanf("%d", &answer[i]);
        }
        while (true) {
            std::pair<int, int> res = {0, 0};
            for (int j = 0; j < n; j++) {
            scanf("%d", &guess[j]);
                if (guess[j] == answer[j]) {
                    res.first ++;
                }
            }
            if(guess[0] == 0) {
            
                break;
            }
            for (int i = 1; i <= 9; i++) {
                int a = 0, b = 0;
                for (int j = 0; j < n; j++) {
                    if (guess[j] == i) { a++;}
                    if (answer[j] == i) { b++;}
                    
                }
                res.second += a > b ? b : a; 
            }
            std::cout <<"    ("<< res.first <<"," << res.second - res.first <<")\n";
        }
            
    }
      
    return 0;
    }


