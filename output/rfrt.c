#include <stdio.h> #include <fcntl.h>

#include <unistd.h>

#define BUFFER SIZE 1024

int main() {

char buffer [BUFFER SIZE];

int readFd, writeFd;

readFd = open("source.txt", ORDONLY);

writeFd = open("destination.txt", O_WRONLY | O_CREAT | O.TRUNC, 0644);

ssize_t bytesRead;

while ((bytesRead = read (readFd, buffer, BUFFER SIZE)) > 0) {

write (writeFd, buffer, bytesRead);

}

close (readFd);

close (writeFd);

}

return 0;