int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    // DISCLAIMER: THIS IS THE ONLY SOLUTION THAT IS NOT MY SOLUTION (although I can explain it, it is somoething that I would never have thought of on my own right). 
    // This ingenius loop determines size, slow and fast indexes using the power of the continue keyword. 
    // Scratched my head over nested-double while loops, segfaulting, and the sheer simplicity of this code.
    
    int count = 0;
    
    for (int i = 0; i < A.size(); i++) { // till the end of the array
        if (A[i] == B)  { // your "i" is the "j" that indexes non-B elements.
            continue;
        }
        A[count] = A[i]; // when a non-B is hit, A[i] is copied into a strict increment index determined by count (regardless if A[count] was non-B)
        count++; // 0, 1, 2, 3, 4.. the whole array/vector is pretty much replaced but with O(1) < x < O(N) space. 
        
    }
    
    return count;
}