/*
 * File:   mainprueba.c
 * Author: luis escudero
 *
 * Created on 4 de febrero de 2022, 09:36 PM
 */

// PIC16F1938 Configuration Bit Settings

// 'C' source line config statements



#include <xc.h>
#include "configprueba.h" 
#define _XTAL_FREQ        (16000000)
#include <stdio.h>

int num1 = 0;
int num2 = 1;
int resultado = 0;
int cont =0;


void main(void) {
    OSCCONbits.IRCF = 0b1111;
    ANSELA =  0x00;
    TRISA  =  0x00;
    ANSELB =  0x00;
    TRISB  =  0x00;
    
    PORTB = 0X00;
    PORTA = 0X00;
    
    
    while(cont<14){
       
        num1 = num2;
        num2 = resultado;
        resultado = num1 + num2;
                
        PORTA = resultado;
       __delay_ms(3000);
       cont = cont+1;  
    }

return ; 
  
}
