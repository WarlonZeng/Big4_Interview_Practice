int Solution::titleToNumber(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int num = 0;
    
    num = int(A[0]) - 64; // 1
    // formula: (1 * 26) + A - Z (1 - 26)
    for (int i = 1 ; i < A.size(); i++) {
        num = (num * 26) + int(A[i]) - 64;
    }
    
    return num;
}
