/* Copyright 2019 SiFive, Inc */
/* SPDX-License-Identifier: Apache-2.0 */
#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>

int main() {

  __asm__ __volatile__ (
  " li	ra,1\n\t"
  " li	sp,2\n\t"
  " li	gp,3\n\t"
  " li	tp,4\n\t"
  " li	t0,5\n\t"
  " li	t1,6\n\t"
  " li	t2,7\n\t"
  " li	s0,8\n\t"
  " li	s1,9\n\t"
  " li	a0,10\n\t"
  " li	a1,11\n\t"
  " li	a2,12\n\t"
  " li	a3,13\n\t"
  " li	a4,14\n\t"
  " li	a5,15\n\t"
  " li	a6,16\n\t"
  " li	a7,17\n\t"
  " li	s2,18\n\t"
  " li	s3,19\n\t"
  " li	s4,20\n\t"
  " li	s5,21\n\t"
  " li	s6,22\n\t"
  " li	s7,23\n\t"
  " li	s8,24\n\t"
  " li	s9,25\n\t"
  " li	s10,26\n\t"
  " li	s11,27\n\t"
  " li	t3,28\n\t"
  " li	t4,29\n\t"
  " li	t5,30\n\t"
  " li	t6,31\n\t"
  );
  __asm__ ("wfi");
  __asm__ __volatile__ (
  " bne	ra,zero,reset_failed\n\t"
  " bne	sp,zero,reset_failed\n\t"
  " bne	gp,zero,reset_failed\n\t"
  " bne	tp,zero,reset_failed\n\t"
  " bne	t0,zero,reset_failed\n\t"
  " bne	t1,zero,reset_failed\n\t"
  " bne	t2,zero,reset_failed\n\t"
  " bne	s0,zero,reset_failed\n\t"
  " bne	s1,zero,reset_failed\n\t"
  " bne	a0,zero,reset_failed\n\t"
  " bne	a1,zero,reset_failed\n\t"
  " bne	a2,zero,reset_failed\n\t"
  " bne	a3,zero,reset_failed\n\t"
  " bne	a4,zero,reset_failed\n\t"
  " bne	a5,zero,reset_failed\n\t"
  " bne	a6,zero,reset_failed\n\t"
  " bne	a7,zero,reset_failed\n\t"
  " bne	s2,zero,reset_failed\n\t"
  " bne	s3,zero,reset_failed\n\t"
  " bne	s4,zero,reset_failed\n\t"
  " bne	s5,zero,reset_failed\n\t"
  " bne	s6,zero,reset_failed\n\t"
  " bne	s7,zero,reset_failed\n\t"
  " bne	s8,zero,reset_failed\n\t"
  " bne	s9,zero,reset_failed\n\t"
  " bne	s10,zero,reset_failed\n\t"
  " bne	s11,zero,reset_failed\n\t"
  " bne	t3,zero,reset_failed\n\t"
  " bne	t4,zero,reset_failed\n\t"
  " bne	t5,zero,reset_failed\n\t"
  " bne	t6,zero,reset_failed\n\t"
  );

  volatile uint32_t *end = (uint32_t)0x4000;
  *end = 0x5555;

  __asm__ __volatile__ (
  " reset_failed: \n\t"
  );

  *end = 0x3333;

  return 0;
}

