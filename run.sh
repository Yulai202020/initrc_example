kernel=vmlinuz-virt
initrd=initrd.gz

qemu-system-x86_64 \
    -kernel $kernel \
    -initrd $initrd \
    -m 512M \
    -append "console=ttyS0" \
    -nographic