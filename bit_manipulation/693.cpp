class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool has_alterning = true;
        int last_bit = -1;
        
        while (n) {
            if (n % 2 == last_bit) {
                has_alterning = false;
                break;
            }
            else {
                last_bit = n % 2;
                n /= 2;
            }
        }
        
        return has_alterning;
    }
};