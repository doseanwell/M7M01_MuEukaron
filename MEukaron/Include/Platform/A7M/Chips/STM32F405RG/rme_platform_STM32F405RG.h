/******************************************************************************
Filename   : rme_platform_STM32F405RG.h
Author     : pry
Date       : 24/06/2017
Licence    : The Unlicense; see LICENSE for details.
Description: The configuration file for STM32F405RG.
******************************************************************************/

/* Defines *******************************************************************/
/* Generator *****************************************************************/
/* Are we using the generator in the first place? */
#define RME_GEN_ENABLE                                  RME_FALSE
/* Modifiable ****************************************************************/
/* The virtual memory start address for the kernel objects */
#define RME_KMEM_VA_START                               (0x10002000)
/* The size of the kernel object virtual memory */
#define RME_KMEM_SIZE                                   (0x6000)
/* The virtual memory start address for the virtual machines - If no VM is used, set to 0 */
#define RME_HYP_VA_START                                (0x20000000)
/* The size of the hypervisor reserved virtual memory */
#define RME_HYP_SIZE                                    (0x20000)
/* Kernel stack size and address */
#define RME_KMEM_STACK_ADDR                             (0x10000FF0)
/* The maximum number of preemption priority levels in the system.
 * This parameter must be divisible by the word length - 32 is usually sufficient */
#define RME_MAX_PREEMPT_PRIO                            (32)
/* Size of capability table */
#if(RME_GEN_ENABLE==RME_TRUE)
#define RME_A7M_BOOT_CAPTBL_SIZE                        (18)
#else
#define RME_A7M_BOOT_CAPTBL_SIZE                        (18)
#endif
/* Shared vector flag region address - always 512B memory for ARMv7-M */
#define RME_A7M_VECT_FLAG_ADDR                          (0x10007C00)
/* Shared interrupt flag region address - always 512B memory for ARMv7-M */
#define RME_A7M_EVT_FLAG_ADDR                           (0x10007E00)
/* Initial kenel object frontier limit */
#define RME_A7M_KMEM_BOOT_FRONTIER                      (0x10003000)
/* Init process's first thread's entry point address */
#define RME_A7M_INIT_ENTRY                              (0x08004001)
/* Init process's first thread's stack address */
#define RME_A7M_INIT_STACK                              (0x1000FFF0)
/* What is the NVIC priority grouping? */
#define RME_A7M_NVIC_GROUPING                           (RME_A7M_NVIC_GROUPING_P2S6)
/* What is the Systick value? - 10ms per tick*/
#define RME_A7M_SYSTICK_VAL                             (1680000)

/* Fixed *********************************************************************/
/* The granularity of kernel memory allocation, in bytes */
#define RME_KMEM_SLOT_ORDER                             (4)
/* Number of MPU regions available */
#define RME_A7M_MPU_REGIONS                             (8)
/* What is the FPU type? */
#define RME_A7M_FPU_TYPE                                (RME_A7M_FPU_FPV4)

/* Interrupt ****************************************************************/
#define WWDG_IRQHandler                                 IRQ0_Handler        /* Window WatchDog */
#define PVD_IRQHandler                                  IRQ1_Handler        /* PVD through EXTI Line detection */
#define TAMP_STAMP_IRQHandler                           IRQ2_Handler        /* Tamper and TimeStamp interrupts through the EXTI line */
#define RTC_WKUP_IRQHandler                             IRQ3_Handler        /* RTC Wakeup interrupt through the EXTI line */
#define FLASH_IRQHandler                                IRQ4_Handler        /* FLASH global */
#define RCC_IRQHandler                                  IRQ5_Handler        /* RCC global */
#define EXTI0_IRQHandler                                IRQ6_Handler        /* EXTI Line0 */
#define EXTI1_IRQHandler                                IRQ7_Handler        /* EXTI Line1 */
#define EXTI2_IRQHandler                                IRQ8_Handler        /* EXTI Line2 */
#define EXTI3_IRQHandler                                IRQ9_Handler        /* EXTI Line3 */

