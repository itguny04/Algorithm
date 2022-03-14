#include <iostream>
#include <vector>

bool check(int data[]) {
    int max = 0;
    int tmp;

    for(int i=0;i<3;i++) {
        max = i;
        for(int j=i;j<3;j++) {
            if (data[max] < data[j]) {
                tmp = data[max];
                data[max] = data[j];
                data[j] = tmp;
            }
        }
    }

    int c = data[0]*data[0];
    int ab = (data[1]*data[1]) + (data[2]*data[2]);

    if(c==ab) {
        return true;
    } else {
        return false;
    }
}

int main(void) {
    int data[3];

    while(true) {
        for(int i=0;i<3;i++) {
            std::cin >> data[i];
        } 

        if(data[0]==0 && data[0]==0 &&data[0])

    }



    return 0;
}