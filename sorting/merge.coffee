mergesort = (input) ->
    n = input.length
    if n == 1
       return input
    pivot = Math.floor n/2
    a = mergesort input[0...pivot]      # coffee script does not include the last element in a slice
    b = mergesort input[pivot...n]
    merge(a, b)

merge = (a, b) ->
   i = j = k = 0
   c = []
   max = a.length + b.length
   while i < a.length && j < b.length
      if a[i] < b[j]
        c[k++] = a[i++]
      else 
        c[k++] = b[j++]
   while i < a.length
      c[k++] = a[i++]
   while j < b.length
      c[k++] = b[j++]
   c

console.log mergesort [5,4,2,2,0]
