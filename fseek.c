#include <stdio.h>
#include <string.h>
struct node
{
 int data;
 struct node *link;
};
typedef struct node ll;
int main () {
 FILE *fp;
 fp = fopen("data", "wb");
 ll n1;
 n1.data = 100 ;
 n1.link = 2222;
 fwrite(&n1, sizeof(n1), 1, fp);
 
 fp = fopen("data", "wb");
 ll n2;
 n2.data = 200 ;
 n2.link = 3333;
 fwrite(&n2, sizeof(n2), 1, fp); 
 
 fclose(fp);
 return(0);
}