    .globl startup_msg
startup_msg:
    pushq %rbp
    movq %rsp, %rbp
    # Print message via puts
    leaq message(%rip), %rdi
    call puts
    popq %rbp
    ret

    .section .rodata
message:
    .string "=== Program starting up (from assembly) ==="

