#include <stdio.h>

int GetSet(int *arr) ;



int main() {
 	int data[ 10 ] ; 
    int num = GetSet( data ) ;
 
 	printf("Total number of members = %d ", num ) ;
    for ( int n = 1; n <=num; n++ ) {
        printf( "\n Member informationr [%d] : %d\n", n, data[n] ) ;
    }

 	return 0 ;
}//end function

int GetSet(int *arr) {
	int num ;
	printf( "Enter the number of Member : " ) ;
    scanf( "%d", &num ) ;
    
    for( int n = 1 ; n <= num ; n++ ) {
    	printf( "Enter number of Member [%d] : ", n) ;
    	scanf( "%d", &arr[n] ) ;
	}
	return num ;
}


