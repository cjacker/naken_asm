; All instructions related to bit addressed by number
; it should compiled successfully with naken_asm and asm51.
.8051

P0 EQU 80H

ORG 0000H
MAIN:
  JBC 80H.7, TEST
  JBC 87H, TEST
  JBC P0.7, TEST

  JB  80H.7, TEST
  JB  87H, TEST
  JB  P0.7, TEST

  JNB 80H.7, TEST
  JNB 87H, TEST
  JNB P0.7, TEST

  ORL C, 80H.7
  ORL C, 87H
  ORL C, P0.7

  ANL C, 80H.7
  ANL C, 87H
  ANL C, P0.7

  ORL C, /80H.7
  ORL C, /87H
  ORL C, /P0.7

  ANL C, /80H.7
  ANL C, /87H
  ANL C, /P0.7
  
  MOV 80H.7, C
  MOV 87H, C
  ;MOV P0.7, C

  MOV C, 80H.7
  MOV C, 87H
  MOV C, P0.7

  CPL 80H.7
  CPL 87H
  CPL P0.7
  
  CLR 80H.7
  CLR 87H
  CLR P0.7
  
  SETB 80H.7
  SETB 87H
  SETB P0.7

  SJMP $

  TEST:
    NOP
END
