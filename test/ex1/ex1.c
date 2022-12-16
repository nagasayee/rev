/*
 * ex1.c
 *
 * RISC-V ISA: RV32I
 *
 * Copyright (C) 2017-2020 Tactical Computing Laboratories, LLC
 * All Rights Reserved
 * contact@tactcomplabs.com
 *
 * See LICENSE in the top level directory for licensing details
 *
 */

#include <stdlib.h>

int main(int argc, char **argv){
  int arr[2];
  arr[0] = 0;
  arr[0] = 1;
  arr[1] = arr[0];
  arr[1] = 0;
  arr[1] = 1;
  return 0;
}
