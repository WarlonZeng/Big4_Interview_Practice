vector<int> Solution::wave(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(), A.end());
    
    int temp;
    bool odd = false;
    if (A.size() % 2 != 0) {
        temp = A[A.size() - 1];
        odd = true;
    }
    
    for (int i = 0; i < A.size(); i += 2) {
        swap(A[i], A[i + 1]);
    }
    
    if (odd) {
        A[A.size() - 1] = temp;
    }
    
    return A;
}
