#include <stdio.h>
#include <errno.h>
#include <string.h>


int main()
{
  FILE *file ;
  int i ;
    
  file = fopen( "no.file" , "r" ) ;

  if( file != NULL ) { printf( "File opened\n") ; } 
  else { perror( "Error" ) ; }

  for( i = 0 ; i < 20; i++ )
  {
    printf( "Error %d : %s\n" , i , strerror(i) ) ;
  }

  return 0 ;
}
