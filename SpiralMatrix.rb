#!usr/bin/ruby

# Spiral Matrix
# 
# Author:: Nam Vo Hoai (mailto:vhnam2504@gmail.com)
# License:: MIT License
class SpiralMatrix

    # Constructor
    # Params:
    # +rows+:: Quantity rows of the spiral matrix
    # +columns+:: Quantity columns of the spiral matrix
    def initialize(rows, columns)
        @rows = rows
        @columns = columns
        @matrix = Array.new(@rows) {
            Array.new(@columns)
        }
        
        process
    end
    
    # Assign values into cells
    def process()
	
        $number = 1
        $turns = 0
        $maxElements = @rows * @columns
        
        # Process will stop when $number is equal $maxElements
        while $turns < (@columns - 1 - $turns)
            $i = $turns
            while $i < @columns - $turns && $number <= $maxElements   # left to right
                @matrix[$turns][$i] = $number
                $i += 1
                $number += 1
            end
            
            $i = $turns + 1
            while $i < @rows - $turns && $number <= $maxElements      # top down
                @matrix[$i][@columns - 1 - $turns] = $number
                $number += 1
                $i += 1
            end
            
            $i = @columns - 2 - $turns
            while $i > $turns && $number <= $maxElements              # right to left
                @matrix[@rows - 1 - $turns][$i] = $number
                $number += 1
                $i -= 1
            end
            
            $i = @rows - 1 - $turns
            while $i > $turns && $number <= $maxElements              # bottom up
                @matrix[$i][$turns] = $number
                $number += 1
                $i -= 1
            end
            
            $turns += 1
        end
    end
    
    # Show spiral matrix
    def show()
        puts "#{@matrix}"
    end
end

# Main
matrix = SpiralMatrix.new(6, 6)
matrix.show