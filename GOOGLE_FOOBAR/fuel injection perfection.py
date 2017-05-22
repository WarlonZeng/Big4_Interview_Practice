def findSteps(n):
    # bitmasks
    # %2 = 0/1 = 0
    # %4 = 0/1/2/3 = 00/01/10/11 
    # greedy divide at ?0; even
    
    steps = 0
	
    while n > 1:

        if n % 2 == 1: # bitmask 01 or 11
            if n != 3 and n % 4 == 3: # bitmask 11
                n += 1
                steps += 1
                #print("offset 11 to 00")
                #print(n)
                continue
            if n == 3 or n % 4 == 1: # bitmask 01
                n -= 1
                steps += 1
                #print("offset 01 to 00")
                #print(n)
                continue

        n = int(n / 2)
        steps += 1
        #print(n)
        
    return steps

def answer(n):
    
    n = int(n)
    steps = findSteps(n)

    return steps

def main(): 
    n = 11
    
    ans = answer(n)
    print(ans)
    
main()
