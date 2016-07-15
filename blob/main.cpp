//
//  main.cpp
//  blob
//
//  Created by Reem Alattas on 7/15/16.
//  Copyright © 2016 ReemAlattas. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    
    const int N = 10;
    int blobCounter[N*N];
    int top = 0, left = 0, bottom = 0, right = 0;
    
    int blob[N][N] = {{0,0,0,0,0,0,0,0,0,0},
            {0,0,1,1,1,0,0,0,0,0},
            {0,0,1,1,1,1,1,0,0,0},
            {0,0,1,0,0,0,1,0,0,0},
            {0,0,1,1,1,1,1,0,0,0},
            {0,0,0,0,1,0,1,0,0,0},
            {0,0,0,0,1,0,1,0,0,0},
            {0,0,0,0,1,1,1,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}};
    
    //Find Top Left corner
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (blob[i][j]) {
                top = i;
                left = j;
                goto top_left_found;
            }
        }
    }
    
top_left_found:
    cout << "Top = " << top << endl;
    cout << "Left = " << left << endl;
    
    //Find Bottom Right corner
    
    for (int i = N-1; i >= 0; i--) {
        for (int j = N-1; j >= 0; j--) {
            if (blob[i][j]) {
                bottom = i;
                right = j;
                goto bottom_right_found;
            }
        }
    }

bottom_right_found:
    cout << "Bottom = " << bottom << endl;
    cout << "Right = " << right << endl;

    
    return 0;
}
