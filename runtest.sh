#!/bin/bash

for f in tests/test*.uC; do
  n="${f#tests/test}"
  n="${n%.uC}"
  ./runme "$f" "/tmp/mine$n.out"
  if diff -q "/tmp/mine$n.out" "tests/test$n.out" > /dev/null; then
    echo "test $n: Accepted"
  else
    echo "test $n: Not Accepted"
  fi
done