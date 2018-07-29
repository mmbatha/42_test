rm result
for i in 0 1 2 3 4; do
    ./resources-2/filler_vm -f resources-2/maps/map0$3 -p1 ./$1.filler -p2 resources-2/players/$2.filler;
    cat -e filler.trace >> result;
done
cat result | grep won
