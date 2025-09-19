#ifndef BEJ_DEC_H
#define BEJ_DEC_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <assert.h>
#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

  /**
   * @brief
   * This function contains logic of decode BEJ into readable JSON
   * @param file
   */
  void bej_decoder (const char *file);

  /**
   * @brief
   * This function contains reading for debug program
   * @param file
   */
  void read_bin (const char *file);

  /**
   * @brief
   * Struct for params argc, argv
   */
  struct param
  {
    const char *in_json;
    const char *out_bej;
    const char *dictionary;
    const char *annotation;
  };

  /**
   * @brief
   *
   * @param argc
   * @param argv
   * @return struct param
   */
  struct param read_param (int argc, char **argv);

#ifdef __cplusplus
}
#endif

#endif // BEJ_DEC_H
