#include "bej_dec.h"
#include <stdlib.h>

struct param
read_param (int argc, char **argv)
{
  int opt;

  while (opt = getopt (argc, argv, ""))
    {
      switch (opt)
        {
        default:
          fprintf (stderr, "Usage: \n");
          exit (EXIT_FAILURE);
        }
    }
}