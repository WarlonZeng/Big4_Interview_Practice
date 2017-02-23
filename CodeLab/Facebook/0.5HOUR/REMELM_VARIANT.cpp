int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int i = 0;
    int j = A.size() - 1;
    
    while (i < j) { 

        while (A[i] != B) {
            i++;
        }
        while (A[j] == B) {
            j--;
        }
        A[i] = A[j];
        i++;
        j--;
    }
    
    return j + 1;
}
