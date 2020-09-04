#!/bin/bash
DATECMD=/bin/date
START="2020-09-02"
NUM=101

out=$(for ((i=0; i<$NUM; i++)); do  
#   ${DATECMD} -d "${START} +${i} days" +"%a %D %m/%d" 
   ${DATECMD} -d "${START} +${i} days" +"%m/%d" 
done | while read input; do
  echo -n "Testing $input: "
  solution="$(echo $input | ./reference)"
  answer="$(echo $input | ./assignment-1)"
  if [[ "$solution" == "$answer" ]]; then
     echo "CORRECT"
  else 
     echo "WRONG: answer for $input is suppose to be: '$solution' not '$answer'"
  fi
done) 

correct=$(echo "$out" | grep 'CORRECT$' | wc -l)
total=$NUM
echo "$out"
echo "score: $correct/$total"