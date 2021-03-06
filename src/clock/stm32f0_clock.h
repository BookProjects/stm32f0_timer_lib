#ifndef STM32F0_CLOCK_H
#define STM32F0_CLOCK_H

#include "clock/clock.h"
#include "rcc/stm32f0_rcc.h"
#include "processor/stm32f0/peripheral.h"

#define CLOCK_READY_TIMEOUT 2000

typedef enum {
    HSI_CLK = 0,
    HSE_CLK = 1,
    PLL_CLK = 2
} CLK_SRC;

err_t clock_set_src(CLK_SRC src);
err_t clock_power_peripheral(BOOL on, Peripheral p);

void clock_clear_interrupts();

/*
 * There are multiple clocks that can be enabled. The possible system clocks:
 * - HSI
 * - HSE
 * - PLL (w/ HSI or HSE source)
 *
 * There are also the alternate functionality clocks
 * - LSI
 * - LSE
 * - HSI14
 *
 */
// Clock Configuration, also enables turning on / off
err_t clock_configure_HSI(BOOL on, S_DATA trim);
err_t clock_configure_HSE(BOOL on, S_DATA bypass_oscillator, S_DATA fallback_to_hsi);
err_t clock_configure_PLL(BOOL on, PLL_MULT_FACT multiplier, BOOL use_hse, BOOL divide_hse);

err_t clock_configure_HSI14(BOOL on, S_DATA trim, S_DATA adc_disable);
err_t clock_configure_LSE(BOOL on, S_DATA bypass_oscillator);

// Bus Clock Configuration, can not turn off
err_t clock_configure_APB(PCLK_PRESCALER prescaler);
err_t clock_configure_AHB(HCLK_PRESCALER prescaler);

#endif  // STM32F0_CLOCK_H
