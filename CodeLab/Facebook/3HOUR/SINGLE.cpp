int Solution::singleNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    // well known bitmask problem.
    
    int single = 0;
    for (int i = 0; i < A.size(); i++) {
        single = single ^ A[i]; // mask binary into decimal. XOR has properties that XOR'ing itself will cancel its binary mask with no reprecussions
    }
    return single;
    
}