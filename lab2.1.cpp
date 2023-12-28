#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
	char text[ 50 ] = "I Love You" ;
	char out[ 50 ];
	reverse( text, out ) ;
	printf( "Normal : %s \n\n", text ) ;
	printf( "Reverse : %s", out ) ;
	return 0 ;
}//end function

void reverse( char str1[], char str2[] ) {
	int n, z = 0 ;
	int length = strlen( str1 ) ;
	
	for ( n = length - 1 ; n >= 0 ; n-- ) {
		str2[z] = str1[n] ;
		z++ ;
	}

}
