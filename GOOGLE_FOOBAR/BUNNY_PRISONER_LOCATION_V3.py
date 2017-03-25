# for some reason google crashed on runtime error line 2
# but 3 different online compilers running 2.7.x, and myself 3.5.2, marked it correct
# goes to show recursion is bad for some inputs

def X(counter, total, x): # find rule-based X
    if counter == x:
        return total
    return X(counter + 1, counter + 1 + total, x)

def Y(counter, total, x, y): # find rule-based Y
    if counter == y:
        return total
    return Y(counter + 1, total + counter + (x - 1), x, y)

def answer(x, y): # algorithm faster than whole iterations .. searches corner-like L

    resX = X(1, 1, x)
    resY = Y(1, resX, x, y)
    return str(resY)
        
def main():
    x = 5
    y = 10
    
    ans = answer(x, y)
    print(ans)
    
main()
