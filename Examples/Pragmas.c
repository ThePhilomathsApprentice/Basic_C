// #pragma GCC warning "This is a Warning_Message" 

// #pragma GCC error "This is a Error_Message"

// #pragma GCC poison printf

#pragma GCC dependency "EnvironmentLists.c"
#pragma GCC dependency "EnvironmentLists.c" rerun fixincludes

#include<stdio.h>


void main(){

    printf("This is a printf Statement\n");

}