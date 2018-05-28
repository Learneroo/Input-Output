def do_stuff(ar):
  #print array if you want: 
  print " ".join(map(str,ar))

t = input()
for x in range(0, t):
  m = input()
  ar = [int(i) for i in raw_input().strip().split()]
  do_stuff(ar)
