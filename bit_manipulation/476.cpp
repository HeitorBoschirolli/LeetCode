#include <cmath>
class Solution {
public:
    int findComplement(int num) {
        int shift;
        if (num == 0)
            shift = 0;
        else
            shift = floor(log2(num)) + 1;
        cout << "shift " << shift << endl;
        int not_num = ~num;
        int mask = pow(2, 33) - 1;
        mask = mask << shift;
        return not_num ^ mask;
    }
};