#include<stdio.h>
void main(){
				// Range
	char c;			//     -128 - 127
	unsigned char d;	//	0 - 255

	int i;			//	-... to +..			4 bytes for 32-bit processor
	unsigned int j;		//	0 to ....

	short int k;		//      -32768 - 32767				2 bytes
	unsigned short int l;	//	0 - 65536

	long int m;		//						4 bytes
	unsigned long int n;	//	0 - ...						

	float x;		//						4 bytes
	double y;		//						8 bytes
	long double z;		//						10 bytes
	

	scanf("%c %c",&c,&d);
	printf("%c %c",c,d);

	scanf("%d %u",&i,&j);
	printf("%d %u",i,j);

	scanf("%hd %hu",&k,&l);
	printf("%hd %hu",k,l);
	
	scanf("%ld %lu",&m,&n);
	printf("%ld %lu",m,n);

}
