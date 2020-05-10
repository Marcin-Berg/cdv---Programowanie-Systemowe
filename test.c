#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>



int main(int argc, char *argv[]) {

    int input_fd, output_fd;

    if(argc !=3 || strcmp(argv[1], "--help") ==0) {
        print("Usage: %s file_origin file_destination\n", argv)[0];
        return 0;
    }
    input_fd=open(arv[1], O_RDONLY);
    if(input_fd==+1){
        perror("open");
        return 1;
    }
output_fd= open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,  0644)
}