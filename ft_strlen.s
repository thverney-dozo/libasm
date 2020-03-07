    global _ft_strlen

_ft_strlen  : 
                mov     rax, 0                  ;   initialisation rax to 0
                jmp     while                   ;   jump to while label
while       :
                cmp     BYTE[rdi + rax], 0      ;   compare first argument rdi at rax index with null byte
                je      return                  ;   if == jump to return label
                inc     rax                     ;   rax = rax + 1
                jmp     while                   ;   jump to while as a loop

return      :
                ret                             ;   return rax as a number length of the string