#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "harness.h"


int main(int argc, char ** argv) {
    init_petmem();

//    void * addr = pet_malloc((size_t)4096);

    char * buf = NULL;

    char * buf_mall = NULL; 

    buf_mall = malloc(8192);
    buf_mall[50] = 'y';


    buf = pet_malloc(8192);

	printf("buf addrs: %p\n", buf);

    //printf("Allocated 1 page at %p\n", buf);

    //pet_dump();


    buf[50] = 'H';
    buf[51] = 'e';
 /*   buf[52] = 'l';
    buf[53] = 'l';
    buf[54] = 'o';
    buf[55] = ' ';
    buf[56] = 'W';
    buf[57] = 'o';
    buf[58] = 'r';
    buf[59] = 'l';
    buf[60] = 'd';
    buf[61] = '!';
    buf[62] = 0;


    printf("%s\n", (char *)(buf + 50));

    pet_free(buf);

    printf("%s\n", (char *)(buf + 50));
*/   

    return 0;

}