#define EXTI4_IRQHandler                                IRQ10_Handler       /* EXTI Line4 */
#define DMA1_Stream0_IRQHandler                         IRQ11_Handler       /* DMA1 Stream 0 global */
#define DMA1_Stream1_IRQHandler                         IRQ12_Handler       /* DMA1 Stream 1 global */
#define DMA1_Stream2_IRQHandler                         IRQ13_Handler       /* DMA1 Stream 2 global */
#define DMA1_Stream3_IRQHandler                         IRQ14_Handler       /* DMA1 Stream 3 global */
#define DMA1_Stream4_IRQHandler                         IRQ15_Handler       /* DMA1 Stream 4 global */
#define DMA1_Stream5_IRQHandler                         IRQ16_Handler       /* DMA1 Stream 5 global */
#define DMA1_Stream6_IRQHandler                         IRQ17_Handler       /* DMA1 Stream 6 global */
#define ADC_IRQHandler                                  IRQ18_Handler       /* ADC1, ADC2 and ADC3 global */
#define CAN1_TX_IRQHandler                              IRQ19_Handler       /* CAN1 TX */

#define CAN1_RX0_IRQHandler                             IRQ20_Handler       /* CAN1 RX0 */
#define CAN1_RX1_IRQHandler                             IRQ21_Handler       /* CAN1 RX1 */
#define CAN1_SCE_IRQHandler                             IRQ22_Handler       /* CAN1 SCE */
#define EXTI9_5_IRQHandler                              IRQ23_Handler       /* External Line[9:5] */
#define TIM1_BRK_TIM9_IRQHandler                        IRQ24_Handler       /* TIM1 Break interrupt and TIM9 global */
#define TIM1_UP_TIM10_IRQHandler                        IRQ25_Handler       /* TIM1 Update Interrupt and TIM10 global */
#define TIM1_TRG_COM_TIM11_IRQHandler                   IRQ26_Handler       /* TIM1 Trigger and Commutation Interrupt and TIM11 global */
#define TIM1_CC_IRQHandler                              IRQ27_Handler       /* TIM1 Capture Compare */
#define TIM2_IRQHandler                                 IRQ28_Handler       /* TIM2 global */
#define TIM3_IRQHandler                                 IRQ29_Handler       /* TIM3 global */

#define TIM4_IRQHandler                                 IRQ30_Handler       /* TIM4 global */
#define I2C1_EV_IRQHandler                              IRQ31_Handler       /* I2C1 Event */
#define I2C1_ER_IRQHandler                              IRQ32_Handler       /* I2C1 Error */
#define I2C2_EV_IRQHandler                              IRQ33_Handler       /* I2C2 Event */
#define I2C2_ER_IRQHandler                              IRQ34_Handler       /* I2C2 Error */
#define SPI1_IRQHandler                                 IRQ35_Handler       /* SPI1 global */
#define SPI2_IRQHandler                                 IRQ36_Handler       /* SPI2 global */
#define USART1_IRQHandler                               IRQ37_Handler       /* USART1 global */
#define USART2_IRQHandler                               IRQ38_Handler       /* USART2 global */
#define USART3_IRQHandler                               IRQ39_Handler       /* USART3 global */

#define EXTI15_10_IRQHandler                            IRQ40_Handler       /* External Line[15:10] */
#define RTC_Alarm_IRQHandler                            IRQ41_Handler       /* RTC Alarm (A and B) through EXTI Line */
#define OTG_FS_WKUP_IRQHandler                          IRQ42_Handler       /* USB OTG FS Wakeup through EXTI line */
#define TIM8_BRK_TIM12_IRQHandler                       IRQ43_Handler       /* TIM8 Break Interrupt and TIM12 global */
#define TIM8_UP_TIM13_IRQHandler                        IRQ44_Handler       /* TIM8 Update Interrupt and TIM13 global */
#define TIM8_TRG_COM_TIM14_IRQHandler                   IRQ45_Handler       /* TIM8 Trigger and Commutation Interrupt and TIM14 global */
#define TIM8_CC_IRQHandler                              IRQ46_Handler       /* TIM8 Capture Compare global */
#define DMA1_Stream7_IRQHandler                         IRQ47_Handler       /* DMA1 Stream7 */
#define FSMC_IRQHandler                                 IRQ48_Handler       /* FSMC global */
#define SDIO_IRQHandler                                 IRQ49_Handler       /* SDIO global */

