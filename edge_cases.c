#!/bin/bash

touch resultado

echo "-------------------------------------------------" >> resultado
echo "-------------- 1 edge case ----------------------" >> resultado
echo "-------------------------------------------------" >> resultado

echo "ls -@ -1 -A -a -B -b -C -c -d -e -F -f -g -G -H -h -i -k -L -l -m -n -o -O -P -q -R -r -S -s -T -t -u -U -v -W -w -x" | ./hsh >> resultado
echo "-------------------------------------------------" >> resultado
echo "ls -@ -1 -A -a -B -b -C -c -d -e -F -f -g -G -H -h -i -k -L -l -m -n -o -O -P -q -R -r -S -s -T -t -u -U -v -W -w -x" | sh >> resultado

echo "">> resultado
echo "">> resultado
echo "">> resultado

echo "-------------------------------------------------" >> resultado
echo "-------------- 2 edge case ----------------------" >> resultado
echo "-------------------------------------------------" >> resultado
echo "/bin/ls" | ./hsh >> resultado
echo "-------------------------------------------------" >> resultado
echo "/bin/ls" | sh >> resultado

echo "">> resultado
echo "">> resultado
echo "">> resultado

echo "-------------------------------------------------" >> resultado
echo "-------------- 3 edge case ----------------------">> resultado
echo "-------------------------------------------------" >> resultado

echo "/bin/ls -l" | ./hsh >> resultado
echo "-------------------------------------------------" >> resultado
echo "/bin/ls -l" | sh >> resultado

echo "">> resultado
echo "">> resultado
echo "">> resultado

echo "-------------------------------------------------" >> resultado
echo "-------------- 4 edge case ----------------------">> resultado
echo "-------------------------------------------------" >> resultado

echo "/bin/ls-l" | ./hsh 2>> resultado
echo "-------------------------------------------------" >> resultado
echo "/bin/ls-l" | sh 2>> resultado

echo "">> resultado
echo "">> resultado
echo "">> resultado

echo "-------------------------------------------------" >> resultado
echo "-------------- 5 edge case ----------------------">> resultado
echo "-------------------------------------------------" >> resultado


echo "^[[D^[[D^[[D" | ./hsh 2>> resultado
echo "-------------------------------------------------" >> resultado
echo "^[[D^[[D^[[D" | sh 2>> resultado

echo "">> resultado
echo "">> resultado
echo "">> resultado

echo "-------------------------------------------------" >> resultado
echo "-------------- 6 edge case ----------------------">> resultado
echo "-------------------------------------------------" >> resultado


echo "^[[C^[[C^[[C^[[C" | ./hsh 2>> resultado
echo "-------------------------------------------------" >> resultado
echo "^[[C^[[C^[[C^[[C" | sh 2>> resultado

echo "">> resultado
echo "">> resultado
echo "">> resultado

echo "-------------------------------------------------" >> resultado
echo "-------------- 8 edge case ----------------------">> resultado
echo "-------------------------------------------------" >> resultado


echo "sl" | ./hsh 2>> resultado
echo "-------------------------------------------------" >> resultado
echo "sh: 21: sl: not found" | sh 2>> resultado

echo "">> resultado
echo "">> resultado
echo "">> resultado

echo "-------------------------------------------------" >> resultado
echo "-------------- 9 edge case ----------------------">> resultado
echo "-------------------------------------------------">> resultado

echo "ls 			-la				" | ./hsh >> resultado
echo "-------------------------------------------------" >> resultado
echo "ls 			-la				" | sh >> resultado

echo "">> resultado
echo "">> resultado
echo "">> resultado

echo "-------------------------------------------------" >> resultado
echo "-------------- 10 edge case ----------------------">> resultado
echo "-------------------------------------------------" >> resultado

echo "ls -l 			/tmp" | ./hsh >> resultado
echo "-------------------------------------------------" >> resultado
echo "ls -l 			/tmp " | sh >> resultado

