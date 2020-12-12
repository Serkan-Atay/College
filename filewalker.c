#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>

int main () {
  DIR *dp;
  struct dirent *ep;

  dp = opendir ("./");
  if (dp != NULL) {
      while (ep = readdir(dp))
        puts (ep->d_name);
      (void) closedir (dp);
    } else perror ("Couldn't open the directory");

  return 0;
}
