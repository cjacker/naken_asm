.8051

ORG 0000H
MAIN:
  ;B1 is not bit addressable.
  JBC 0B1H.0, TEST

  SJMP $

  TEST:
    NOP
END
