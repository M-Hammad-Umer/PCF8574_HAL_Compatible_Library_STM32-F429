/*
 * PCF_8574.c
 *
 *  Created on: 04-Oct-2022
 *      Author: Muhammad Asghar
 */
#include "PCF_8574.h"
#include <stdio.h>
#include <stdint.h>
#include <main.h>
static uint8_t tempReg = 0x00;


void PCF8574_Pin_Write(I2C_HandleTypeDef I2CHandler, uint8_t PinNumber, uint8_t Value, uint8_t PCFNo)
{
	if(PCFNo == 0)
	{
		if(Value == HIGH)
		{
			tempReg |= (1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice0, &tempReg, 1, 30);
		}
		else if(Value == LOW)
		{
			tempReg &= ~(1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice0, &tempReg, 1, 30);
		}
	}

	if(PCFNo == 1)
	{
		if(Value == HIGH)
		{
			tempReg |= (1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice1, &tempReg, 1, 30);
		}
		else if(Value == LOW)
		{
			tempReg &= ~(1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice1, &tempReg, 1, 30);
		}
	}

	if(PCFNo == 2)
	{
		if(Value == HIGH)
		{
			tempReg |= (1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice2, &tempReg, 1, 30);
		}
		else if(Value == LOW)
		{
			tempReg &= ~(1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice2, &tempReg, 1, 30);
		}
	}

	if(PCFNo == 3)
	{
		if(Value == HIGH)
		{
			tempReg |= (1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice3, &tempReg, 1, 30);
		}
		else if(Value == LOW)
		{
			tempReg &= ~(1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice3, &tempReg, 1, 30);
		}
	}

	if(PCFNo == 4)
	{
		if(Value == HIGH)
		{
			tempReg |= (1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice4, &tempReg, 1, 30);
		}
		else if(Value == LOW)
		{
			tempReg &= ~(1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice4, &tempReg, 1, 30);
		}
	}

	if(PCFNo == 5)
	{
		if(Value == HIGH)
		{
			tempReg |= (1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice5, &tempReg, 1, 30);
		}
		else if(Value == LOW)
		{
			tempReg &= ~(1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice5, &tempReg, 1, 30);
		}
	}

	if(PCFNo == 6)
	{
		if(Value == HIGH)
		{
			tempReg |= (1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice6, &tempReg, 1, 30);
		}
		else if(Value == LOW)
		{
			tempReg &= ~(1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice6, &tempReg, 1, 30);
		}
	}

	if(PCFNo == 7)
	{
		if(Value == HIGH)
		{
			tempReg |= (1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice7, &tempReg, 1, 30);
		}
		else if(Value == LOW)
		{
			tempReg &= ~(1 << PinNumber);
			HAL_I2C_Master_Transmit(&I2CHandler, WriteDevice7, &tempReg, 1, 30);
		}
	}
}





uint8_t PCF8574_Pin_Read(I2C_HandleTypeDef I2CHandler, uint8_t PinNumber, uint8_t PCFNo)
{
	uint8_t tempReg;
	if(PCFNo == 0)
	{
		HAL_I2C_Master_Receive(&I2CHandler, ReadDevice0, &tempReg, sizeof(tempReg), 30);
		return ((tempReg >> PinNumber) & 0x01);
	}

	if(PCFNo == 1)
	{
		HAL_I2C_Master_Receive(&I2CHandler, ReadDevice1, &tempReg, sizeof(tempReg), 30);
		return ((tempReg >> PinNumber) & 0x01);
	}

	if(PCFNo == 2)
	{
		HAL_I2C_Master_Receive(&I2CHandler, ReadDevice2, &tempReg, sizeof(tempReg), 30);
		return ((tempReg >> PinNumber) & 0x01);
	}

	if(PCFNo == 3)
	{
		HAL_I2C_Master_Receive(&I2CHandler, ReadDevice3, &tempReg, sizeof(tempReg), 30);
		return ((tempReg >> PinNumber) & 0x01);
	}

	if(PCFNo == 4)
	{
		HAL_I2C_Master_Receive(&I2CHandler, ReadDevice4, &tempReg, sizeof(tempReg), 30);
		return ((tempReg >> PinNumber) & 0x01);
	}

	if(PCFNo == 5)
	{
		HAL_I2C_Master_Receive(&I2CHandler, ReadDevice5, &tempReg, sizeof(tempReg), 30);
		return ((tempReg >> PinNumber) & 0x01);
	}

	if(PCFNo == 6)
	{
		HAL_I2C_Master_Receive(&I2CHandler, ReadDevice6, &tempReg, sizeof(tempReg), 30);
		return ((tempReg >> PinNumber) & 0x01);
	}

	if(PCFNo == 7)
	{
		HAL_I2C_Master_Receive(&I2CHandler, ReadDevice7, &tempReg, sizeof(tempReg), 30);
		return ((tempReg >> PinNumber) & 0x01);
	}

}


