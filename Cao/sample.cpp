#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <numeric>
#include <ostream>
void triangle() {
    int n;
    std::cin >> n;
    for (int i = n; i > 0; i--) {
        for (int k = i; k < n; k++) {
            printf(" ");
        }
        for (int j = 2*(i-1)+1; j > 0; j--) {
            
            printf("#");
        }
        printf("\n");
    }

}

void hanxin() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int minab, minabc;
    minabc = -1;
    for (int i = 1; i < 15+a+b; i++) {
        if (i % 3 == a && i % 5 == b ) {
            minab = i;
            break;
        }
    }
    for (int i = minab; i < std::lcm(15, 7) + minab;) {
        if ( i % 7 == c) {
            minabc = i;
            break;
        }
        i += 15;
    }
    std::cout << minabc;
}
void daffodil() {
    for (int i = 100; i <= 999; i++) {
        int x = (i /100);
        int y = ((i%100) / 10);
        int z = (i%10);
        if (i == (std::pow(x, 3)+ std::pow(y, 3) + std::pow(z, 3))) {
            std::cout << i << std::endl;
        }
    }
}
double sumOfFactorial() {
    int n = 100;
    long long factorial = 1;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        factorial = (i * factorial) % 1000000 ;
        
        sum += factorial;
        sum %= 1000000;
        std::cout << (double)clock() / CLOCKS_PER_SEC << std::endl;
        
    }
    std::cout << sum << std::endl;
    return 0;
}

int main (int argc, char *argv[]) {
    daffodil();
    
    hanxin();
    triangle();
    return 0;
}
