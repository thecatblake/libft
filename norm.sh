for i in *.c; do
    python -m c_formatter_42 $i
done

python -m c_formatter_42 libft.h

sed -i '$a\' *.c