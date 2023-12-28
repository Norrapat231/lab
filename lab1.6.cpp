#include <stdio.h>

int *GetMatrix( int *row, int *col ) ;

int main() {
 int *data, m, n ;
 data = GetMatrix( &m, &n ) ;
 return 0 ;
}//end function

int *GetMatrix( int *row, int *col ) {
	
	int *rowTcol ;
	
	printf("Enter the number of row : ") ;
	scanf("%d", row) ;
	printf("Enter the number of columns : : ") ;
	scanf("%d", col) ;
	printf("\n") ;
	
	rowTcol = new int[ *row * *col ] ;
	for( int i = 1 ; i <= *row ; i++ ) {
		for( int n = 1 ; n <= *col ; n++ ) {
			printf( "Value of row and column [%d][%d] = ", i, n ) ;
			scanf( "%d", &rowTcol[ i * *col + n ] ) ;
		}
	}
	printf("\n") ;
	printf("\nMatrix values: \n" ) ;

    for ( int r = 1; r <= *row; r++ ) {

        for( int c = 1; c <= *col; c++ ) {
            printf( "%d ", (rowTcol)[r * *col + c] ) ;
        }//end for loop

        printf( "\n" ) ;

    }//end for loop 
	
	return rowTcol ;
	
}
