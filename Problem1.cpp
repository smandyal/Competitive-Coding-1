
##S30 FAANMG Problem #15 {Easy}
## Note : Solved in python using binary search


a = [1,3,4,5,6,7] ## assuming a is given array, missing element is 2

STEL = a[0]
ENDEL = a[-1]
st = 0
end = len (a)
missing = 0
count = 0

while (st < end):
    mid = (st + end)//2 
    if (a [mid-1] + 1 != a[mid]) :
        print (a[mid-1]+1)
        break
    elif (a[mid]+1 != a[mid+1]):
        print (a[mid]+1)
        break
    elif (STEL + mid) != a[mid] :
        end = mid - 1
    else : 
        st =  mid+1
        
