all : test_diamond_incremental test_diamond_iterative

clean :
	rm -f test_diamond_incremental test_diamond_iterative

test_diamond_incremental : test_diamond_incremental.c diamond.c diamond.h
	gcc -o $@ -Wall -Werror -DUNITY_OUTPUT_COLOR test_diamond_incremental.c diamond.c unity_src/unity.c

test_diamond_iterative : test_diamond_iterative.c diamond.c diamond.h
	gcc -o $@ -Wall -Werror -DUNITY_OUTPUT_COLOR test_diamond_iterative.c diamond.c unity_src/unity.c
