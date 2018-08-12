# Test 1
push int32(42)
push int32(33)

add ;poney

push float(44.55)

mul

push double(42.42) ;commentaire de ouf
push int32(42)

dump

pop

assert double(42.42)

exit

# Test 2
push int32(32)
push int32(0)

div

exit

# Test 3
push int16(999999999999999999999999999)

exit

# Test 4
push int16(32 ;)
pu int(32))

exit

# Test 5
pop

exit

# Test 6
push int32(42)

assert int32(0)

exit

# Test 7
push int32(42)

add

exit

# Test 8
push int8(33) ;!
push int8(112) ;p
push int8(111) ;o
push int8(108) ;l
push int8(112) ;p

print

pop 

print

pop

print

pop 

print

pop

print

pop

exit

# Custom test 1
push int8(1)
push int8(2)

mul

push int8(3)

mul

push int8(4)

sub

exit

# Custom test 2
push int8(10)
push int8(20)

mul

push int8(30)

mul

push int8(40)

sub

exit

# Custom test 3
push int8(100)
push int8(200)

mul

push int8(300)

mul

push int8(400)

sub

exit

# Custom test 4
push int8(1000)
push int8(2000)

mul

push int8(3000)

mul

push int8(4000)

sub

exit

# Custom test 5
push int32(10000)
push int32(20000)

mul

push int32(30000)

mul

push int16(40000)

sub

exit

# Custom test 6
push int32(2147483648)
push int32(20)

add

exit
