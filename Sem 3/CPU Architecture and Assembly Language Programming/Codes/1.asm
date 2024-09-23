
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h      ; When the prog loads in starts with this memory address

mov Ax, 1044h
add ax, 0x 1222
mov var1, Ax

ret

var1 dw 0




