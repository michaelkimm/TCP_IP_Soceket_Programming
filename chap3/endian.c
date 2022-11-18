
#include <stdio.h>

void main(void) {
	unsigned int a = 0x00ABCDEF;
	printf("a : %x\n", a);

	unsigned char* p = &a;
	printf("*p : %x\n", *p);

	if (*p == 0xef)
		printf("My system uses little-endian!\n");
	else
		printf("My system uses big-endian!\n");
    printf("\n\n");

    unsigned short host_port = 0x1234;
    unsigned short net_port;
    unsigned long host_addr = 0x12345678;
    unsigned long net_addr;

    net_port = htons(host_port);
    net_addr = htonl(host_addr);

    printf("Host ordered port / printed as printf: %#x \n", host_port);
    printf("Host ordered port / stored in memmory: %#x \n", *((unsigned char*)&host_port));
    printf("Network ordered port / printed as printf: %#x \n", net_port);
    printf("Network ordered port / stored in memmory: %#x \n", *((unsigned char*)&net_port));
    printf("Host ordered address: %#lx \n", host_addr);
    printf("Network ordered address: %#lx \n", net_addr);
}