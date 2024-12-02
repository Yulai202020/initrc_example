gcc -static -o init init.c

chmod +x init

find . | cpio -H newc -o | gzip > initrd.gz