/*
 * PCF_8574.h
 *
 *  Created on: 04-Oct-2022
 *      Author: Muhammad Asghar
 */

#ifndef INC_PCF_8574_H_
#define INC_PCF_8574_H_

#include <stdio.h>
#include <stdint.h>
#include <main.h>

// Pin Macros
#define P0 0
#define P1 1
#define P2 2
#define P3 3
#define P4 4
#define P5 5
#define P6 6
#define P7 7

// if more than one PCF8574 are connected
// Write addresses
#define WriteDevice0 0x40           // A0 = 0 |A1 = 0 |A2 = 0 |
#define WriteDevice1 0x42			// A0 = 1 |A1 = 0 |A2 = 0 |
#define WriteDevice2 0x44			//  ...
#define WriteDevice3 0x46			//  ...
#define WriteDevice4 0x48			//  ...
#define WriteDevice5 0x4A			//  ...
#define WriteDevice6 0x4C			//  ...
#define WriteDevice7 0x4E			// A0 = 1 |A1 = 1 |A2 = 1 |


// Read addresses
#define ReadDevice0 0x41            // A0 = 0 |A1 = 0 |A2 = 0 |
#define ReadDevice1 0x42			// A0 = 1 |A1 = 0 |A2 = 0 |
#define ReadDevice2 0x45			//  ...
#define ReadDevice3 0x47			//  ...
#define ReadDevice4 0x49			//  ...
#define ReadDevice5 0x4B			//  ...
#define ReadDevice6 0x4D			//  ...
#define ReadDevice7 0x4F			// A0 = 1 |A1 = 1 |A2 = 1 |


// General Macros
#define HIGH 1
#define LOW 0
#define SET HIGH
#define RESET LOW


//Requried APIs
void PCF8574_Pin_Write(I2C_HandleTypeDef I2CHandler, uint8_t PinNumber, uint8_t Value, uint8_t PCFNo);
uint8_t PCF8574_Pin_Read(I2C_HandleTypeDef I2CHandler, uint8_t PinNumber, uint8_t PCFNo);


#endif /* INC_PCF_8574_H_ */
