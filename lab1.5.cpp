#include <stdio.h>

void GetMatrix( int **value, int *row, int *col ) ;

int main() {
 	int *data, m , n ;
 	GetMatrix( &data, &m , &n ) ;
 	return 0 ;
}//end function main

void GetMatrix( int **value, int *row, int *col ) {
		
		printf("Enter the number of row : ") ;
		scanf("%d", row) ;
		printf("Enter the number of columns : ") ;
		scanf("%d", col) ;
		printf("\n") ;
	
		*value = new int[ *row * *col] ;
	for(int i = 1 ; i <= *row ; i++) {
		
		for(int n = 1 ; n <=*col ; n++){
			printf("Value of row and columns [%d][%d] = ", i, n);
			scanf("%d", &(*value)[ i * *col + n]);
		}//end loop for
		
	}//end loop for
		printf("\n") ;
	printf("Matrix values: \n");

    for (int r = 1; r <= *row; r++) {

        for (int c = 1; c <= *col; c++) {
            printf("%d ", (*value)[r * *col + c]);
        }

        printf("\n");

    }//end for loop 
	
}//end function getmatrix
