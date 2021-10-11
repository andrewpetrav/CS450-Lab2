#include "types.h"
#include "stat.h"
#include "user.h"
#include "fctnl.h"

int main(int argc, char *argv[]){
	int n=20; //how many trap calls there are
	itn counts[n];

	//Initial counts
	countTraps(counts,n);
	printf("INITITIAL TRAP COUNTS");
	for(int i=1; i<n; i++){
		printf(1,"Trap #%d: %d\n", i, counts[i]);
	}
}
