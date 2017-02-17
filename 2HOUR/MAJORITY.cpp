int Solution::majorityElement(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    // watch fb go after me for using map ._. they really love O(1) space, DP, recursion, and XOR

    map<int, int> count;
    
    for (int i = 0; i < A.size(); i++) {
        count[A[i]]++;
    }
    
    int max = 0;
    int val;
    for (const auto &key : count) {
        if (max < key.second) {
            max = key.second;
            val = key.first;
        }
    }
    
    return val;
}
