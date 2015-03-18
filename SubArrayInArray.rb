#!/usr/bin/ruby

# Author:: Nam Vo Hoai (mailto:vhnam2504@gmail.com)
# License:: MIT License

# Declare arrays
arrParent = [1, 4, 6, 3, 7, 8, 5, 9, 2, 0]
arrChild = [3, 7, 8]

# Define variables
i = 0
lenParent = arrParent.length
lenChild = arrChild.length
result = false

# process
while i < lenParent - lenChild

    j = 0
    count = 0

    while j < lenChild

        if arrChild[j] == arrParent[i + j]
            count += 1
        end

        j += 1
    end

    if count == lenChild
        result = true
        break
    end

    i += 1
end

# Checking
if result
    puts "arrChild is the sub array of arrParent"
else
    puts "arrChild is not the sub array of arrParent"
end