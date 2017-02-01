mov    eax,DWORD PTR [rbp-0x10]
cmp    eax,DWORD PTR [rbp-0xc]
jae    0x400a67

cmp    DWORD PTR [rbp-0x10],0x0
je     0x400a5b

mov    edx,DWORD PTR [rbp-0x10]
mov    eax,edx
add    eax,eax
add    eax,edx
mov    DWORD PTR [rbp-0x8],eax
mov    eax,DWORD PTR [rbp-0xc]
not    eax
mov    DWORD PTR [rbp-0x4],eax
mov    edx,DWORD PTR [rbp-0x4]
mov    eax,DWORD PTR [rbp-0x8]
add    eax,edx
cmp    eax,0x42
jne    0x400a4f

mov    edi,0x4879cf
call   _puts

sat
(model 
  (define-fun b () (_ BitVec 32)
    #x3f33dfaf)
  (define-fun a () (_ BitVec 32)
    #x15114aa6)
  (define-fun d () (_ BitVec 32)
    #xc0cc2050)
  (define-fun c () (_ BitVec 32)
    #x3f33dff2)
)

2A22954C
