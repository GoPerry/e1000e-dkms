cmd_/root/e1000e-3.4.2.4/src/e1000e.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds  --build-id  -o /root/e1000e-3.4.2.4/src/e1000e.ko /root/e1000e-3.4.2.4/src/e1000e.o /root/e1000e-3.4.2.4/src/e1000e.mod.o ;  true
