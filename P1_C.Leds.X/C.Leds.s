; @file   : C.leds
; @date   : 10/01/23
; @author : MENDOZA SILVA ARLIS ARON
    
processor 18F57Q84
#include "Bt_config.inc"// config statements should precede project file includes.
#include <xc.inc>
#include "Retardos.inc"
PSECT resetvect,class=CODE,reloc=2
resetvect:
    GOTO main
PSECT CODE  
main:
    CALL config_osc,1   ; me lleva a la subrutina config_osc
    CALL config_port,1  ; me lleva a la subrutina config_port
    
corrimiento:
    BTFSC PORTA,3,0     ; salta a la siguiente instrucción si es 0
    GOTO corrimiento    ; me lleva a la etiqueta corrimiento
LED_1:
    BCF LATE,1,1        ; desactiva el led de corrimiento par 
    BSF LATE,0,1        ; me activa el led de corrimiento impar 
    BCF LATC,7,1        ;
    BSF LATC,0,1        ;
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED_2
estop_1:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop_1        ; me lleva a la etiqueta stop_1
LED_2: 
    BCF LATC,0,1
    BSF LATC,1,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED_3
estop_2:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop_2
LED_3:
    BCF LATC,1,1
    BSF LATC,2,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED_4
estop_3:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop_3
LED_4:
    BCF LATC,2,1
    BSF LATC,3,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED_5
estop_4:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop_4   
LED_5:
    BCF LATC,3,1
    BSF LATC,4,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED_6
estop_5: 
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop_5
LED_6:
    BCF LATC,4,1
    BSF LATC,5,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED_7
estop_6:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop_6
LED_7:
    BCF LATC,5,1
    BSF LATC,6,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED_8
estop_7:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop_7
LED_8:
    BCF LATC,6,1
    BSF LATC,7,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED1
estop_8:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop_8    
LED1:
    BCF LATE,0,1        ;desactiva el led de corrimiento impar
    BSF LATE,1,1        ;activa el led de corrimiento par
    BCF LATC,7,1
    BSF LATC,0,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED2
estop1:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop1
LED2: 
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BCF LATC,0,1
    BSF LATC,1,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED3
estop2:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop2
LED3:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BCF LATC,1,1
    BSF LATC,2,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED4
estop3:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop3
LED4:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BCF LATC,2,1
    BSF LATC,3,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED5
estop4:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop4   
LED5:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BCF LATC,3,1
    BSF LATC,4,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED6
estop5:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop5
LED6:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BCF LATC,4,1
    BSF LATC,5,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    GOTO LED7
estop6:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop6
LED7:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BCF LATC,5,1
    BSF LATC,6,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED8
estop7:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop7
LED8:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BCF LATC,6,1
    BSF LATC,7,1
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO LED_1
estop8:
    CALL Delay_250ms    ; me lleva a la subrutina Delay_250ms
    BTFSC PORTA,3,0
    GOTO estop8
    GOTO LED_1
config_osc:
    BANKSEL OSCCON1
    MOVLW 0X60h        ;SELECIONAMOS EL BLOQUE DEL OSCILADOR INTERNO CON UN DIV:1
    MOVWF OSCCON1,1
    BANKSEL OSCFRQ
    MOVLW 0x02h        ;SELECIONAMOS UNA FRECUENCIA DE 4MHZ
    MOVWF OSCFRQ,1
    RETURN
config_port:
    BANKSEL PORTE
    SETF PORTE,1
    CLRF LATE,1
    CLRF ANSELE,1
    CLRF TRISE,1
    
    BANKSEL PORTC
    SETF PORTC,1
    CLRF LATC,1
    CLRF ANSELC,1       ; ANSELF <7:0> - PORTF DIGITAL 
    CLRF TRISC,1        ; RF3-> COMO SALIDA 
    
;configurando boton 
    
    BANKSEL PORTA       ; LLAMO AL BANCO "PORTA"
    CLRF PORTA,1        ; LIMPIO EL BANCO "PORTA" 
    CLRF ANSELA,1       ; PORTA DIGITAL 
    BSF TRISA,3,1       ; RA3 COMO ENTRADA
    BSF WPUA,3,1        ; ACTIVAMOS LA RESISTENCIA PULL-UP DEL PIN RA3
    RETURN

END resetvect


