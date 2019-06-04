/*
 * main.c
 *
 *  Created on: 2019 Apr 18 22:57:52
 *  Author: Lukas
 */




#include "main.h"                //Declarations from DAVE Code Generation (includes SFR declaration)

/**

 * @brief main() - Application entry point
 *
 * <b>Details of function</b><br>
 * This routine is the application entry point. It is invoked by the device startup code. It is responsible for
 * invoking the APP initialization dispatcher routine - DAVE_Init() and hosting the place-holder for user application
 * code.
 */


int main(void)
{
	/* init all peripherials */
	 DAVE_STATUS_t status = DAVE_Init();
	 spi_init();
	delay_ms(500);
	oled_init();
	bme_init();

	oled_demo();
  /* Placeholder for user application code. The while loop below can be replaced with user application code. */
  while(1U)
  {
  }
}