#define TIM5_IRQHandler                                 IRQ50_Handler       /* TIM5 global */
#define SPI3_IRQHandler                                 IRQ51_Handler       /* SPI3 global */
#define UART4_IRQHandler                                IRQ52_Handler       /* UART4 global */
#define UART5_IRQHandler                                IRQ53_Handler       /* UART5 global */
#define TIM6_DAC_IRQHandler                             IRQ54_Handler       /* TIM6 global and DAC1&2 underrun error */
#define TIM7_IRQHandler                                 IRQ55_Handler       /* TIM7 global */
#define DMA2_Stream0_IRQHandler                         IRQ56_Handler       /* DMA2 Stream 0 global */
#define DMA2_Stream1_IRQHandler                         IRQ57_Handler       /* DMA2 Stream 1 global */
#define DMA2_Stream2_IRQHandler                         IRQ58_Handler       /* DMA2 Stream 2 global */
#define DMA2_Stream3_IRQHandler                         IRQ59_Handler       /* DMA2 Stream 3 global */

#define DMA2_Stream4_IRQHandler                         IRQ60_Handler       /* DMA2 Stream 4 global */
#define Reserved0_IRQHandler                            IRQ61_Handler       /* Reserved */
#define Reserved1_IRQHandler                            IRQ62_Handler       /* Reserved */
#define CAN2_TX_IRQHandler                              IRQ63_Handler       /* CAN2 TX */
#define CAN2_RX0_IRQHandler                             IRQ64_Handler       /* CAN2 RX0 */
#define CAN2_RX1_IRQHandler                             IRQ65_Handler       /* CAN2 RX1 */
#define CAN2_SCE_IRQHandler                             IRQ66_Handler       /* CAN2 SCE */
#define OTG_FS_IRQHandler                               IRQ67_Handler       /* USB OTG FS global */
#define DMA2_Stream5_IRQHandler                         IRQ68_Handler       /* DMA2 Stream 5 global */
#define DMA2_Stream6_IRQHandler                         IRQ69_Handler       /* DMA2 Stream 6 global */

#define DMA2_Stream7_IRQHandler                         IRQ70_Handler       /* DMA2 Stream 7 global */
#define USART6_IRQHandler                               IRQ71_Handler       /* USART6 global */
#define I2C3_EV_IRQHandler                              IRQ72_Handler       /* I2C3 event */
#define I2C3_ER_IRQHandler                              IRQ73_Handler       /* I2C3 error */
#define OTG_HS_EP1_OUT_IRQHandler                       IRQ74_Handler       /* USB OTG HS End Point 1 Out global */
#define OTG_HS_EP1_IN_IRQHandler                        IRQ75_Handler       /* USB OTG HS End Point 1 In global */
#define OTG_HS_WKUP_IRQHandler                          IRQ76_Handler       /* USB OTG HS Wakeup through EXTI */
#define OTG_HS_IRQHandler                               IRQ77_Handler       /* USB OTG HS global */
#define Reserved2_IRQHandler                            IRQ78_Handler       /* Reserved */
#define Reserved3_IRQHandler                            IRQ79_Handler       /* Reserved */

#define RNG_IRQHandler                                  IRQ80_Handler       /* RNG global */
#define FPU_IRQHandler                                  IRQ81_Handler       /* FPU global */

/* Preinitialization of critical hardware */
#define RME_A7M_LOW_LEVEL_PREINIT() \
do \
{ \
} \
while(0)

/* Other low-level initialization stuff - clock and serial */
#define RME_A7M_LOW_LEVEL_INIT() \
do \
{ \
} \
while(0)

/* This is for debugging output */
#define RME_A7M_PUTCHAR(CHAR) \
do \
{ \
    __RME_A7M_ITM_Putchar((rme_s8_t)(CHAR)); \
} \
while(0)
/* End Defines ***************************************************************/

/* End Of File ***************************************************************/

/* Copyright (C) Evo-Devo Instrum. All rights reserved ***********************/

