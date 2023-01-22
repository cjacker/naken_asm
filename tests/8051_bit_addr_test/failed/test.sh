#!/bin/bash
for asm in *-fail.asm;
do 
  ../../../naken_asm $asm;
done >error

failed_num=$(grep "Unexpected token 'P0'" error|wc -l)

if [ $failed_num -eq 12 ]; then
  echo "test pass"
else
  echo "test failed"
fi

rm -f error

