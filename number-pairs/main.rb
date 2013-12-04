def do_stuff(a, b)
	a + b
end

t = gets.to_i
for i in 1..t do
	a, b = gets.strip.split.map {|i| i.to_i}
	puts do_stuff(a, b)
end