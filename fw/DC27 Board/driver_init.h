/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef DRIVER_INIT_INCLUDED
#define DRIVER_INIT_INCLUDED

#include "atmel_start_pins.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <hal_atomic.h>
#include <hal_delay.h>
#include <hal_gpio.h>
#include <hal_init.h>
#include <hal_io.h>
#include <hal_sleep.h>
#include <hpl_crya.h>

#include <hal_rand_sync.h>

#include <nvmctrl_lite.h>

#include <hal_timer.h>
#include <hpl_tc_base.h>

#include <hal_i2c_m_sync.h>

#include <hal_delay.h>
#include <hal_ext_irq.h>

extern struct rand_sync_desc   RAND_0;
extern struct timer_descriptor TIMER_0;

extern struct i2c_m_sync_desc I2C_0;

void RAND_0_CLOCK_init(void);
void RAND_0_init(void);

void    FLASH_0_CLOCK_init(void);
int32_t FLASH_0_init(void);

void I2C_0_CLOCK_init(void);
void I2C_0_init(void);
void I2C_0_PORT_init(void);

void delay_driver_init(void);

/**
 * \brief Perform system initialization, initialize pins and clocks for
 * peripherals
 */
void system_init(void);

#ifdef __cplusplus
}
#endif
#endif // DRIVER_INIT_INCLUDED
