for N in 1 2 10 100 200 500 ; do
    echo -n "$N  "
    ./a.out $N 1
done > datos.txt
