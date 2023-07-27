#include "ft_printf.h"

int main()
{
	int b = 17;
	char *a = "selam";
	// ft_printf(" %s\n ", a[2]); // err
	// ft_printf(" %s\n ", *a); // err
	// ft_printf(" %s\n ", &a); // err
	ft_printf(" %c\n ", a[2]); // l
	ft_printf(" %c\n ", a[6]);
	ft_printf(" %p\n ", a); // a nın ilk index inin adresi
	ft_printf(" %p\n ", &a); // diziyi işaret eden pointer ın adresi
	ft_printf(" %p\n ", &b); // b değişkeninin adresi
	ft_printf(" %d\n ", b); // b değişkeninin değeri
	ft_printf(" %x\n ", b); // b değişkenin hex karşılığı
	ft_printf(" %x\n ", -1);
	ft_printf(" %%%d\n ", b); // %b
	ft_printf(" %%s\n ", a); // %s
	ft_printf(" %%%%%\n " "selam");
	ft_printf("%a\n"); // dikkat
	ft_printf(" %c\n ", '1'); //1
	ft_printf(" %s\n ", "1"); //1
	ft_printf(" %s\n ", "c"); //c
	ft_printf(" %p\n ", "heloo");
	ft_printf("\n");
	ft_printf("");
	ft_printf(" %c%c%c\n ", 'a', 'b', 'c');
	ft_printf(" %c%c\n ", 'a');
	ft_printf(" %X\n ", "c");
	ft_printf(" %X\n ", b);
	ft_printf("%u\n", 2147483647);
	ft_printf("%i\n", 2147483648);
	ft_printf("%u\n", 2147483649);
	ft_printf("%i\n", 2147483649);
	ft_printf("%d\n", 2147483648);
	ft_printf("%d\n", 2147483649);
	ft_printf("%d\n", 2147483650);
	ft_printf("%d\n", -2147483649);
	ft_printf("%u\n", -2147483647);
	ft_printf("%u\n", -2147483648);
	ft_printf("(%i)\n", -2147483649);
	ft_printf("%d\n",  0);
	ft_printf("%c\n", '0');
	ft_printf("%s\n", "0"); //dikkat
	ft_printf("%x\n", 0);
	ft_printf("", "");
    ft_printf("%s%", "tolga");
	 printf("%s%", "tolga");
	printf("%u\n", -2147483648);
}