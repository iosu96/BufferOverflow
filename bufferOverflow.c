/****************************************************
* Author: Daniel Yopp
* Date 8/27/20
* ProgramName: StrOverflow
* Description: A simple strcpy program that has a
               buffer overflow exploit to launch a shell
****************************************************/

// esp = stack pointer/top of stack
// eip = instruction pointer/ next instruction

// Procedure for function call
// call instruction
// Subroutine paramater two pushed onto stack/ subtract four from stack ptr
// Subroutine parameter one pushed onto stack subrtact four from stack ptr
// eip increments
// push eip onto stack/ sub 4 from stack pointer
// add call value to eip to get new address(local addressing)
// Subroutine now in control
// Subroutine creates local variables

// Pop return addr into eip to return to initial function 


//-High Mem Addr-
//Main Return Addr - instruction location after call instruction
//Parameters
//strcpy return addr
//base pointer
//allocated buffer space    - writing more than 500 chars overwrites base pointer and strcpy
//Low Mem addresss


#include <stdio.h>
#include <string.h>

int main (int argc, char** argv)
{
    char buffer[256];
    strcpy(buffer, argv[1]);
    // printf("Your input was: %s\n", buffer);
    return 0;
}
