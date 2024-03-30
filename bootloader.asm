bits 32
org 0x7C00
section .text
 global _start 
section .bss
  IAmADodo: resb 10
_start:
  PUSH IAmADodo
  JMP 0xfff 
