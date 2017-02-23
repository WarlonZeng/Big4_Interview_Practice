int Solution::lengthOfLastWord(const string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i = 0;
    int count = 0;
    bool hitWhiteSpace = false;
    
    while (A[i] != NULL) {
        if (A[i] == ' ') { // "Wordl   "
            hitWhiteSpace = true;
        }
        i++;
        if (hitWhiteSpace == false) {
            count++;
        }
        if (hitWhiteSpace && A[i] != ' ' && A[i] != NULL) {
            hitWhiteSpace = false;
            count = 0;
        }
    }
    
    return count;
}
