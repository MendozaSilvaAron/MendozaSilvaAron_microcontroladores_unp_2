; @file   : RETARDOS.INC
; @date   : 10/01/23
; @author : MENDOZA SILVA ARLIS ARON
    
;             RETARDOS
    
PSECT udata_acs
Contador1: DS 1		    ;reserva 1 byte
Contador2: DS 1    

PSECT code
 
;; 10us    6+4k
;Delay_10us:                  ;2 Tcy
;    MOVLW   1                ;1 Tcy
;    MOVWF   Contador1,1,0    ;1 Tcy
;Ext_Loop:
;    NOP                      ;k*Tcy
;    DECFSZ Contador1,1,0     ;(k-1)+3Tcy
;    GOTO   Ext_Loop          ;(k-1)*2Tcy
;    RETURN                   ;2 Tcy
;
;    
;
;; 25us    3k+7
;Delay_25us:                  ;2 Tcy
;    MOVLW  6                 ;1 Tcy
;    MOVWF  Contador,1,0      ;1 Tcy
;    NOP                      ;1 Tcy
;Ext_Loop:             
;    DECFSZ Contador1,1,0     ;(k-1)+3Tcy
;    GOTO   Ext_Loop          ;(k-1)*2Tcy
;    RETURN                   ;2Tcy
;
;    
;   
;; 50us    6k+4
;Delay_50us:                  ;2 Tcy
;    MOVLW   11               ;1 Tcy
;    MOVWF   Contador1,1,0    ;1 Tcy
;Ext_Loop:
;    NOP                      ;k*Tcy
;    DECFSZ Contador1,1,0     ;(k-1)+3Tcy
;    GOTO   Ext_Loop          ;(k-1)*2Tcy
;    RETURN                   ;2 Tcy
;
;    
;   
;; 100us   3k+7
;Delay_100us:                 ;2 Tcy               
;    MOVLW   31               ;1 Tcy
;    MOVWF  Contador,1,0      ;1 Tcy
;    NOP                      ;1 Tcy
;Ext_Loop:             
;    DECFSZ Contador1,1,0     ;(k-1)+3Tcy
;    GOTO   Ext_Loop          ;(k-1)*2Tcy
;    RETURN                   ;2Tcy
;
;    
;   
;; 200us    4K+8
;Delay_200us:                 ;2 Tcy
;    MOVLW    48              ;1 Tcy
;    MOVWF  Contador,1,0      ;1 Tcy
;    NOP                      ;1 Tcy
;    NOP                      ;1 Tcy
;Ext_Loop:
;    NOP                      ;K*Tcy
;    DECFSZ Contador1,1,0     ;(k-1)+3Tcy
;    GOTO   Ext_Loop          ;(k-1)*2Tcy
;    RETURN                   ;2Tcy
;
;    
;    
;; 250us    3k+7
;Delay_250us:                 ;2 Tcy               
;    MOVLW  81                ;1 Tcy
;    MOVWF  Contador,1,0      ;1 Tcy
;    NOP                      ;1 Tcy
;Ext_Loop:             
;    DECFSZ Contador1,1,0     ;(k-1)+3Tcy
;    GOTO   Ext_Loop          ;(k-1)*2Tcy
;    RETURN                   ;2Tcy
;
;    
;    
;; 500us      4k+8
;Delay_500us:                 ;2 Tcy
;    MOVLW  123               ;1 Tcy
;    MOVWF  Contador,1,0      ;1 Tcy
;    NOP                      ;1 Tcy
;    NOP                      ;1 Tcy
;Ext_Loop:
;    NOP                      ;K*Tcy
;    DECFSZ Contador1,1,0     ;(k-1)+3Tcy
;    GOTO   Ext_Loop          ;(k-1)*2Tcy
;    RETURN                   ;2Tcy
;
;    
;    
;;1ms 
;Delay_1ms:                   ; 2 Tcy
;    MOVLW   1                ; 1 Tcy --k2
;    MOVWF   Contador2,0      ; 1 Tcy
;  
;Ext_Loop:
;    MOVLW   249              ;1 Tcy--k1
;    MOVWF   Contador1,0      ;1 Tcy
;Int_Loop:
;    NOP                      ; k1*Tcy
;    DECFSZ Contador1,1,0     ; (k1-1)+3Tcy
;    GOTO Int_Loop            ; (k1-1)*2Tcy
;    DECFSZ  Contador2,1,0
;    GOTO  Ext_Loop
;    RETURN		     ;2 Tcy
;
;    
;    
;;5ms 
;Delay_5ms:                   ; 2 Tcy
;    MOVLW   5                ; 1 Tcy --k2
;    MOVWF   Contador2,0      ; 1 Tcy
;  
;Ext_Loop:
;    MOVLW   249              ;1 Tcy--k1
;    MOVWF   Contador1,0      ;1 Tcy
;Int_Loop:
;    NOP                      ; k1*Tcy
;    DECFSZ   Contador1,1,0   ; (k1-1)+3Tcy
;    GOTO     Int_Loop        ; (k1-1)*2Tcy
;    DECFSZ   Contador2,1,0
;    GOTO     Ext_Loop
;    RETURN		     ;2 Tcy
;
;    
;    
;;10ms 
;Delay_10ms:                 ; 2 Tcy
;    MOVLW   10              ; 1 Tcy --k2
;    MOVWF    Contador2,0    ; 1 Tcy
;   
;Ext_Loop:
;    MOVLW   249             ;1 Tcy--k1
;    MOVWF    Contador1,0    ;1 Tcy
;Int_Loop:
;    NOP                     ; k1*Tcy
;    DECFSZ   Contador1,1,0  ; (k1-1)+3Tcy
;    GOTO     Int_Loop       ; (k1-1)*2Tcy
;    DECFSZ   Contador2,1,0
;    GOTO     Ext_Loop
;    RETURN		    ;2 Tcy
;
;    
;    
;;25ms 
;Delay_25ms:                ; 2 Tcy
;    MOVLW   25             ; 1 Tcy --k2
;    MOVWF   Contador2,0    ; 1 Tcy
;   
;Ext_Loop:
;    MOVLW   249            ;1 Tcy--k1
;    MOVWF   Contador1,0    ;1 Tcy
;Int_Loop:
;    NOP                    ; k1*Tcy
;    DECFSZ  Contador1,1,0  ; (k1-1)+3Tcy
;    GOTO    Int_Loop       ; (k1-1)*2Tcy
;    DECFSZ  Contador2,1,0
;    GOTO    Ext_Loop
;    RETURN		   ;2 Tcy
;
;    
;    
;50ms 
;Delay_50ms:                ; 2 Tcy
;    MOVLW   50             ; 1 Tcy --k2
;    MOVWF   Contador2,0    ; 1 Tcy
;   
;Ext_Loop:
;    MOVLW   249            ;1 Tcy--k1
;    MOVWF   Contador1,0    ;1 Tcy
;Int_Loop:
;    NOP                    ; k1*Tcy
;    DECFSZ  Contador1,1,0  ; (k1-1)+3Tcy
;    GOTO    Int_Loop       ; (k1-1)*2Tcy
;    DECFSZ  Contador2,1,0
;    GOTO    Ext_Loop
;    RETURN		   ;2 Tcy
;
;    
;    
;;100ms 
;Delay_100ms:               ; 2 Tcy
;    MOVLW   100            ; 1 Tcy --k2
;    MOVWF   Contador2,0    ; 1 Tcy
; 
;Ext_Loop:
;    MOVLW   249            ;1 Tcy--k1
;    MOVWF   Contador1,0    ;1 Tcy
;Int_Loop:
;    NOP                    ; k1*Tcy
;    DECFSZ  Contador1,1,0  ; (k1-1)+3Tcy
;    GOTO    Int_Loop       ; (k1-1)*2Tcy
;    DECFSZ  Contador2,1,0
;    GOTO    Ext_Loop
;    RETURN		   ;2 Tcy
;
;    
;    
;;200ms 
;Delay_200ms:               ; 2 Tcy
;    MOVLW   200            ; 1 Tcy --k2
;    MOVWF    Contador2,0   ; 1 Tcy
;   
;Ext_Loop:
;    MOVLW   249            ;1 Tcy--k1
;    MOVWF    Contador1,0   ;1 Tcy
;Int_Loop:
;    NOP                    ; k1*Tcy
;    DECFSZ   Contador1,1,0 ; (k1-1)+3Tcy
;    GOTO     Int_Loop      ; (k1-1)*2Tcy
;    DECFSZ   Contador2,1,0
;    GOTO     Ext_Loop
;    RETURN		   ;2 Tcy

 
 
