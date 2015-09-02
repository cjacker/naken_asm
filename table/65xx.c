/**
 *  naken_asm assembler.
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2010-2015 by Michael Kohn, Joe Davisson
 *
 * 65816 by Joe Davisson
 *
 */

#include "table/65xx.h"

struct _table_65xx table_65xx[] =
{
  { "adc", M65XX_ADC, OP_NONE },
  { "and", M65XX_AND, OP_NONE },
  { "asl", M65XX_ASL, OP_NONE },
  { "bcc", M65XX_BCC, OP_RELATIVE },
  { "bcs", M65XX_BCS, OP_RELATIVE },
  { "beq", M65XX_BEQ, OP_RELATIVE },
  { "bit", M65XX_BIT, OP_NONE },
  { "bmi", M65XX_BMI, OP_RELATIVE },
  { "bne", M65XX_BNE, OP_RELATIVE },
  { "bpl", M65XX_BPL, OP_RELATIVE },
  { "brk", M65XX_BRK, OP_NONE },
  { "bvc", M65XX_BVC, OP_RELATIVE },
  { "bvs", M65XX_BVS, OP_RELATIVE },
  { "clc", M65XX_CLC, OP_NONE },
  { "cld", M65XX_CLD, OP_NONE },
  { "cli", M65XX_CLI, OP_NONE },
  { "clv", M65XX_CLV, OP_NONE },
  { "cmp", M65XX_CMP, OP_NONE },
  { "cpx", M65XX_CPX, OP_NONE },
  { "cpy", M65XX_CPY, OP_NONE },
  { "dec", M65XX_DEC, OP_NONE },
  { "dex", M65XX_DEX, OP_NONE },
  { "dey", M65XX_DEY, OP_NONE },
  { "eor", M65XX_EOR, OP_NONE },
  { "inc", M65XX_INC, OP_NONE },
  { "inx", M65XX_INX, OP_NONE },
  { "iny", M65XX_INY, OP_NONE },
  { "jmp", M65XX_JMP, OP_NONE },
  { "jsr", M65XX_JSR, OP_NONE },
  { "lda", M65XX_LDA, OP_NONE },
  { "ldx", M65XX_LDX, OP_NONE },
  { "ldy", M65XX_LDY, OP_NONE },
  { "lsr", M65XX_LSR, OP_NONE },
  { "nop", M65XX_NOP, OP_NONE },
  { "ora", M65XX_ORA, OP_NONE },
  { "pha", M65XX_PHA, OP_NONE },
  { "php", M65XX_PHP, OP_NONE },
  { "pla", M65XX_PLA, OP_NONE },
  { "plp", M65XX_PLP, OP_NONE },
  { "rol", M65XX_ROL, OP_NONE },
  { "ror", M65XX_ROR, OP_NONE },
  { "rti", M65XX_RTI, OP_NONE },
  { "rts", M65XX_RTS, OP_NONE },
  { "sbc", M65XX_SBC, OP_NONE },
  { "sec", M65XX_SEC, OP_NONE },
  { "sed", M65XX_SED, OP_NONE },
  { "sei", M65XX_SEI, OP_NONE },
  { "sta", M65XX_STA, OP_NONE },
  { "stx", M65XX_STX, OP_NONE },
  { "sty", M65XX_STY, OP_NONE },
  { "tax", M65XX_TAX, OP_NONE },
  { "tay", M65XX_TAY, OP_NONE },
  { "tsx", M65XX_TSX, OP_NONE },
  { "txa", M65XX_TXA, OP_NONE },
  { "txs", M65XX_TXS, OP_NONE },
  { "tya", M65XX_TYA, OP_NONE },
};

