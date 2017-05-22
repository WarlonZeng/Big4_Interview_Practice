from math import *

def countPart(remainder, prev, memo):
    
    if (remainder == 0 or prev == 1): # last block
        return 0;
    
    if (memo[remainder][prev] != -1): # not empty space
        return memo[remainder][prev];
    
    count = 0;
    
    if (prev > remainder): 
        count += 1;

    for i in range(int(sqrt(remainder * 2)), remainder):
        if (i >= prev):
            break; # break and allocate
        count += countPart(remainder - i, i, memo)
        
    memo[remainder][prev] = count;
    return count

def answer(n):
    total = 0;
    memo = []
    
    for i in range(0, n): # initialize a square
        memo.append([])
        for j in range(0, n):
            memo[i].append(-1)
    
    for i in range(int(sqrt(n * 2)), n): # bulk count
        total += countPart(n - i, i, memo);
        
    return total
        
def main():
    n = 20 # ans = 9

    ans = answer(n)
    print(ans)

main()