Delay_250ms:		    ; 2Tcy -- Call
    MOVLW   250		    ; 1Tcy -- k2
    MOVWF   contador2,0	    ; 1Tcy
; T = (6 + 4k)us	    1Tcy = 1us
Ext_Loop:		    
    MOVLW   249		    ; 1Tcy -- k1
    MOVWF   contador1,0	    ; 1Tcy
Int_Loop:
    NOP			    ; k1*Tcy
    DECFSZ  contador1,1,0   ; (k1-1)+ 3Tcy
    GOTO    Int_Loop	    ; (k1-1)*2Tcy
    DECFSZ  contador2,1,0
    GOTO    Ext_Loop
    RETURN		    ; 2Tcy

    
    
;500ms
Delay_500ms:
    MOVLW 2
    MOVWF contador3,0
    Loop_250ms:				    ;2tcy
    MOVLW 250				    ;1tcy
    MOVWF contador2,0			    ;1tcy
    Loop_1ms8:			     
    MOVLW   249				    ;k Tcy
    MOVWF   contador1,0			    ;k tcy
    INT_LOOP8:			    
    Nop					    ;249k TCY
    DECFSZ  contador1,1,0		     ;251k TCY 
    Goto    INT_LOOP8			;496k TCY
    DECFSZ  contador2,1,0		    ;(k-1)+3tcy
    GOTO    Loop_1ms8			    ;(k-1)*2tcy
    DECFSZ  contador3,1,0
    GOTO Loop_250ms
    RETURN  
    
    
 