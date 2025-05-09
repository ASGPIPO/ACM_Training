#include <iostream>
#include <string>
int main(int argc, char const *argv[])
{   int n;
    //std::string s;
    std::cin >> n;
    while (n--) {
        int num = 0;
        std:: cin >> num;
        int count[10] = {0};
        for (int i = 1; i <= num; i++) {
            int number = i;
            while (number != 0)
            {
                count[number %10] ++;
                number /= 10;
            }
            
        }
        for (int i = 0; i < 10; i++) {
            if (i == 9) {
                printf("%d", count[i]);

            }
            else
                printf("%d ", count[i]);
            
        }
        printf("\n");
    
    }
    return 0;
}
