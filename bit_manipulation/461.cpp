#include<iostream>

class Solution {
public:
    int hammingDistance(int x, int y) {
        x = x^y;

        int ham_dist = 0;
        while (x) {
            if (x % 2 == 1) {
                ham_dist++;
            }
            x /= 2;
        }
        return ham_dist;
    }
};
