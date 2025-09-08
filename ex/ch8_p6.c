/* ch8_p6.c */
/* include_directives */
#include <stdio.h>
#include <ctype.h>

int
main(void)
{
	/* initialise_objects */
	char str[30];
	int i = 0;
	char ch;
	int len = sizeof(str)/sizeof(str[0]);

	/* scan */
	printf("Enter message: ");
	while ((ch = getchar()) != '\n' ) {
		str[i] = ch;
		i++;
	}

	/* process */
	for (int j = 0; j < len; j++) {
		str[j] = toupper(str[j]);
		switch (str[j]) {
			case 'A':
				str[j] = '4';
				break;
			case 'B':
				str[j] = '8';
				break;
			case 'E':
				str[j] = '3';
				break;
			case 'I':
				str[j] = '1';
				break;
			case 'O':
				str[j] = '0';
				break;
			case 'S':
				str[j] = '5';
				break;
		}
	}

	/* print */
	printf("%s!!!!!!!!!!\n",str);

	return 0;
}

