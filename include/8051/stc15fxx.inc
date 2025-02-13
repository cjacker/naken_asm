;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
;; STC15Fxx/STC15Wxx include
;; part of the naken_asm assembler
;;
;; Generated by: Cjacker Huang (cjacker@gmail.com)
;;         Date: 2022-05-21
;;        Parts: STC15Fxx / STC15Wxx
;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

ACC equ 0xE0
B equ 0xF0
PSW equ 0xD0
SP equ 0x81
DPL equ 0x82
DPH equ 0x83
P0 equ 0x80
P1 equ 0x90
P2 equ 0xA0
P3 equ 0xB0
P4 equ 0xC0
P5 equ 0xC8
P6 equ 0xE8
P7 equ 0xF8
P0M0 equ 0x94
P0M1 equ 0x93
P1M0 equ 0x92
P1M1 equ 0x91
P2M0 equ 0x96
P2M1 equ 0x95
P3M0 equ 0xB2
P3M1 equ 0xB1
P4M0 equ 0xB4
P4M1 equ 0xB3
P5M0 equ 0xCA
P5M1 equ 0xC9
P6M0 equ 0xCC
P6M1 equ 0xCB
P7M0 equ 0xE2
P7M1 equ 0xE1
PCON equ 0x87
AUXR equ 0x8E
AUXR1 equ 0xA2
P_SW1 equ 0xA2
CLK_DIV equ 0x97
BUS_SPEED equ 0xA1
P1ASF equ 0x9D
P_SW2 equ 0xBA
IE equ 0xA8
IP equ 0xB8
IE2 equ 0xAF
IP2 equ 0xB5
INT_CLKO equ 0x8F
TCON equ 0x88
TMOD equ 0x89
TL0 equ 0x8A
TL1 equ 0x8B
TH0 equ 0x8C
TH1 equ 0x8D
T4T3M equ 0xD1
T3T4M equ 0xD1
T4H equ 0xD2
T4L equ 0xD3
T3H equ 0xD4
T3L equ 0xD5
T2H equ 0xD6
T2L equ 0xD7
WKTCL equ 0xAA
WKTCH equ 0xAB
WDT_CONTR equ 0xC1
SCON equ 0x98
SBUF equ 0x99
S2CON equ 0x9A
S2BUF equ 0x9B
S3CON equ 0xAC
S3BUF equ 0xAD
S4CON equ 0x84
S4BUF equ 0x85
SADDR equ 0xA9
SADEN equ 0xB9
ADC_CONTR equ 0xBC
ADC_RES equ 0xBD
ADC_RESL equ 0xBE
SPSTAT equ 0xCD
SPCTL equ 0xCE
SPDAT equ 0xCF
IAP_DATA equ 0xC2
IAP_ADDRH equ 0xC3
IAP_ADDRL equ 0xC4
IAP_CMD equ 0xC5
IAP_TRIG equ 0xC6
IAP_CONTR equ 0xC7
CCON equ 0xD8
CMOD equ 0xD9
CL equ 0xE9
CH equ 0xF9
CCAPM0 equ 0xDA
CCAPM1 equ 0xDB
CCAPM2 equ 0xDC
CCAP0L equ 0xEA
CCAP1L equ 0xEB
CCAP2L equ 0xEC
PCA_PWM0 equ 0xF2
PCA_PWM1 equ 0xF3
PCA_PWM2 equ 0xF4
CCAP0H equ 0xFA
CCAP1H equ 0xFB
CCAP2H equ 0xFC
CMPCR1 equ 0xE6
CMPCR2 equ 0xE7
PWMCFG equ 0xf1
PWMCR equ 0xf5
PWMIF equ 0xf6
PWMFDCR equ 0xf7

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
CCF2 equ 0xD8+2
CCF1 equ 0xD8+1
CCF0 equ 0xD8+0

; xdata

PWMC equ 0xfff0
PWMCH equ 0xfff0
PWMCL equ 0xfff1
PWMCKS equ 0xfff2
PWM2T1 equ 0xff00
PWM2T1H equ 0xff00
PWM2T1L equ 0xff01
PWM2T2 equ 0xff02
PWM2T2H equ 0xff02
PWM2T2L equ 0xff03
PWM2CR equ 0xff04
PWM3T1 equ 0xff10
PWM3T1H equ 0xff10
PWM3T1L equ 0xff11
PWM3T2 equ 0xff12
PWM3T2H equ 0xff12
PWM3T2L equ 0xff13
PWM3CR equ 0xff14
PWM4T1 equ 0xff20
PWM4T1H equ 0xff20
PWM4T1L equ 0xff21
PWM4T2 equ 0xff22
PWM4T2H equ 0xff22
PWM4T2L equ 0xff23
PWM4CR equ 0xff24
PWM5T1 equ 0xff30
PWM5T1H equ 0xff30
PWM5T1L equ 0xff31
PWM5T2 equ 0xff32
PWM5T2H equ 0xff32
PWM5T2L equ 0xff33
PWM5CR equ 0xff34
PWM6T1 equ 0xff40
PWM6T1H equ 0xff40
PWM6T1L equ 0xff41
PWM6T2 equ 0xff42
PWM6T2H equ 0xff42
PWM6T2L equ 0xff43
PWM6CR equ 0xff44
PWM7T1 equ 0xff50
PWM7T1H equ 0xff50
PWM7T1L equ 0xff51
PWM7T2 equ 0xff52
PWM7T2H equ 0xff52
PWM7T2L equ 0xff53
PWM7CR equ 0xff54
