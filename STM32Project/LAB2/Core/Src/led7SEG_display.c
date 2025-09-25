/*
 * display7SEG.c
 *
 *  Created on: Sep 24, 2025
 *      Author: khanh
 */

#include "led7SEG_display.h"

  // a b c d e f g  (bit0 = a, bit1 = b, ...)
  uint8_t seg_table[10] = {
      0xC0, // 0 -> 1100 0000
      0xF9, // 1 -> 1111 1001
      0xA4, // 2 -> 1010 0100
      0xB0, // 3 -> 1011 0000
      0x99, // 4 -> 1001 1001
      0x92, // 5 -> 1001 0010
      0x82, // 6 -> 1000 0010
      0xF8, // 7 -> 1111 1000
      0x80, // 8 -> 1000 0000
      0x90  // 9 -> 1001 0000
  };

  void display7SEG(int num) {
      uint8_t pattern = seg_table[num];

      HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, (pattern & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET); // a
      HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, (pattern & 0x02) ? GPIO_PIN_SET : GPIO_PIN_RESET); // b
      HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, (pattern & 0x04) ? GPIO_PIN_SET : GPIO_PIN_RESET); // c
      HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, (pattern & 0x08) ? GPIO_PIN_SET : GPIO_PIN_RESET); // d
      HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, (pattern & 0x10) ? GPIO_PIN_SET : GPIO_PIN_RESET); // e
      HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, (pattern & 0x20) ? GPIO_PIN_SET : GPIO_PIN_RESET); // f
      HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, (pattern & 0x40) ? GPIO_PIN_SET : GPIO_PIN_RESET); // g
}
