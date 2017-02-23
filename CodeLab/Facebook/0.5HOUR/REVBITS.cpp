unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    stack<int> bits; // stack is common for reversing things because top gets pushed to bottom and taking from stack is reverse
    
    for (int i = 0; i < 32; i++) {
        bits.push(A % 2); // push in remainder of 2
        A = A / 2; // progress breakdown to bits
    }
    
    unsigned num = 0; // unsigned !!! for ints, last bit determines negative
    
    for (int i = 0; i < 32; i++) { // can also use while(!bits.empty()) but we know 32 fixed unsigned int
        if (bits.top() == 1) {
            num = num + pow(2, i); // trying to find another way not to use pow - inelegant imo
        }
        bits.pop(); // remake binary to decimal
    }
    
    return num;
    
}
