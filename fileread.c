#include <stdio.h>

main(int argc, char** argv) {
if(argc<2)
{
	printf("at least one argument requierd");
	printf("%s filename",argv[0]);
	return;
}
   FILE *fp;
	char buff[1255];
   fp = fopen("/xyz.txt", "w+");
   fprintf(fp, " is developer f...\n");
   fputs("bring a coffee...\n", fp);
   fclose(fp);
}