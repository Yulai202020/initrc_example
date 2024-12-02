#include <stdio.h>
#include <unistd.h>
#include <sys/mount.h>
#include <string.h>

int main() {
    printf("\n\n\n\nHello world\n\n\n\n");
    sleep(1000000);
    // mount("sysfs", "/sys", "", MS_SHARED, "");
    // mount("devfs", "/dev", "", MS_SHARED, "");
    // mount("procfs", "/proc", "", MS_SHARED, "");
    // mount("/dev/vda1", "/newdir", "", MS_SHARED, "");

    // chroot("/newdir");

    char dir[1024] = "/";
    while (1) {
        printf("%s: ", dir);
        char str[1024];
        fgets(str, 1024, stdin);
        str[strcspn(str, "\n")] = '\0';

        if (strcmp(str, "touch") == 0) {
            printf("file was created\n");
            FILE *fptr;
            fptr = fopen("filename.txt", "w");
            fclose(fptr);
        } else if (strcmp(str, "read") == 0) {
            FILE *fptr;

            fptr = fopen("1", "r");
            char myString[100];
            fgets(myString, 100, fptr);
        }
        else {
            continue;
        }
    }
}