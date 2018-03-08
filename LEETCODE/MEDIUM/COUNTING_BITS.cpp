class Solution {
public:
    vector<int> countBits(int num) {
        
        // i   bin   A
        // -----------
        // 5 = 101 = 2
        // 4 = 100 = 1
        // 3 = 011 = 2
        // 2 = 010 = 1
        // 1 = 001 = 1
        // 0 = 000 = 0
        
        // 0, 1, 1, 2, 1, 2 .. where A(0) = 0
        
        vector<int> array_bits; // initialize vector
        array_bits.push_back(0); // 0 = 000 = 0; int 0 = binary 000 (3 digits), = 0 bit counts
        
        for (int i = 1; i <= num; i++) { // dynamic programming: access previously stored bit counts to determine next bit counts
            array_bits.push_back(array_bits[i & (i - 1)] + 1); // 100 & (100 - 011) = 000 + 001 = 001 = 1
            // equation: A(n) = A(n & n-1) + 1
            // generally to get the number of bits you'd have to break it down first,
            // which could be count += 1 if first digit in number is 1. you can do n & 1 to get that.
            // and then you push the digit to the right to shave it off until no more ones.
            // i.e., 0 = 100 & 001; 0 = 010 & 001; 1 = 001 & 001
            // ^ longer way
            
            // faster way is to expand out the first few sequences and find pattern.
            // A(0) = 0
            // A(1) = A(1 & 1-1) + 1 = 1
            // A(2) = A(2 & 2-1) + 1 = 1
            // A(3) = A(3 & 3-1) + 1 = 2
            // A(4) = A(4 & 4-1) + 1 = 1
            // A(5) = A(5 & 5-1) + 1 = 2
            
            // cout << i << " " << array_bits[i] << endl;
        }
        
        return array_bits;
    }
};