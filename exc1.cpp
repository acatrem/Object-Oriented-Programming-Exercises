//1 ile 15 arasindaki tamsayilari listeleyen program
//8 ile 12 arasındaki tamsayilar dahil degildir

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

for (int i = 1; i <= 15; i++) {

    if (i <= 8 || i >= 12) {
        cout << i << endl;
    }
}
    return 0;
}
