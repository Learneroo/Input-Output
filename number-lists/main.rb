def do_stuff(ar)
  #put code here
end

t = gets.to_i
for i in 1..t do
  n=gets
  ar = gets.strip.split.map {|i| i.to_i}
  do_stuff(ar)
end
