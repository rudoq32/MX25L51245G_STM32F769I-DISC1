/*******************************************************************************
 * QSPI_if.h
 * Commands for communication with memory
 ******************************************************************************/
#ifndef QSPI_IF_H_
#define QSPI_IF_H_
#include "stm32f7xx_hal.h"

uint8_t MCU_Init(uint8_t memMappedMode);
uint8_t QSPI_WriteEnable(void);
uint8_t QSPI_EraseSector(uint32_t EraseStartAddress,uint32_t EraseEndAddress);
uint8_t QSPI_AutoPollingMemReady(void);
uint8_t QSPI_Configuration(void);
uint8_t QSPI_WriteMemory(uint8_t* buffer, uint32_t address, uint32_t buffer_size);
uint8_t QSPI_EnableMemoryMappedMode(void);
uint8_t QSPI_ResetChip(void);

//memory page and sector size -verify inside datasheet
#define MEMORY_SECTOR_SIZE 0x1000
#define MEMORY_PAGE_SIZE 0x100

#define QSPI_DUMMY_CYCLES	6

#define WRITE_ENABLE_CMD 0x06
#define READ_STATUS_REG_CMD 0x05
#define WRITE_STATUS_REG_CMD 0x01
#define SECTOR_ERASE_CMD 0x20
#define QUAD_IN_FAST_PROG_CMD 0x38
#define READ_CONFIGURATION_REG_CMD 0x15
#define QUAD_OUT_FAST_READ_CMD 0x6B
#define QPI_ENABLE_CMD 0x35
#define DUMMY_CLOCK_CYCLES_READ_QUAD 10
#define RESET_ENABLE_CMD 0x66
#define RESET_EXECUTE_CMD 0x99
#define QSPI_OK ((uint8_t)0x00)
#define QSPI_ERROR ((uint8_t)0x01)
#define QSPI_BUSY ((uint8_t)0x02)
#define QSPI_NOT_SUPPORTED ((uint8_t)0x04)
#define QSPI_SUSPENDED ((uint8_t)0x08)

#endif
