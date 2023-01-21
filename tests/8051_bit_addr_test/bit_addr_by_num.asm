; All instructions related to bit addressed by number
;.8051
ORG 0000H
MAIN:
	JBC 80H.7, TEST
	JBC 87H, TEST

	JB  80H.7, TEST
	JB  87H, TEST

    JNB 80H.7, TEST
    JNB 87H, TEST

    ORL C, 80H.7
    ORL C, 87H

    ANL C, 80H.7
    ANL C, 87H

	ORL C, /80H.7
    ORL C, /87H

	ANL C, /80H.7
    ANL C, /87H
	
	MOV 80H.7, C
    MOV 87H, C

	MOV C, 80H.7
    MOV C, 87H

	CPL 80H.7
    CPL 87H
	
	CLR 80H.7
    CLR 87H
	
	SETB 80H.7
    SETB 87H

	SJMP $

    TEST:
	NOP
END
