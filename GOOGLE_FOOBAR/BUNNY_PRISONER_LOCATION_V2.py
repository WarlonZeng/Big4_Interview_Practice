def xID(counter, ID, x):
    while counter != x:
        ID = counter + 1 + ID
        counter += 1
    return ID
    
def yID(counter, ID, x, y):
    while counter != y:
        ID = counter + (x - 1) + ID
        counter+= 1
    return ID

def answer(x, y): # algorithm faster than whole iterations .. searches corner-like L

    counter = 1
    ID = 1
    ID = xID(counter, ID, x)

    counter = 1
    ID = yID(counter, ID, x, y)
    
    return str(ID)
        
def main():
    x = 3
    y = 2
    
    ans = answer(x, y)
    print(ans)
    
main()
