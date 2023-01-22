#!/bin/bash

# built it with a51
echo "=========== Build bit_addr_by_num.asm with a51 ==========="
echo ""
echo ""

sed -i 's/^.8051/;.8051/g' bit_addr_by_num.asm
sed -i 's/^P0/;P0/g' bit_addr_by_num.asm

a51 bit_addr_by_num.asm && \
bl51 bit_addr_by_num.OBJ to bit_addr_by_num.OMF && \
oh51 BIT_ADDR_BY_NUM.OMF && \
mv BIT_ADDR_BY_NUM.hex test_bit_a51.hex

rm -f bit_addr_by_num.OBJ 
rm -f BIT_ADDR_BY_NUM.OMF 
rm -f bit_addr_by_num.LST
rm -f BIT_ADDR_BY_NUM.M51

# built it with naken_asm
echo "=========== Build bit_addr_by_num.asm with naken_asm ==========="
echo ""
echo ""

sed -i 's/^;.8051/.8051/g' bit_addr_by_num.asm
sed -i 's/^;P0/P0/g' bit_addr_by_num.asm

../../naken_asm bit_addr_by_num.asm -o test_bit_naken.hex 

# use naken_util to disasm a51 hex and naken hex
echo "=========== disasm the result from a51 and naken_asm and diff  ==========="
echo ""
../../naken_util -disasm -8051 test_bit_a51.hex > test_bit_a51.disasm
../../naken_util -disasm -8051 test_bit_naken.hex > test_bit_naken.disasm
sed -i 's/test_bit_a51/test_bit/g' test_bit_a51.disasm
sed -i 's/test_bit_naken/test_bit/g' test_bit_naken.disasm
diff_result=$(diff -Nur test_bit_a51.disasm test_bit_naken.disasm)

if test -z "$diff_result"; then
  echo "Test pass successfully"
else
  echo "Test failed:"
  echo $diff_result
fi

# clean
rm -f test_bit_a51.hex
rm -f test_bit_naken.hex
rm -f test_bit_a51.disasm
rm -f test_bit_naken.disasm
