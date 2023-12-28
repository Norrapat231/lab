#include <stdio.h>

int *GetSet( int * ) ;

int main() {
	int *data, num ;
	data = GetSet( &num ) ;
	return 0 ;
	}//end function
	
int *GetSet( int * ) {
	int *data, num ;
	printf( "Enter the number of Member: " ) ;
	scanf( "%d", &num ) ;
	
	for( int i = 1 ; i <= num ; i++ ) {
		printf( "Enter number of Member [%d] : ", i ) ;
		scanf( "%d", &data[ i ] ) ;
	}
	printf( "\n Total number of members = %d \n", num ) ;
	for( int z = 1 ; z <= num ; z++ ) {
		printf( "\n Member[%d]value : %d\n", z , data[ z ] ) ;
	}
}

