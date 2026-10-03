.text 
.global array 

array: 
  xorlq %eax, %eax 
  cmpq $0, %rsi 
  jle done
loop: 
  addl(%rdi),%eax 
  addq $4, %rdi 
  decq %rsi 
  jnz loop 
done: 
  ret 
.section .note.GNU-stack,"",@progbits
