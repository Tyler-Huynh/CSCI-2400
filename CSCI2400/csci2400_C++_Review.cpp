#include <iostream>

using namespace std;

#include<stdio.h>

int main()
{
    int abc = 1;
    if (!abc) {
        printf("In first if\n");
        printf("%d\n", !abc); 
    }
    else {
        printf("In first else\n");
        int xyz = -10;
        printf("%d\n", !xyz);
    }

    int lmn = 0; 
    if(!lmn) {
        printf("In second if\n");
        printf("%d\n", !lmn);
    }
    else {
        printf("In second else\n");
        printf("I love C/C++!\n");
    }

    return 0;
}
