/* Program to swap upper nibble to lower nibble using macro*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SWAP_NIB(C)         ( ( C & 0x0F) << 4 | ( C & 0xF0) >> 4)
#define MAX_ALLOWED_ARGS            2
#define ARG_VALUE_INDEX             1
#define ZERO                        0
#define HEX_BASE                    16
int main(int argc,char *argv[])
{
    int Input = ZERO;          /* Holds the input variable for a argument */
    int temp =  ZERO;          /* Holds temporary variable                */
    if ( argc != MAX_ALLOWED_ARGS )
    {
        printf("Invalid Arguments\n");
        printf("eg: Macro.out (value)\n");
        printf("eg: Macro.out 0x12\n");
        exit(EXIT_FAILURE);
    }
    Input = (int)strtol(argv[ARG_VALUE_INDEX],NULL,HEX_BASE);
    printf("Given Value:0x%x\n",Input);
    temp = SWAP_NIB(Input);
    printf("Swap Value:0x%x\n",temp);
    return ZERO;
}
