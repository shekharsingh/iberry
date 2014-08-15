/*
 * Raspberry Pi __GPIO_H__ file
 */
 
 #include "raspberry.h"
 
 #define RASPBERRY_GPIO_BASE		(RASPBERRY_PERI_BASE + 0x200000)

 #define RASP_GPIO_FUNC_OFFSET			0x00000004
 #define RASPBERRY_GPIO_FUNC_REG0	(RASPBERRY_GPIO_BASE + RASP_GPIO_FUNC_OFFSET)
 #define RASPBERRY_GPIO_FUNC_REG1	(RASPBERRY_GPIO_FUNC_REG0 + RASP_GPIO_FUNC_OFFSET)
 #define RASPBERRY_GPIO_FUNC_REG2	(RASPBERRY_GPIO_FUNC_REG1 + RASP_GPIO_FUNC_OFFSET)
 #define RASPBERRY_GPIO_FUNC_REG3	(RASPBERRY_GPIO_FUNC_REG2 + RASP_GPIO_FUNC_OFFSET)
 #define RASPBERRY_GPIO_FUNC_REG4	(RASPBERRY_GPIO_FUNC_REG3 + RASP_GPIO_FUNC_OFFSET)
 #define RASPBERRY_GPIO_FUNC_REG5	(RASPBERRY_GPIO_FUNC_REG4 + RASP_GPIO_FUNC_OFFSET)

 #define RASP_GPIO_OUT_SET_REG0		(RASPBERRY_PERI_BASE + 0x20001C)
 #define RASP_GPIO_OUT_SET_REG1		(RASPBERRY_PERI_BASE + 0x200020)
 
 #define RASP_GPIO_OUT_CLR_REG0		(RASPBERRY_PERI_BASE + 0x200028)
 #define RASP_GPIO_OUT_CLR_REG1		(RASPBERRY_PERI_BASE + 0x20002C)

 #define RASP_GPIO_PIN_LVL_REG0		(RASPBERRY_PERI_BASE + 0x200034)
 #define RASP_GPIO_PIN_LVL_REG1		(RASPBERRY_PERI_BASE + 0x200038)

 #define RASP_PIN_EVT_DET_STAT_REG0	(RASPBERRY_PERI_BASE + 0x200040)
 #define RASP_PIN_EVT_DET_STAT_REG1	(RASPBERRY_PERI_BASE + 0x200044)

 #define RASP_RISE_EDGE_DET_EN_REG0	(RASPBERRY_PERI_BASE + 0x20004C)
 #define RASP_RISE_EDGE_DET_EN_REG1	(RASPBERRY_PERI_BASE + 0x200050)
 
 #define RASP_FALL_EDGE_DET_EN_REG0	(RASPBERRY_PERI_BASE + 0x200058)
 #define RASP_FALL_EDGE_DET_EN_REG1	(RASPBERRY_PERI_BASE + 0x20005C)

 #define RASP_HIGH_DET_EN_REG0		(RASPBERRY_PERI_BASE + 0x200064)
 #define RASP_HIGH_DET_EN_REG1		(RASPBERRY_PERI_BASE + 0x200068)

 #define RASP_LOW_DET_EN_REG0		(RASPBERRY_PERI_BASE + 0x200070)
 #define RASP_LOW_DET_EN_REG1		(RASPBERRY_PERI_BASE + 0x200074)

 #define RASP_ASYNC_RISE_DET_REG0	(RASPBERRY_PERI_BASE + 0x20007C)
 #define RASP_ASYNC_RISE_DET_REG1	(RASPBERRY_PERI_BASE + 0x200080)

 #define RASP_ASYNC_FALL_DET_REG0	(RASPBERRY_PERI_BASE + 0x200088)
 #define RASP_ASYNC_FALL_DET_REG1	(RASPBERRY_PERI_BASE + 0x20008C)
 
 #define RASP_GPIO_PULL_PUD_EN_REG	(RASPBERRY_PERI_BASE + 0x200094)
 #define RASP_GPIO_PUD_CLK_EN_REG0	(RASPBERRY_PERI_BASE + 0x200098)
 #define RASP_GPIO_PUD_CLK_EN_REG1	(RASPBERRY_PERI_BASE + 0x20009C)

 #define GPIO_IN 					0x000
 #define GPIO_OUT 					0x001
 #define FUNC_0 					0x100
 #define FUNC_1 					0x101
 #define FUNC_2 					0x110
 #define FUNC_3 					0x111
 #define FUNC_4 					0x011
 #define FUNC_5 					0x010

 #define GPIO_SET_BIT(n) 			1<<n // Need redo - this is incomplete
 #define GPIO_CLR_BIT(n) 			1<<n // Need redo - this is incomplete
 #define GPIO_HIGH_LVL(n) 			1<<n // Need redo - this is incomplete
 #define GPIO_LOW_LVL(n) 			0<<n // Need redo - this is incomplete
 #define GPIO_EVT_DET(n) 			1<<n // Need redo - this is incomplete
 #define GPIO_RISE_DET(n)			1<<n // Need redo - this is incomplete
 #define GPIO_FALL_DET(n)			1<<n // Need redo - this is incomplete
 #define GPIO_PULL_NONE				(0x0<<0)
 #define GPIO_PULL_DOWN				(0x1<<0)
 #define GPIO_PULL_UP				(0x1<<1)

 #define GPIO_PIN_0 	(1<<0)
 #define GPIO_PIN_1 	(1<<1)
 #define GPIO_PIN_2 	(1<<2)
 #define GPIO_PIN_3 	(1<<3)
 #define GPIO_PIN_4 	(1<<4)
 #define GPIO_PIN_5 	(1<<5)
 #define GPIO_PIN_6 	(1<<6)
 #define GPIO_PIN_7 	(1<<7)
 #define GPIO_PIN_8 	(1<<8)
 #define GPIO_PIN_9 	(1<<9)
 #define GPIO_PIN_10 	(1<<10)
 #define GPIO_PIN_11 	(1<<11)
 #define GPIO_PIN_12 	(1<<12)
 #define GPIO_PIN_13 	(1<<13)
 #define GPIO_PIN_14 	(1<<14)
 #define GPIO_PIN_15 	(1<<15)
 #define GPIO_PIN_16 	(1<<16)
 #define GPIO_PIN_17 	(1<<17)
 #define GPIO_PIN_18 	(1<<18)
 #define GPIO_PIN_19 	(1<<19)
 #define GPIO_PIN_20 	(1<<20)
 #define GPIO_PIN_21 	(1<<21)
 #define GPIO_PIN_22 	(1<<22)
 #define GPIO_PIN_23 	(1<<23)
 #define GPIO_PIN_24 	(1<<24)
 #define GPIO_PIN_25 	(1<<25)
 #define GPIO_PIN_26 	(1<<26)
 #define GPIO_PIN_27 	(1<<27)
 #define GPIO_PIN_28 	(1<<28)
 #define GPIO_PIN_29 	(1<<29)
 #define GPIO_PIN_30 	(1<<30)
 #define GPIO_PIN_31 	(1<<31)

 #define GPIO_PIN_32 	(1<<0)
 #define GPIO_PIN_33 	(1<<1)
 #define GPIO_PIN_34 	(1<<2)
 #define GPIO_PIN_35 	(1<<3)
 #define GPIO_PIN_36 	(1<<4)
 #define GPIO_PIN_37 	(1<<5)
 #define GPIO_PIN_38 	(1<<6)
 #define GPIO_PIN_39 	(1<<7)
 #define GPIO_PIN_40 	(1<<9)
 #define GPIO_PIN_41 	(1<<10)
 #define GPIO_PIN_42 	(1<<11)
 #define GPIO_PIN_43 	(1<<12)
 #define GPIO_PIN_44 	(1<<13)
 #define GPIO_PIN_45 	(1<<14)
 /* These GPIOs are Internal - not exposed to user */
 #define GPIO_PIN_46 	(1<<15)
 #define GPIO_PIN_47 	(1<<16)
 #define GPIO_PIN_48 	(1<<17)
 #define GPIO_PIN_49 	(1<<18)
 #define GPIO_PIN_50 	(1<<19)
 #define GPIO_PIN_51 	(1<<20)
 #define GPIO_PIN_52 	(1<<21)
 #define GPIO_PIN_53 	(1<<22)

 int gpio_write(int reg, int val);
 int gpio_read(int reg, int val);

 int rasp_gpio_pud(int gpio, int pull);