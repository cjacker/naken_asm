;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
;; STC8Gxx include
;; part of the naken_asm assembler
;;
;; Generated by: Cjacker Huang (cjacker@gmail.com)
;;         Date: 2022-05-21
;;        Parts: STC8Gxx
;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

P0 equ 0x80
SP equ 0x81
DPL equ 0x82
DPH equ 0x83
S4CON equ 0x84
S4BUF equ 0x85
PCON equ 0x87
TCON equ 0x88
TMOD equ 0x89
TL0 equ 0x8A
TL1 equ 0x8B
TH0 equ 0x8C
TH1 equ 0x8D
AUXR equ 0x8E
INTCLKO equ 0x8F
P1 equ 0x90
P1M1 equ 0x91
P1M0 equ 0x92
P0M1 equ 0x93
P0M0 equ 0x94
P2M1 equ 0x95
P2M0 equ 0x96
SCON equ 0x98
SBUF equ 0x99
S2CON equ 0x9A
S2BUF equ 0x9B
IRCBAND equ 0x9D
LIRTRIM equ 0x9E
IRTRIM equ 0x9F
P2 equ 0xA0
P_SW1 equ 0xA2
IE equ 0xA8
SADDR equ 0xA9
WKTCL equ 0xAA
WKTCH equ 0xAB
S3CON equ 0xAC
S3BUF equ 0xAD
TA equ 0xAE
IE2 equ 0xAF
P3 equ 0xB0
P3M1 equ 0xB1
P3M0 equ 0xB2
P4M1 equ 0xB3
P4M0 equ 0xB4
IP2 equ 0xB5
IP2H equ 0xB6
IPH equ 0xB7
IP equ 0xB8
SADEN equ 0xB9
P_SW2 equ 0xBA
ADC_CONTR equ 0xBC
ADC_RES equ 0xBD
ADC_RESL equ 0xBE
P4 equ 0xC0
WDT_CONTR equ 0xC1
IAP_DATA equ 0xC2
IAP_ADDRH equ 0xC3
IAP_ADDRL equ 0xC4
IAP_CMD equ 0xC5
IAP_TRIG equ 0xC6
IAP_CONTR equ 0xC7
P5 equ 0xC8
P5M1 equ 0xC9
P5M0 equ 0xCA
P6M1 equ 0xcb
P6M0 equ 0xcc
SPSTAT equ 0xCD
SPCTL equ 0xCE
SPDAT equ 0xCF
PSW equ 0xD0
T4T3M equ 0xD1
T4H equ 0xD2
T4L equ 0xD3
T3H equ 0xD4
T3L equ 0xD5
T2H equ 0xD6
T2L equ 0xD7
CCON equ 0xD8
CMOD equ 0xD9
CCAPM0 equ 0xDA
CCAPM1 equ 0xDB
CCAPM2 equ 0xDC
ADCCFG equ 0xDE
IP3 equ 0xDF
ACC equ 0xE0
P7M1 equ 0xe1
P7M0 equ 0xe2
DPS equ 0xE3
DPL1 equ 0xE4
DPH1 equ 0xE5
CMPCR1 equ 0xE6
CMPCR2 equ 0xE7
P6 equ 0xe8
CL equ 0xE9
CCAP0L equ 0xEA
CCAP1L equ 0xEB
CCAP2L equ 0xEC
IP3H equ 0xEE
AUXINTIF equ 0xEF
B equ 0xF0
PWMSET equ 0xF1
PCA_PWM0 equ 0xF2
PCA_PWM1 equ 0xF3
PCA_PWM2 equ 0xF4
IAP_TPS equ 0xF5
PWMCFG01 equ 0xF6
PWMCFG23 equ 0xF7
P7 equ 0xf8
CH equ 0xF9
CCAP0H equ 0xFA
CCAP1H equ 0xFB
CCAP2H equ 0xFC
PWMCFG45 equ 0xFE
RSTCFG equ 0xFF

; bit aliases

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
CY equ 0xD0+7
AC equ 0xD0+6
F0 equ 0xD0+5
RS1 equ 0xD0+4
RS0 equ 0xD0+3
OV equ 0xD0+2
F1 equ 0xD0+1
P equ 0xD0+0
CF equ 0xD8+7
CR equ 0xD8+6
CCF2 equ 0xD8+2
CCF1 equ 0xD8+1
CCF0 equ 0xD8+0

