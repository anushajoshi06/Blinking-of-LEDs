#include<avr/io.h>
#include<util/delay.h>
void main()
{
DDRB=0b11111111;
while(1){
int b=0b00000000;
for(int j=7;j>=0;j--){
int a=0b10000000;
for(int i=0;i<=j;i++){
PORTB=a|b;
_delay_ms(500);
a=a>>1;
}
b=PORTB;

}
}
}
