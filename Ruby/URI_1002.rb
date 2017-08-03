class StdClass
	def initialize
		r = gets.chomp.to_f
		a = 3.14159*r*r
		puts "A=#{'%.4f' % a}"
	end
end

x = StdClass.new
