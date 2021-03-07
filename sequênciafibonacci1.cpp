#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
setlocale (LC_ALL, "");
	int a, b, c, i=1;
	a=0;
	b=1;
	
	printf("Sequência de Fibonacci:\n");
	printf("%d\n", b);
	
	while (i<=10)
	{
		c=a+b; 
		a=b;
		b=c;
		i++;
		
		printf("%d\n", c);
	}
	//lógica
	//1º VEZ: c= 0+1=1, a=1, b=1; 
	//2º vez: c=1+1=2, a=1, b=2; 
	//3º vez: c=1+2=3, a=2, b=3;
	//4ºvez: c=2+3=5, a=3, b=5;
	//5º vez: c= 3+5=8, a=5, b=8;
	//6º vez: c= 5+8=13, a=8, b=13;
	//7º vez: c=8+13=21, a=13, b=21
	//8º vez: c=13+21=34, a=21, b=34;
	//9º vez: c=21+34=55, a=34, b=55;
	//10º
	
	system("pause");
}
