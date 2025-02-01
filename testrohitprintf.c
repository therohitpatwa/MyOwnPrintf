#include "rohitprintf.h"
int	main()
{
	int	count;


  rohit_printf("Hello this message is printed by rohit printf function\n");
  
	count = rohit_printf("Example of printing a String %s\n", "Rohit");
	printf("%d character\n", count);
	count = rohit_printf("Example of printing a Char %c\n", 'S');
	printf("%d character\n", count);
	count =rohit_printf("Example of printing Nbr %d\n", -42);
	printf("%d character\n", count);
	count = rohit_printf("Example of printing Hexadecimal %x\n", -1);
	printf("%d character\n", count);

	//REAL 
  printf("Hello this message is printed by rohit printf function\n");
  
	count = printf("Example of String %s\n", "Rohit");
	printf("%d character\n", count);
	count = printf("Example of Char %c\n", 'S');
	printf("%d character\n", count);
	count =printf("Example of Nbr %d\n", -42);
	printf("%d character\n", count);
	count =printf("Example of Hexadecimal %x\n", -1);
	printf("%d character\n", count);

  return 0;


}
