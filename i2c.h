/*
 * __I2C_H__ 
 * Raspberry BSC(broadcomm serial controller)
 * compatible with I2C protocol
 * Fast mode - 400Kbps
 * supports clock streching
 * supports both 7bit & 10bit addressing
 * BSC has 8 memory mapped 32 bit registers
 * 3 BSC master
 * BSC2 is HDMI - not to be used by user program
 */

/* Controller addresses */
 #define RASPBERRY_BSC_0		(RASPBERRY_PERI_BASE + 0x205000) 
 #define RASPBERRY_BSC_1		(RASPBERRY_PERI_BASE + 0x804000)
 #define RASPBERRY_BSC_2		(RASPBERRY_PERI_BASE + 0x805000)	/* HDMI */

/* I2C RegMap */
 #define BSC_CTRL_OFFSET		0x0
 #define BSC_STATUS_OFFSET		0x4
 #define BSC_DATA_LEN_OFFSET	0x8
 #define BSC_SLAVE_ADDR_OFFSET	0xC
 #define BSC_FIFO_OFFSET		0x10
 #define BSC_CLK_DIV_OFFSET		0x14
 #define BSC_DATA_DELAY_OFFSET	0x18
 #define BSC_CLK_STRECH_OFFSET	0x1C

