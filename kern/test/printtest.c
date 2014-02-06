#include <types.h>
#include <lib.h>
 

int printtest(int argc, char **argv){
	    	int ncount = argc;   
  			while(ncount--){
			  	kprintf("%s\n", *argv++);
		   }
			return 0;
}



