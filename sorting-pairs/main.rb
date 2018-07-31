t=gets.to_i
for i in 1..t do
  ar = Array.new
  n=gets.to_i
  n.times { ar << gets.strip.split.map.with_index {|i,idx| idx == 0 ? i.to_i : i } }
end