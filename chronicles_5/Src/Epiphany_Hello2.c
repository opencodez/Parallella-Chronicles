#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "e_lib.h"

#define ptr_address 0x80803000
#define int_address 0x80803004

int *outbuf;
int *msg;

int main(void) {

	e_coreid_t coreid;

	// Query the CoreID from hardware.
	coreid = e_get_coreid();

	outbuf = (unsigned int *) ptr_address;
        msg = (unsigned int *) int_address;
	*outbuf = coreid; 
	*msg = 2;
	
 
	return EXIT_SUCCESS;

}