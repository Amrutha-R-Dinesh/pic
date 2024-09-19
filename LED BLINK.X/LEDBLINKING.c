#include <pic18.h>
void delay();

int main(){
    TRISB = 0X00;
    while(1){
        for(int k=0;k<8;k++){
        PORTB = 0X80 >> k;
        delay();
        }
      
        for(int j=0;j<8;j++){
        PORTB = 0X01 << j;
        delay();}
    }
}
void delay()
{
for(int i=0;i<100;i++)
    for(int j=0;j<100;j++);
}
