#include<avr/io.h>
#include<util/delay.h>
void main()
{
int k,a,x,y;
DDRB=0b11111111;
while(1){
k=128;
a=1;
for(int i=0;i<4;i++){
x=k;
k=k/2;
y=a;
a=a<<1;
PORTB=x+y;
_delay_ms(100);
}
}
}
