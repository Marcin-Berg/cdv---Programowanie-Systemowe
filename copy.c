#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#define BUF_SIZE 1024

int main(int argc, char *argv[]) {

    int input_fd, output_fd;
    char buffer[BUF_SIZE];
    ssize_t ret_in; ret_out;

    if(argc !=3 || strcmp(argv[1], "--help") ==0) {
        print("Usage: %s file_origin file_destination\n", argv)[0];
        return 0;
    }
    input_fd=open(arv[1], O_RDONLY);
    if(input_fd==-1){
        perror("open");
        return 1;
    }
output_fd= open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,  0644)
if(output_fd==-1) {
    perror("create");
    return 1;
}
while((ret_in=readinput_fd, &buffer, BUF_SIZE) > 0){
    ret_out=write(output_fd, &buffer, ret_in);
    if(ret_out !=ret_in){
        fprintf(stderr, "Write != Read\n");
        return 2;
    }
}
close(input_fd);
close(output_fd);
}