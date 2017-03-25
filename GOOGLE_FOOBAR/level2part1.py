def convertToBase(n, b):
    if n == 0:
        return 0
    d = []
    while n:
        d.append(int(n % b))
        n /= b
    return ''.join(map(str,d[::-1]))

def subtract(x, y, b):
    z = int(x, b) - int(y, b)
    z = convertToBase(z, b)
    z = int(z)
    return z

def calculate(n, b, k, valList):
    
    tmp = list(n) 
    tmp.sort()
    y = ''.join(tmp) # get ascending string, y
    x = y[::-1] # get descending string, x
    #print(x)
    #print(y)
    z = subtract(x, y, b)
    z = str(z)
    z = z.zfill(k) # pad 0's

    if (n == z):
        return 1

    if z in valList:
        cycle = 0
        end = z;
        
        for i in reversed(valList):
            #print(i)
            cycle += 1
            if i == end:
                #print(i)
                return cycle

    valList.append(z)

    return calculate(z, b, k, valList)

def answer(n, b):
    valList = []
    k = len(n)
    return calculate(n, b, k, valList)
        
def main():
    #n = "1211"
    n = "210022"
    
    #b = 10
    b = 3
    
    ans = answer(n, b)
    print(ans)
    
main()
