int Solution::diffPossible(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    for (int i = 0; i < A.size(); i++) { // compute up to half size vector because the rest will be redundant
        for (int j = 1; i + j < A.size(); j++) { // compute to size 
            if (abs(A[i] - A[i + j]) == B) {
                return 1;
            }
        }
    }
    return 0;
    
}
