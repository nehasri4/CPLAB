

#include <stdio.h

//Function to calculate parity bits and generate Hamming code

void generate HammingCodefint data[], int heode[])!

Assign data bits to proper positions in the code

//Positionc 1234567 (P1,P2D1,P4,D2,D3.D4)

hcode[2] data[0]; // DI

hoode[4] data[1];//D2

hoode[5] data[2]; // D3

hcode[6]-data[3]; // D4

1

//Calculate parity bits for even parity heode[0] hoode[2] hoode[4] hoode[6]; // Pl hcode[1] hoode[2] hoode[5] hoode[6]; // P2

hoode[3] hoode[4]hcode[5] hoode[6]; // P4

int main()(

int data[4], hcode[7];

printf("Enter 4 data bits (space-separated): ");

for(int i=0; i<4;j++)

scanf("%d", &data[i]); generate HaminingCode(data, hcode);

printf("Generated 7-bit Hamming code: ");

for(int i=0;i<7;i++)

printf("%d", heode[i]):

printf("\n")

//Optionally sinsulate an error

chat opt

printf("Simulate emor? (y/n): ");

scanf("%c", &opt);

iffopty opt) {

int pos;

printf("Enter bit position to flip (1-7): "

scanf("%d", &pos);

if(pos 1 && pus -7) (

hcode(pos-1]1:

printf("Codeword after error: ");

for(int i=0;i<7;i++)

printf("%d", hoode[i]);

printf("\n");

1

//Decode: error detection and correction

int p[3]:

parity checks: PI (positions 0,2,4,6), P2 (1,2,5,6), P4 (3,4,5,6)

p[0]=bcode[0] bcode[2] bcode[4] heode[6]:

p[1] heode[1] hoode[2] heode[5] heode(6):

p[2]heode[3] heode[4] heode[5] heode[6];

int error posp[2]*4-p[1]*2+p[0]*1; // binary to decimal

11/21

11/21

if(error pos 0)

printf("No error detected in received code. n");

1 else

1

printf("Error detected at bit position %d (counting from 1).\n", error_pos);

hoode[error pos-11 1;// Correct error

printf("Corrected code:"

for(int i=0; i<7; ++)

printf("%d", hoode[i]);

printf("a")

printff "Extracted data bits: %d %d %d %d\n", bcode[2], hoode[4], hcode[5], hcode[6]);

return 0;
