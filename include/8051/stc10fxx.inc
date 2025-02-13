;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
;; STC10Fxx/STC11Fxx/STC12C52xx/STC12C5Axx include
;; part of the naken_asm assembler
;;
;; Generated by: Cjacker Huang (cjacker@gmail.com)
;;         Date: 2022-05-21
;;        Parts: STC10Fxx / STC11Fxx / STC12C52xx / STC12C5Axx
;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

ACC equ 0xE0
B equ 0xF0
PSW equ 0xD0
SP equ 0x81
DPL equ 0x82
DPH equ 0x83
PCON equ 0x87
AUXR equ 0x8E
AUXR1 equ 0xA2
WAKE_CLKO equ 0x8F
CLK_DIV equ 0x97
BUS_SPEED equ 0xA1
IE equ 0xA8
IE2 equ 0xAF
IP equ 0xB8
IPH equ 0xB7
IP2 equ 0xB5
IPH2 equ 0xB6
P0 equ 0x80
P0M0 equ 0x94
P0M1 equ 0x93
P1 equ 0x90
P1M0 equ 0x92
P1M1 equ 0x91
P1ASF equ 0x9D
P2 equ 0xA0
P2M0 equ 0x96
P2M1 equ 0x95
P3 equ 0xB0
P3M0 equ 0xB2
P3M1 equ 0xB1
P4 equ 0xC0
P4M0 equ 0xB4
P4M1 equ 0xB3
P4SW equ 0xBB
P5 equ 0xC8
P5M0 equ 0xCA
P5M1 equ 0xC9
TCON equ 0x88
TMOD equ 0x89
TL0 equ 0x8A
TH0 equ 0x8C
TL1 equ 0x8B
TH1 equ 0x8D
SCON equ 0x98
SBUF equ 0x99
SADEN equ 0xB9
SADDR equ 0xA9
S2CON equ 0x9A
S2BUF equ 0x9B
BRT equ 0x9C
WDT_CONTR equ 0xC1
CCON equ 0xD8
CMOD equ 0xD9
CL equ 0xE9
CH equ 0xF9
CCAPM0 equ 0xDA
CCAPM1 equ 0xDB
CCAP0L equ 0xEA
CCAP0H equ 0xFA
CCAP1L equ 0xEB
CCAP1H equ 0xFB
PCA_PWM0 equ 0xF2
PCA_PWM1 equ 0xF3
ADC_CONTR equ 0xBC
ADC_RES equ 0xBD
ADC_RESL equ 0xBE
SPCTL equ 0xCE
SPSTAT equ 0xCD
SPDAT equ 0xCF
IAP_DATA equ 0xC2
IAP_ADDRH equ 0xC3
IAP_ADDRL equ 0xC4
IAP_CMD equ 0xC5
IAP_TRIG equ 0xC6
IAP_CONTR equ 0xC7

; bit aliases

CY equ 0xD0+7
AC equ 0xD0+6
F0 equ 0xD0+5
RS1 equ 0xD0+4
RS0 equ 0xD0+3
OV equ 0xD0+2
F1 equ 0xD0+1
P equ 0xD0+0
EA equ 0xA8+7
ELVD equ 0xA8+6
EADC equ 0xA8+5
ES equ 0xA8+4
ET1 equ 0xA8+3
EX1 equ 0xA8+2
ET0 equ 0xA8+1
EX0 equ 0xA8+0
PPCA equ 0xB8+7
PLVD equ 0xB8+6
PADC equ 0xB8+5
PS equ 0xB8+4
PT1 equ 0xB8+3
PX1 equ 0xB8+2
PT0 equ 0xB8+1
PX0 equ 0xB8+0
TF1 equ 0x88+7
TR1 equ 0x88+6
TF0 equ 0x88+5
TR0 equ 0x88+4
IE1 equ 0x88+3
IT1 equ 0x88+2
IE0 equ 0x88+1
IT0 equ 0x88+0
SM0 equ 0x98+7
SM1 equ 0x98+6
SM2 equ 0x98+5
REN equ 0x98+4
TB8 equ 0x98+3
RB8 equ 0x98+2
TI equ 0x98+1
RI equ 0x98+0
CF equ 0xD8+7
CR equ 0xD8+6
CCF1 equ 0xD8+1
CCF0 equ 0xD8+0

; xdata

