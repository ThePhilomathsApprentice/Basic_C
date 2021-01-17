# Libraries

This directory gives a basic example using the library file created with 

``ar -rcs libSumDiff.a sum.o difference.o``


The *.o files were created using 

``gcc -c sum.c ``

and 

``gcc -c difference.c ``




## To build

``cd ~/Libraries``

``gcc main.c -L/<Absolute Path to the .a file> -lSumDiff -o a``

``./a``