struct _table_65xx_opcodes table_65xx_opcodes[] =
{
  /* 0x00 */ { M65XX_BRK, OP_NONE, 0, 0 },
  /* 0x01 */ { M65XX_ORA, OP_X_INDIRECT8, 0, 0 },
  /* 0x02 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x03 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x04 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x05 */ { M65XX_ORA, OP_ADDRESS8, 0, 0 },
  /* 0x06 */ { M65XX_ASL, OP_ADDRESS8, 0, 0 },
  /* 0x07 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x08 */ { M65XX_PHP, OP_NONE, 0, 0 },
  /* 0x09 */ { M65XX_ORA, OP_IMMEDIATE, 0, 0 },
  /* 0x0A */ { M65XX_ASL, OP_NONE, 0, 0 },
  /* 0x0B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x0C */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x0D */ { M65XX_ORA, OP_ADDRESS16, 0, 0 },
  /* 0x0E */ { M65XX_ASL, OP_ADDRESS16, 0, 0 },
  /* 0x0F */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0x10 */ { M65XX_BPL, OP_RELATIVE, 0, 0 },
  /* 0x11 */ { M65XX_ORA, OP_INDIRECT8_Y, 0, 0 },
  /* 0x12 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x13 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x14 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x15 */ { M65XX_ORA, OP_INDEXED8_X, 0, 0 },
  /* 0x16 */ { M65XX_ASL, OP_INDEXED8_X, 0, 0 },
  /* 0x17 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x18 */ { M65XX_CLC, OP_NONE, 0, 0 },
  /* 0x19 */ { M65XX_ORA, OP_INDEXED16_Y, 0, 0 },
  /* 0x1A */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x1B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x1C */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x1D */ { M65XX_ORA, OP_INDEXED16_X, 0, 0 },
  /* 0x1E */ { M65XX_ASL, OP_INDEXED16_X, 0, 0 },
  /* 0x1F */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0x20 */ { M65XX_JSR, OP_ADDRESS16, 0, 0 },
  /* 0x21 */ { M65XX_AND, OP_X_INDIRECT8, 0, 0 },
  /* 0x22 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x23 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x24 */ { M65XX_BIT, OP_ADDRESS8, 0, 0 },
  /* 0x25 */ { M65XX_AND, OP_ADDRESS8, 0, 0 },
  /* 0x26 */ { M65XX_ROL, OP_ADDRESS8, 0, 0 },
  /* 0x27 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x28 */ { M65XX_PLP, OP_NONE, 0, 0 },
  /* 0x29 */ { M65XX_AND, OP_IMMEDIATE, 0, 0 },
  /* 0x2A */ { M65XX_ROL, OP_NONE, 0, 0 },
  /* 0x2B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x2C */ { M65XX_BIT, OP_ADDRESS16, 0, 0 },
  /* 0x2D */ { M65XX_AND, OP_ADDRESS16, 0, 0 },
  /* 0x2E */ { M65XX_ROL, OP_ADDRESS16, 0, 0 },
  /* 0x2F */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0x30 */ { M65XX_BMI, OP_RELATIVE, 0, 0 },
  /* 0x31 */ { M65XX_AND, OP_INDIRECT8_Y, 0, 0 },
  /* 0x32 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x33 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x34 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x35 */ { M65XX_AND, OP_INDEXED8_X, 0, 0 },
  /* 0x36 */ { M65XX_ROL, OP_INDEXED8_X, 0, 0 },
  /* 0x37 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x38 */ { M65XX_SEC, OP_NONE, 0, 0 },
  /* 0x39 */ { M65XX_AND, OP_INDEXED16_Y, 0, 0 },
  /* 0x3A */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x3B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x3C */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x3D */ { M65XX_AND, OP_INDEXED16_X, 0, 0 },
  /* 0x3E */ { M65XX_ROL, OP_INDEXED16_X, 0, 0 },
  /* 0x3F */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0x40 */ { M65XX_RTI, OP_NONE, 0, 0 },
  /* 0x41 */ { M65XX_EOR, OP_X_INDIRECT8, 0, 0 },
  /* 0x42 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x43 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x44 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x45 */ { M65XX_EOR, OP_ADDRESS8, 0, 0 },
  /* 0x46 */ { M65XX_LSR, OP_ADDRESS8, 0, 0 },
  /* 0x47 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x48 */ { M65XX_PHA, OP_NONE, 0, 0 },
  /* 0x49 */ { M65XX_EOR, OP_IMMEDIATE, 0, 0 },
  /* 0x4A */ { M65XX_LSR, OP_NONE, 0, 0 },
  /* 0x4B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x4C */ { M65XX_JMP, OP_ADDRESS16, 0, 0 },
  /* 0x4D */ { M65XX_EOR, OP_ADDRESS16, 0, 0 },
  /* 0x4E */ { M65XX_LSR, OP_ADDRESS16, 0, 0 },
  /* 0x4F */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0x50 */ { M65XX_BVC, OP_RELATIVE, 0, 0 },
  /* 0x51 */ { M65XX_EOR, OP_INDIRECT8_Y, 0, 0 },
  /* 0x52 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x53 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x54 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x55 */ { M65XX_EOR, OP_INDEXED8_X, 0, 0 },
  /* 0x56 */ { M65XX_LSR, OP_INDEXED8_X, 0, 0 },
  /* 0x57 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x58 */ { M65XX_CLI, OP_NONE, 0, 0 },
  /* 0x59 */ { M65XX_EOR, OP_INDEXED16_Y, 0, 0 },
  /* 0x5A */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x5B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x5C */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x5D */ { M65XX_EOR, OP_INDEXED16_X, 0, 0 },
  /* 0x5E */ { M65XX_LSR, OP_INDEXED16_X, 0, 0 },
  /* 0x5F */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0x60 */ { M65XX_RTS, OP_NONE, 0, 0 },
  /* 0x61 */ { M65XX_ADC, OP_X_INDIRECT8, 0, 0 },
  /* 0x62 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x63 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x64 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x65 */ { M65XX_ADC, OP_ADDRESS8, 0, 0 },
  /* 0x66 */ { M65XX_ROR, OP_ADDRESS8, 0, 0 },
  /* 0x67 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x68 */ { M65XX_PLA, OP_NONE, 0, 0 },
  /* 0x69 */ { M65XX_ADC, OP_IMMEDIATE, 0, 0 },
  /* 0x6A */ { M65XX_ROR, OP_NONE, 0, 0 },
  /* 0x6B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x6C */ { M65XX_JMP, OP_INDIRECT16, 0, 0 },
  /* 0x6D */ { M65XX_ADC, OP_ADDRESS16, 0, 0 },
  /* 0x6E */ { M65XX_ROR, OP_ADDRESS16, 0, 0 },
  /* 0x6F */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0x70 */ { M65XX_BVS, OP_RELATIVE, 0, 0 },
  /* 0x71 */ { M65XX_ADC, OP_INDIRECT8_Y, 0, 0 },
  /* 0x72 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x73 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x74 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x75 */ { M65XX_ADC, OP_INDEXED8_X, 0, 0 },
  /* 0x76 */ { M65XX_ROR, OP_INDEXED8_X, 0, 0 },
  /* 0x77 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x78 */ { M65XX_SEI, OP_NONE, 0, 0 },
  /* 0x79 */ { M65XX_ADC, OP_INDEXED16_Y, 0, 0 },
  /* 0x7A */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x7B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x7C */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x7D */ { M65XX_ADC, OP_INDEXED16_X, 0, 0 },
  /* 0x7E */ { M65XX_ROR, OP_INDEXED16_X, 0, 0 },
  /* 0x7F */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0x80 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x81 */ { M65XX_STA, OP_X_INDIRECT8, 0, 0 },
  /* 0x82 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x83 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x84 */ { M65XX_STY, OP_ADDRESS8, 0, 0 },
  /* 0x85 */ { M65XX_STA, OP_ADDRESS8, 0, 0 },
  /* 0x86 */ { M65XX_STX, OP_ADDRESS8, 0, 0 },
  /* 0x87 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x88 */ { M65XX_DEY, OP_NONE, 0, 0 },
  /* 0x89 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x8A */ { M65XX_TXA, OP_NONE, 0, 0 },
  /* 0x8B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x8C */ { M65XX_STY, OP_ADDRESS16, 0, 0 },
  /* 0x8D */ { M65XX_STA, OP_ADDRESS16, 0, 0 },
  /* 0x8E */ { M65XX_STX, OP_ADDRESS16, 0, 0 },
  /* 0x8F */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0x90 */ { M65XX_BCC, OP_RELATIVE, 0, 0 },
  /* 0x91 */ { M65XX_STA, OP_INDIRECT8_Y, 0, 0 },
  /* 0x92 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x93 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x94 */ { M65XX_STY, OP_INDEXED8_X, 0, 0 },
  /* 0x95 */ { M65XX_STA, OP_INDEXED8_X, 0, 0 },
  /* 0x96 */ { M65XX_STX, OP_INDEXED8_Y, 0, 0 },
  /* 0x97 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x98 */ { M65XX_TYA, OP_NONE, 0, 0 },
  /* 0x99 */ { M65XX_STA, OP_INDEXED16_Y, 0, 0 },
  /* 0x9A */ { M65XX_TXS, OP_NONE, 0, 0 },
  /* 0x9B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x9C */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x9D */ { M65XX_STA, OP_INDEXED16_X, 0, 0 },
  /* 0x9E */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x9F */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0xA0 */ { M65XX_LDY, OP_IMMEDIATE, 0, 0 },
  /* 0xA1 */ { M65XX_LDA, OP_X_INDIRECT8, 0, 0 },
  /* 0xA2 */ { M65XX_LDX, OP_IMMEDIATE, 0, 0 },
  /* 0xA3 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xA4 */ { M65XX_LDY, OP_ADDRESS8, 0, 0 },
  /* 0xA5 */ { M65XX_LDA, OP_ADDRESS8, 0, 0 },
  /* 0xA6 */ { M65XX_LDX, OP_ADDRESS8, 0, 0 },
  /* 0xA7 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xA8 */ { M65XX_TAY, OP_NONE, 0, 0 },
  /* 0xA9 */ { M65XX_LDA, OP_IMMEDIATE, 0, 0 },
  /* 0xAA */ { M65XX_TAX, OP_NONE, 0, 0 },
  /* 0xAB */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xAC */ { M65XX_LDY, OP_ADDRESS16, 0, 0 },
  /* 0xAD */ { M65XX_LDA, OP_ADDRESS16, 0, 0 },
  /* 0xAE */ { M65XX_LDX, OP_ADDRESS16, 0, 0 },
  /* 0xAF */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0xB0 */ { M65XX_BCS, OP_RELATIVE, 0, 0 },
  /* 0xB1 */ { M65XX_LDA, OP_INDIRECT8_Y, 0, 0 },
  /* 0xB2 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xB3 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xB4 */ { M65XX_LDY, OP_INDEXED8_X, 0, 0 },
  /* 0xB5 */ { M65XX_LDA, OP_INDEXED8_X, 0, 0 },
  /* 0xB6 */ { M65XX_LDX, OP_INDEXED8_Y, 0, 0 },
  /* 0xB7 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xB8 */ { M65XX_CLV, OP_NONE, 0, 0 },
  /* 0xB9 */ { M65XX_LDA, OP_INDEXED16_Y, 0, 0 },
  /* 0xBA */ { M65XX_TSX, OP_NONE, 0, 0 },
  /* 0xBB */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xBC */ { M65XX_LDY, OP_INDEXED16_X, 0, 0 },
  /* 0xBD */ { M65XX_LDA, OP_INDEXED16_X, 0, 0 },
  /* 0xBE */ { M65XX_LDX, OP_INDEXED16_Y, 0, 0 },
  /* 0xBF */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0xC0 */ { M65XX_CPY, OP_IMMEDIATE, 0, 0 },
  /* 0xC1 */ { M65XX_CMP, OP_X_INDIRECT8, 0, 0 },
  /* 0xC2 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xC3 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xC4 */ { M65XX_CPY, OP_ADDRESS8, 0, 0 },
  /* 0xC5 */ { M65XX_CMP, OP_ADDRESS8, 0, 0 },
  /* 0xC6 */ { M65XX_DEC, OP_ADDRESS8, 0, 0 },
  /* 0xC7 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xC8 */ { M65XX_INY, OP_NONE, 0, 0 },
  /* 0xC9 */ { M65XX_CMP, OP_IMMEDIATE, 0, 0 },
  /* 0xCA */ { M65XX_DEX, OP_NONE, 0, 0 },
  /* 0xCB */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xCC */ { M65XX_CPY, OP_ADDRESS16, 0, 0 },
  /* 0xCD */ { M65XX_CMP, OP_ADDRESS16, 0, 0 },
  /* 0xCE */ { M65XX_DEC, OP_ADDRESS16, 0, 0 },
  /* 0xCF */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0xD0 */ { M65XX_BNE, OP_RELATIVE, 0, 0 },
  /* 0xD1 */ { M65XX_CMP, OP_INDIRECT8_Y, 0, 0 },
  /* 0xD2 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xD3 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xD4 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xD5 */ { M65XX_CMP, OP_INDEXED8_X, 0, 0 },
  /* 0xD6 */ { M65XX_DEC, OP_INDEXED8_X, 0, 0 },
  /* 0xD7 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xD8 */ { M65XX_CLD, OP_NONE, 0, 0 },
  /* 0xD9 */ { M65XX_CMP, OP_INDEXED16_Y, 0, 0 },
  /* 0xDA */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xDB */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xDC */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xDD */ { M65XX_CMP, OP_INDEXED16_X, 0, 0 },
  /* 0xDE */ { M65XX_DEC, OP_INDEXED16_X, 0, 0 },
  /* 0xDF */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0xE0 */ { M65XX_CPX, OP_IMMEDIATE, 0, 0 },
  /* 0xE1 */ { M65XX_SBC, OP_X_INDIRECT8, 0, 0 },
  /* 0xE2 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xE3 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xE4 */ { M65XX_CPX, OP_ADDRESS8, 0, 0 },
  /* 0xE5 */ { M65XX_SBC, OP_ADDRESS8, 0, 0 },
  /* 0xE6 */ { M65XX_INC, OP_ADDRESS8, 0, 0 },
  /* 0xE7 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xE8 */ { M65XX_INX, OP_NONE, 0, 0 },
  /* 0xE9 */ { M65XX_SBC, OP_IMMEDIATE, 0, 0 },
  /* 0xEA */ { M65XX_NOP, OP_NONE, 0, 0 },
  /* 0xEB */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xEC */ { M65XX_CPX, OP_ADDRESS16, 0, 0 },
  /* 0xED */ { M65XX_SBC, OP_ADDRESS16, 0, 0 },
  /* 0xEE */ { M65XX_INC, OP_ADDRESS16, 0, 0 },
  /* 0xEF */ { M65XX_ERROR, OP_NONE, 0, 0 },

  /* 0xF0 */ { M65XX_BEQ, OP_RELATIVE, 0, 0 },
  /* 0xF1 */ { M65XX_SBC, OP_INDIRECT8_Y, 0, 0 },
  /* 0xF2 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xF3 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xF4 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xF5 */ { M65XX_SBC, OP_INDEXED8_X, 0, 0 },
  /* 0xF6 */ { M65XX_INC, OP_INDEXED8_X, 0, 0 },
  /* 0xF7 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xF8 */ { M65XX_SED, OP_NONE, 0, 0 },
  /* 0xF9 */ { M65XX_SBC, OP_INDEXED16_Y, 0, 0 },
  /* 0xFA */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xFB */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xFC */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xFD */ { M65XX_SBC, OP_INDEXED16_X, 0, 0 },
  /* 0xFE */ { M65XX_INC, OP_INDEXED16_X, 0, 0 },
  /* 0xFF */ { M65XX_ERROR, OP_NONE, 0, 0 }
};

