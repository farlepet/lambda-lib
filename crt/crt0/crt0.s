# CRT0.s

.global start
start:
	push %ebp
	mov  %esp, %ebp

	# TODO: This can DEFINITELY be done more effeciently
	mov  12(%ebp), %eax # envp
	push %eax
	mov  8(%ebp), %eax  # argv
	push %eax
	mov  4(%ebp), %eax  # argc
	push %eax

	call main

prog_exit:
	push %eax      # Argument array (return value)
	mov %esp, %ebx # Pointer to argument array
	mov $3, %eax   # SYSCALL_EXIT
	int $0xFF      # Syscall

.inf_loop:         # Shouldn't get here with the syscall
	hlt
	jmp .inf_loop
