'''
         4 4 4 4 4 4 4  
         4 3 3 3 3 3 4   
         4 3 2 2 2 3 4   
         4 3 2 1 2 3 4   
         4 3 2 2 2 3 4   
         4 3 3 3 3 3 4   
         4 4 4 4 4 4 4   

'''

def fun(n):
    for i in range(2*n-1):
        for j in range(2*n-1):
            left = j
            right = 2*n-2-j
            top = i
            bottom = 2*n-2-i
            minimumDist = min(left, right, top, bottom)
            value = n- minimumDist
            print(value, end="")
            
        print()    

fun(5)