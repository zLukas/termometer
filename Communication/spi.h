/*
 * spi.h
 *
 *  Created on: May 25, 2019
 *      Author: Lukas
 */

#include "usic_spi.h"
#include "io_digital.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct{
	uint8 (*exchange_data)(uint8*, uint8*,uint8, uint8);
	void (*set_pin)(DIGITAL_IO_t*);
	void (*reset_pin)(DIGITAL_IO_t*);
}spi_functions;

int8 spi_send(uint8 register_address, uint8* data_to_send, uint8 data_count);
int8 spi_read(uint8 register_address, uint8* data_to_exchange, uint8 data_count);