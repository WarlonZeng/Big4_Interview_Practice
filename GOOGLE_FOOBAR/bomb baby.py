def findGenerations(M, F):
    
    cycles = 0

    while (M > 0 and F > 0): # iterations are generally cleaner and faster than recursion
        print("M :" + str(M))
        print("F :" + str(F))
        print("----------------------------------")

        if M > F:
            bulk = int(M / F)
            M = M - (F * bulk) # bulk it down
            #M = M - F
            cycles += bulk
            continue
        
        if F > M:
            bulk = int(F / M)
            F = F - (M * int(F / M)) # bulk it down
            #F = F - M
            cycles += bulk
            continue
            
        elif (M == F):
            if (M == 1) and (F == 1):
                return str(cycles)
            else:
                return "impossible"

    if M == 0:
        if F != 1: # bulk breakdown results in 1
            return "impossible"
    if F == 0:
        if M != 1: # bulk breakdown results in 1
            return "impossible"

    return str(cycles - 1) # after all checks, M:0 F:1 or F:0 M:1

def answer(M, F): 

    M = int(M) # clean
    F = int(F) # clean

    cycles = findGenerations(M, F)
    return cycles
        
def main():
    M = "2"
    F = "4"
    
    ans = answer(M, F)
    print(ans)
    
main()
