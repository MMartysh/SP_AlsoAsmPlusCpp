.586
.model flat,c
.data
K EQU 202d
.code
pl PROC
push ebp
mov ebp,esp
mov eax,dword ptr[ebp+16]
mov bl,4
mul bl 
add eax,dword ptr[ebp+8]
adc eax,0
add eax,dword ptr[ebp+12]
adc eax,0
sub eax,K
pop ebp
ret
pl ENDP
END