; xdata

PWM0C equ 0xff00
PWM0CH equ 0xff00
PWM0CL equ 0xff01
PWM0CKS equ 0xff02
PWM0TADC equ 0xff03
PWM0TADCH equ 0xff03
PWM0TADCL equ 0xff04
PWM0IF equ 0xff05
PWM0FDCR equ 0xff06
PWM00T1 equ 0xff10
PWM00T1L equ 0xff11
PWM00T2 equ 0xff12
PWM00T2H equ 0xff12
PWM00T2L equ 0xff13
PWM00CR equ 0xff14
PWM00HLD equ 0xff15
PWM01T1 equ 0xff18
PWM01T1H equ 0xff18
PWM01T1L equ 0xff19
PWM01T2 equ 0xff1a
PWM01T2H equ 0xff1a
PWM01T2L equ 0xff1b
PWM01CR equ 0xff1c
PWM01HLD equ 0xff1d
PWM02T1 equ 0xff20
PWM02T1H equ 0xff20
PWM02T1L equ 0xff21
PWM02T2 equ 0xff22
PWM02T2H equ 0xff22
PWM02T2L equ 0xff23
PWM02CR equ 0xff24
PWM02HLD equ 0xff25
PWM03T1 equ 0xff28
PWM03T1H equ 0xff28
PWM03T1L equ 0xff29
PWM03T2 equ 0xff2a
PWM03T2H equ 0xff2a
PWM03T2L equ 0xff2b
PWM03CR equ 0xff2c
PWM03HLD equ 0xff2d
PWM04T1 equ 0xff30
PWM04T1H equ 0xff30
PWM04T1L equ 0xff31
PWM04T2 equ 0xff32
PWM04T2H equ 0xff32
PWM04T2L equ 0xff33
PWM04CR equ 0xff34
PWM04HLD equ 0xff35
PWM05T1 equ 0xff38
PWM05T1H equ 0xff38
PWM05T1L equ 0xff39
PWM05T2 equ 0xff3a
PWM05T2H equ 0xff3a
PWM05T2L equ 0xff3b
PWM05CR equ 0xff3c
PWM05HLD equ 0xff3d
PWM06T1 equ 0xff40
PWM06T1H equ 0xff40
PWM06T1L equ 0xff41
PWM06T2 equ 0xff42
PWM06T2H equ 0xff42
PWM06T2L equ 0xff43
PWM06CR equ 0xff44
PWM06HLD equ 0xff45
PWM07T1 equ 0xff48
PWM07T1H equ 0xff48
PWM07T1L equ 0xff49
PWM07T2 equ 0xff4a
PWM07T2H equ 0xff4a
PWM07T2L equ 0xff4b
PWM07CR equ 0xff4c
PWM07HLD equ 0xff4d
PWM1C equ 0xff50
PWM1CH equ 0xff50
PWM1CL equ 0xff51
PWM1CKS equ 0xff52
PWM1IF equ 0xff55
PWM1FDCR equ 0xff56
PWM10T1 equ 0xff60
PWM10T1H equ 0xff60
PWM10T1L equ 0xff61
PWM10T2 equ 0xff62
PWM10T2H equ 0xff62
PWM10T2L equ 0xff63
PWM10CR equ 0xff64
PWM10HLD equ 0xff65
PWM11T1 equ 0xff68
PWM11T1H equ 0xff68
PWM11T1L equ 0xff69
PWM11T2 equ 0xff6a
PWM11T2H equ 0xff6a
PWM11T2L equ 0xff6b
PWM11CR equ 0xff6c
PWM11HLD equ 0xff6d
PWM12T1 equ 0xff70
PWM12T1H equ 0xff70
PWM12T1L equ 0xff71
PWM12T2 equ 0xff72
PWM12T2H equ 0xff72
PWM12T2L equ 0xff73
PWM12CR equ 0xff74
PWM12HLD equ 0xff75
PWM13T1 equ 0xff78
PWM13T1H equ 0xff78
PWM13T1L equ 0xff79
PWM13T2 equ 0xff7a
PWM13T2H equ 0xff7a
PWM13T2L equ 0xff7b
PWM13CR equ 0xff7c
PWM13HLD equ 0xff7d
PWM14T1 equ 0xff80
PWM14T1H equ 0xff80
PWM14T1L equ 0xff81
PWM14T2 equ 0xff82
PWM14T2H equ 0xff82
PWM14T2L equ 0xff83
PWM14CR equ 0xff84
PWM14HLD equ 0xff85
PWM15T1 equ 0xff88
PWM15T1H equ 0xff88
PWM15T1L equ 0xff89
PWM15T2 equ 0xff8a
PWM15T2H equ 0xff8a
PWM15T2L equ 0xff8b
PWM15CR equ 0xff8c
PWM15HLD equ 0xff8d
PWM16T1 equ 0xff90
PWM16T1H equ 0xff90
PWM16T1L equ 0xff91
PWM16T2 equ 0xff92
PWM16T2H equ 0xff92
PWM16T2L equ 0xff93
PWM16CR equ 0xff94
PWM16HLD equ 0xff95
PWM17T1 equ 0xff98
PWM17T1H equ 0xff98
PWM17T1L equ 0xff99
PWM17T2 equ 0xff9a
PWM17T2H equ 0xff9a
PWM17T2L equ 0xff9b
PWM17CR equ 0xff9c
PWM17HLD equ 0xff9d
PWM2C equ 0xffa0
PWM2CH equ 0xffa0
PWM2CL equ 0xffa1
PWM2CKS equ 0xffa2
PWM2TADC equ 0xffa3
PWM2TADCH equ 0xffa3
PWM2TADCL equ 0xffa4
PWM2IF equ 0xffa5
PWM2FDCR equ 0xffa6
PWM20T1 equ 0xffb0
PWM20T1H equ 0xffb0
PWM20T1L equ 0xffb1
PWM20T2 equ 0xffb2
PWM20T2H equ 0xffb2
PWM20T2L equ 0xffb3
PWM20CR equ 0xffb4
PWM20HLD equ 0xffb5
PWM21T1 equ 0xffb8
PWM21T1H equ 0xffb8
PWM21T1L equ 0xffb9
PWM21T2 equ 0xffba
PWM21T2H equ 0xffba
PWM21T2L equ 0xffbb
PWM21CR equ 0xffbc
PWM21HLD equ 0xffbd
PWM22T1 equ 0xffc0
PWM22T1H equ 0xffc0
PWM22T1L equ 0xffc1
PWM22T2 equ 0xffc2
PWM22T2H equ 0xffc2
PWM22T2L equ 0xffc3
PWM22CR equ 0xffc4
PWM22HLD equ 0xffc5
PWM23T1 equ 0xffc8
PWM23T1H equ 0xffc8
PWM23T1L equ 0xffc9
PWM23T2 equ 0xffca
PWM23T2H equ 0xffca
PWM23T2L equ 0xffcb
PWM23CR equ 0xffcc
PWM23HLD equ 0xffcd
PWM24T1 equ 0xffd0
PWM24T1H equ 0xffd0
PWM24T1L equ 0xffd1
PWM24T2 equ 0xffd2
PWM24T2H equ 0xffd2
PWM24T2L equ 0xffd3
PWM24CR equ 0xffd4
PWM24HLD equ 0xffd5
PWM25T1 equ 0xffd8
PWM25T1H equ 0xffd8
PWM25T1L equ 0xffd9
PWM25T2 equ 0xffda
PWM25T2H equ 0xffda
PWM25T2L equ 0xffdb
PWM25CR equ 0xffdc
PWM25HLD equ 0xffdd
PWM26T1 equ 0xffe0
PWM26T1H equ 0xffe0
PWM26T1L equ 0xffe1
PWM26T2 equ 0xffe2
PWM26T2H equ 0xffe2
PWM26T2L equ 0xffe3
PWM26CR equ 0xffe4
PWM26HLD equ 0xffe5
PWM27T1 equ 0xffe8
PWM27T1H equ 0xffe8
PWM27T1L equ 0xffe9
PWM27T2 equ 0xffea
PWM27T2H equ 0xffea
PWM27T2L equ 0xffeb
PWM27CR equ 0xffec
PWM27HLD equ 0xffed
CKSEL equ 0xfe00
CLKDIV equ 0xfe01
HIRCCR equ 0xfe02
XOSCCR equ 0xfe03
IRC32KCR equ 0xfe04
MCLKOCR equ 0xfe05
IRCDB equ 0xfe06
X32KCR equ 0xfe08
P0PU equ 0xfe10
P1PU equ 0xfe11
P2PU equ 0xfe12
P3PU equ 0xfe13
P4PU equ 0xfe14
P5PU equ 0xfe15
P6PU equ 0xfe16
P7PU equ 0xfe17
P0NCS equ 0xfe18
P1NCS equ 0xfe19
P2NCS equ 0xfe1a
P3NCS equ 0xfe1b
P4NCS equ 0xfe1c
P5NCS equ 0xfe1d
P6NCS equ 0xfe1e
P7NCS equ 0xfe1f
P0SR equ 0xfe20
P1SR equ 0xfe21
P2SR equ 0xfe22
P3SR equ 0xfe23
P4SR equ 0xfe24
P5SR equ 0xfe25
P6SR equ 0xfe26
P7SR equ 0xfe27
P0DR equ 0xfe28
P1DR equ 0xfe29
P2DR equ 0xfe2a
P3DR equ 0xfe2b
P4DR equ 0xfe2c
P5DR equ 0xfe2d
P6DR equ 0xfe2e
P7DR equ 0xfe2f
P0IE equ 0xfe30
P1IE equ 0xfe31
P2IE equ 0xfe32
P3IE equ 0xfe33
P4IE equ 0xfe34
P5IE equ 0xfe35
P6IE equ 0xfe36
P7IE equ 0xfe37
RTCCR equ 0xfe60
RTCCFG equ 0xfe61
RTCIEN equ 0xfe62
RTCIF equ 0xfe63
ALAHOUR equ 0xfe64
ALAMIN equ 0xfe65
ALASEC equ 0xfe66
ALASSEC equ 0xfe67
INIYEAR equ 0xfe68
INIMONTH equ 0xfe69
INIDAY equ 0xfe6a
INIHOUR equ 0xfe6b
INIMIN equ 0xfe6c
INISEC equ 0xfe6d
INISSEC equ 0xfe6e
YEAR equ 0xfe70
MONTH equ 0xfe71
DAY equ 0xfe72
HOUR equ 0xfe73
MIN equ 0xfe74
SEC equ 0xfe75
SSEC equ 0xfe76
I2CCFG equ 0xfe80
I2CMSCR equ 0xfe81
I2CMSST equ 0xfe82
I2CSLCR equ 0xfe83
I2CSLST equ 0xfe84
I2CSLADR equ 0xfe85
I2CTXD equ 0xfe86
I2CRXD equ 0xfe87
I2CMSAUX equ 0xfe88
TM2PS equ 0xfea2
TM3PS equ 0xfea3
TM4PS equ 0xfea4
ADCTIM equ 0xfea8
T3T4PS equ 0xfeac
P0INTE equ 0xfd00
P1INTE equ 0xfd01
P2INTE equ 0xfd02
P3INTE equ 0xfd03
P4INTE equ 0xfd04
P5INTE equ 0xfd05
P6INTE equ 0xfd06
P7INTE equ 0xfd07
P0INTF equ 0xfd10
P1INTF equ 0xfd11
P2INTF equ 0xfd12
P3INTF equ 0xfd13
P4INTF equ 0xfd14
P5INTF equ 0xfd15
P6INTF equ 0xfd16
P7INTF equ 0xfd17
P0IM0 equ 0xfd20
P1IM0 equ 0xfd21
P2IM0 equ 0xfd22
P3IM0 equ 0xfd23
P4IM0 equ 0xfd24
P5IM0 equ 0xfd25
P6IM0 equ 0xfd26
P7IM0 equ 0xfd27
P0IM1 equ 0xfd30
P1IM1 equ 0xfd31
P2IM1 equ 0xfd32
P3IM1 equ 0xfd33
P4IM1 equ 0xfd34
P5IM1 equ 0xfd35
P6IM1 equ 0xfd36
P7IM1 equ 0xfd37
P0WKUE equ 0xfd40
P1WKUE equ 0xfd41
P2WKUE equ 0xfd42
P3WKUE equ 0xfd43
P4WKUE equ 0xfd44
P5WKUE equ 0xfd45
P6WKUE equ 0xfd46
P7WKUE equ 0xfd47
PIN_IP equ 0xfd60
PIN_IPH equ 0xfd61
PWM3C equ 0xfc00
PWM3CH equ 0xfc00
PWM3CL equ 0xfc01
PWM3CKS equ 0xfc02
PWM3IF equ 0xfc05
PWM3FDCR equ 0xfc06
PWM30T1 equ 0xfc10
PWM30T1H equ 0xfc10
PWM30T1L equ 0xfc11
PWM30T2 equ 0xfc12
PWM30T2H equ 0xfc12
PWM30T2L equ 0xfc13
PWM30CR equ 0xfc14
PWM30HLD equ 0xfc15
PWM31T1 equ 0xfc18
PWM31T1H equ 0xfc18
PWM31T1L equ 0xfc19
PWM31T2 equ 0xfc1a
PWM31T2H equ 0xfc1a
PWM31T2L equ 0xfc1b
PWM31CR equ 0xfc1c
PWM31HLD equ 0xfc1d
PWM32T1 equ 0xfc20
PWM32T1H equ 0xfc20
PWM32T1L equ 0xfc21
PWM32T2 equ 0xfc22
PWM32T2H equ 0xfc22
PWM32T2L equ 0xfc23
PWM32CR equ 0xfc24
PWM32HLD equ 0xfc25
PWM33T1 equ 0xfc28
PWM33T1H equ 0xfc28
PWM33T1L equ 0xfc29
PWM33T2 equ 0xfc2a
PWM33T2H equ 0xfc2a
PWM33T2L equ 0xfc2b
PWM33CR equ 0xfc2c
PWM33HLD equ 0xfc2d
PWM34T1 equ 0xfc30
PWM34T1H equ 0xfc30
PWM34T1L equ 0xfc31
PWM34T2 equ 0xfc32
PWM34T2H equ 0xfc32
PWM34T2L equ 0xfc33
PWM34CR equ 0xfc34
PWM34HLD equ 0xfc35
PWM35T1 equ 0xfc38
PWM35T1H equ 0xfc38
PWM35T1L equ 0xfc39
PWM35T2 equ 0xfc3a
PWM35T2H equ 0xfc3a
PWM35T2L equ 0xfc3b
PWM35CR equ 0xfc3c
PWM35HLD equ 0xfc3d
PWM36T1 equ 0xfc40
PWM36T1H equ 0xfc40
PWM36T1L equ 0xfc41
PWM36T2 equ 0xfc42
PWM36T2H equ 0xfc42
PWM36T2L equ 0xfc43
PWM36CR equ 0xfc44
PWM36HLD equ 0xfc45
PWM37T1 equ 0xfc48
PWM37T1H equ 0xfc48
PWM37T1L equ 0xfc49
PWM37T2 equ 0xfc4a
PWM37T2H equ 0xfc4a
PWM37T2L equ 0xfc4b
PWM37CR equ 0xfc4c
PWM37HLD equ 0xfc4d
PWM4C equ 0xfc50
PWM4CH equ 0xfc50
PWM4CL equ 0xfc51
PWM4CKS equ 0xfc52
PWM4TADC equ 0xfc53
PWM4TADCH equ 0xfc53
PWM4TADCL equ 0xfc54
PWM4IF equ 0xfc55
PWM4FDCR equ 0xfc56
PWM40T1 equ 0xfc60
PWM40T1H equ 0xfc60
PWM40T1L equ 0xfc61
PWM40T2 equ 0xfc62
PWM40T2H equ 0xfc62
PWM40T2L equ 0xfc63
PWM40CR equ 0xfc64
PWM40HLD equ 0xfc65
PWM41T1 equ 0xfc68
PWM41T1H equ 0xfc68
PWM41T1L equ 0xfc69
PWM41T2 equ 0xfc6a
PWM41T2H equ 0xfc6a
PWM41T2L equ 0xfc6b
PWM41CR equ 0xfc6c
PWM41HLD equ 0xfc6d
PWM42T1 equ 0xfc70
PWM42T1H equ 0xfc70
PWM42T1L equ 0xfc71
PWM42T2 equ 0xfc72
PWM42T2H equ 0xfc72
PWM42T2L equ 0xfc73
PWM42CR equ 0xfc74
PWM42HLD equ 0xfc75
PWM43T1 equ 0xfc78
PWM43T1H equ 0xfc78
PWM43T1L equ 0xfc79
PWM43T2 equ 0xfc7a
PWM43T2H equ 0xfc7a
PWM43T2L equ 0xfc7b
PWM43CR equ 0xfc7c
PWM43HLD equ 0xfc7d
PWM44T1 equ 0xfc80
PWM44T1H equ 0xfc80
PWM44T1L equ 0xfc81
PWM44T2 equ 0xfc82
PWM44T2H equ 0xfc82
PWM44T2L equ 0xfc83
PWM44CR equ 0xfc84
PWM44HLD equ 0xfc85
PWM45T1 equ 0xfc88
PWM45T1H equ 0xfc88
PWM45T1L equ 0xfc89
PWM45T2 equ 0xfc8a
PWM45T2H equ 0xfc8a
PWM45T2L equ 0xfc8b
PWM45CR equ 0xfc8c
PWM45HLD equ 0xfc8d
PWM46T1 equ 0xfc90
PWM46T1H equ 0xfc90
PWM46T1L equ 0xfc91
PWM46T2 equ 0xfc92
PWM46T2H equ 0xfc92
PWM46T2L equ 0xfc93
PWM46CR equ 0xfc94
PWM46HLD equ 0xfc95
PWM47T1 equ 0xfc98
PWM47T1H equ 0xfc98
PWM47T1L equ 0xfc99
PWM47T2 equ 0xfc9a
PWM47T2H equ 0xfc9a
PWM47T2L equ 0xfc9b
PWM47CR equ 0xfc9c
PWM47HLD equ 0xfc9d
PWM5C equ 0xfca0
PWM5CH equ 0xfca0
PWM5CL equ 0xfca1
PWM5CKS equ 0xfca2
PWM5IF equ 0xfca5
PWM5FDCR equ 0xfca6
PWM50T1 equ 0xfcb0
PWM50T1H equ 0xfcb0
PWM50T1L equ 0xfcb1
PWM50T2 equ 0xfcb2
PWM50T2H equ 0xfcb2
PWM50T2L equ 0xfcb3
PWM50CR equ 0xfcb4
PWM50HLD equ 0xfcb5
PWM51T1 equ 0xfcb8
PWM51T1H equ 0xfcb8
PWM51T1L equ 0xfcb9
PWM51T2 equ 0xfcba
PWM51T2H equ 0xfcba
PWM51T2L equ 0xfcbb
PWM51CR equ 0xfcbc
PWM51HLD equ 0xfcbd
PWM52T1 equ 0xfcc0
PWM52T1H equ 0xfcc0
PWM52T1L equ 0xfcc1
PWM52T2 equ 0xfcc2
PWM52T2H equ 0xfcc2
PWM52T2L equ 0xfcc3
PWM52CR equ 0xfcc4
PWM52HLD equ 0xfcc5
PWM53T1 equ 0xfcc8
PWM53T1H equ 0xfcc8
PWM53T1L equ 0xfcc9
PWM53T2 equ 0xfcca
PWM53T2H equ 0xfcca
PWM53T2L equ 0xfccb
PWM53CR equ 0xfccc
PWM53HLD equ 0xfccd
PWM54T1 equ 0xfcd0
PWM54T1H equ 0xfcd0
PWM54T1L equ 0xfcd1
PWM54T2 equ 0xfcd2
PWM54T2H equ 0xfcd2
PWM54T2L equ 0xfcd3
PWM54CR equ 0xfcd4
PWM54HLD equ 0xfcd5
PWM55T1 equ 0xfcd8
PWM55T1H equ 0xfcd8
PWM55T1L equ 0xfcd9
PWM55T2 equ 0xfcda
PWM55T2H equ 0xfcda
PWM55T2L equ 0xfcdb
PWM55CR equ 0xfcdc
PWM55HLD equ 0xfcdd
PWM56T1 equ 0xfce0
PWM56T1H equ 0xfce0
PWM56T1L equ 0xfce1
PWM56T2 equ 0xfce2
PWM56T2H equ 0xfce2
PWM56T2L equ 0xfce3
PWM56CR equ 0xfce4
PWM56HLD equ 0xfce5
PWM57T1 equ 0xfce8
PWM57T1H equ 0xfce8
PWM57T1L equ 0xfce9
PWM57T2 equ 0xfcea
PWM57T2H equ 0xfcea
PWM57T2L equ 0xfceb
PWM57CR equ 0xfcec
PWM57HLD equ 0xfced
MD3 equ 0xfcf0
MD2 equ 0xfcf1
MD1 equ 0xfcf2
MD0 equ 0xfcf3
MD5 equ 0xfcf4
MD4 equ 0xfcf5
ARCON equ 0xfcf6
OPCON equ 0xfcf7
COMEN equ 0xfb00
SEGENL equ 0xfb01
SEGENH equ 0xfb02
LEDCTRL equ 0xfb03
LEDCKS equ 0xfb04
COM0_DA_L equ 0xfb10
COM1_DA_L equ 0xfb11
COM2_DA_L equ 0xfb12
COM3_DA_L equ 0xfb13
COM4_DA_L equ 0xfb14
COM5_DA_L equ 0xfb15
COM6_DA_L equ 0xfb16
COM7_DA_L equ 0xfb17
COM0_DA_H equ 0xfb18
COM1_DA_H equ 0xfb19
COM2_DA_H equ 0xfb1a
COM3_DA_H equ 0xfb1b
COM4_DA_H equ 0xfb1c
COM5_DA_H equ 0xfb1d
COM6_DA_H equ 0xfb1e
COM7_DA_H equ 0xfb1f
COM0_DC_L equ 0xfb20
COM1_DC_L equ 0xfb21
COM2_DC_L equ 0xfb22
COM3_DC_L equ 0xfb23
COM4_DC_L equ 0xfb24
COM5_DC_L equ 0xfb25
COM6_DC_L equ 0xfb26
COM7_DC_L equ 0xfb27
COM0_DC_H equ 0xfb28
COM1_DC_H equ 0xfb29
COM2_DC_H equ 0xfb2a
COM3_DC_H equ 0xfb2b
COM4_DC_H equ 0xfb2c
COM5_DC_H equ 0xfb2d
COM6_DC_H equ 0xfb2e
COM7_DC_H equ 0xfb2f
TSCHEN1 equ 0xfb40
TSCHEN2 equ 0xfb41
TSCFG1 equ 0xfb42
TSCFG2 equ 0xfb43
TSWUTC equ 0xfb44
TSCTRL equ 0xfb45
TSSTA1 equ 0xfb46
TSSTA2 equ 0xfb47
TSRT equ 0xfb48
TSDAT equ 0xfb49
TSDATH equ 0xfb49
TSDATL equ 0xfb4a
TSTH00 equ 0xfb50
TSTH00H equ 0xfb50
TSTH00L equ 0xfb51
TSTH01 equ 0xfb52
TSTH01H equ 0xfb52
TSTH01L equ 0xfb53
TSTH02 equ 0xfb54
TSTH02H equ 0xfb54
TSTH02L equ 0xfb55
TSTH03 equ 0xfb56
TSTH03H equ 0xfb56
TSTH03L equ 0xfb57
TSTH04 equ 0xfb58
TSTH04H equ 0xfb58
TSTH04L equ 0xfb59
TSTH05 equ 0xfb5a
TSTH05H equ 0xfb5a
TSTH05L equ 0xfb5b
TSTH06 equ 0xfb5c
TSTH06H equ 0xfb5c
TSTH06L equ 0xfb5d
TSTH07 equ 0xfb5e
TSTH07H equ 0xfb5e
TSTH07L equ 0xfb5f
TSTH08 equ 0xfb60
TSTH08H equ 0xfb60
TSTH08L equ 0xfb61
TSTH09 equ 0xfb62
TSTH09H equ 0xfb62
TSTH09L equ 0xfb63
TSTH10 equ 0xfb64
TSTH10H equ 0xfb64
TSTH10L equ 0xfb65
TSTH11 equ 0xfb66
TSTH11H equ 0xfb66
TSTH11L equ 0xfb67
TSTH12 equ 0xfb68
TSTH12H equ 0xfb68
TSTH12L equ 0xfb69
TSTH13 equ 0xfb6a
TSTH13H equ 0xfb6a
TSTH13L equ 0xfb6b
TSTH14 equ 0xfb6c
TSTH14H equ 0xfb6c
TSTH14L equ 0xfb6d
TSTH15 equ 0xfb6e
TSTH15H equ 0xfb6e
TSTH15L equ 0xfb6f
