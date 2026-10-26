.section .text
main:
  LA t0, 0x10000000
  PUTS t0
  LA t1, 0x10000010
  PUTS t1
  LI t2, 7
  PUTI t2
  HALT

.section .strings
  0x10000000 "Hello World\n"
  0x10000010 "Goodbye World\n"
