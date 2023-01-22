#!/bin/bash
echo "1. Use P0 as bit addr by number:"
for asm in *-fail.asm;
do 
  ../../../naken_asm $asm;
done >error

failed_num=$(grep "Unexpected token 'P0'" error|wc -l)

if [ $failed_num -eq 12 ]; then
  echo "OK, Test pass"
else
  echo "NO, Test failed"
fi

rm -f error

# replace P0 with P0.0 and test again, all should get compiled.
echo "2. Change P0 to P0.0 and compile test:"
for asm in *-fail.asm;
do
  sed -i 's/P0$/P0.0/g' $asm;
  sed -i 's/P0,/P0.0,/g' $asm;
  ../../../naken_asm $asm -o $asm.hex >/dev/null 2>&1;
  sed -i 's/P0.0$/P0/g' $asm;
  sed -i 's/P0.0,/P0,/g' $asm;
done

hex_count=$(ls *.hex|wc -l)
if [ $hex_count -eq 12 ]; then
  echo "OK, Test pass"
else
  echo "NO, Test failed"
fi

rm -f *.hex

# restore the failed source
