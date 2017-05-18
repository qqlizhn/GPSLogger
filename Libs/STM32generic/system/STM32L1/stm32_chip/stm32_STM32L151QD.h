//Autogenerated file
//MCU name: STM32L151QD
//MCU  xml: STM32L151QDHx.xml
//GPIO remap/alternate function xml: GPIO-STM32L162xD_gpio_v1_0_Modes.xml

/*
const stm32_port_pin_type variant_pin_list[] = {
  { GPIOA, GPIO_PIN_0 },
  { GPIOA, GPIO_PIN_1 },
  { GPIOA, GPIO_PIN_2 },
  { GPIOA, GPIO_PIN_3 },
  { GPIOA, GPIO_PIN_4 },
  { GPIOA, GPIO_PIN_5 },
  { GPIOA, GPIO_PIN_6 },
  { GPIOA, GPIO_PIN_7 },
  { GPIOA, GPIO_PIN_8 },
  { GPIOA, GPIO_PIN_9 },
  { GPIOA, GPIO_PIN_10},
  { GPIOA, GPIO_PIN_11},
  { GPIOA, GPIO_PIN_12},
  { GPIOA, GPIO_PIN_13},
  { GPIOA, GPIO_PIN_14},
  { GPIOA, GPIO_PIN_15},
  { GPIOB, GPIO_PIN_0 },
  { GPIOB, GPIO_PIN_1 },
  { GPIOB, GPIO_PIN_2 },
  { GPIOB, GPIO_PIN_3 },
  { GPIOB, GPIO_PIN_4 },
  { GPIOB, GPIO_PIN_5 },
  { GPIOB, GPIO_PIN_6 },
  { GPIOB, GPIO_PIN_7 },
  { GPIOB, GPIO_PIN_8 },
  { GPIOB, GPIO_PIN_9 },
  { GPIOB, GPIO_PIN_10},
  { GPIOB, GPIO_PIN_11},
  { GPIOB, GPIO_PIN_12},
  { GPIOB, GPIO_PIN_13},
  { GPIOB, GPIO_PIN_14},
  { GPIOB, GPIO_PIN_15},
  { GPIOC, GPIO_PIN_0 },
  { GPIOC, GPIO_PIN_1 },
  { GPIOC, GPIO_PIN_2 },
  { GPIOC, GPIO_PIN_3 },
  { GPIOC, GPIO_PIN_4 },
  { GPIOC, GPIO_PIN_5 },
  { GPIOC, GPIO_PIN_6 },
  { GPIOC, GPIO_PIN_7 },
  { GPIOC, GPIO_PIN_8 },
  { GPIOC, GPIO_PIN_9 },
  { GPIOC, GPIO_PIN_10},
  { GPIOC, GPIO_PIN_11},
  { GPIOC, GPIO_PIN_12},
  { GPIOC, GPIO_PIN_13},
  { GPIOC, GPIO_PIN_14},
  { GPIOC, GPIO_PIN_15},
  { GPIOD, GPIO_PIN_0 },
  { GPIOD, GPIO_PIN_1 },
  { GPIOD, GPIO_PIN_2 },
  { GPIOD, GPIO_PIN_3 },
  { GPIOD, GPIO_PIN_4 },
  { GPIOD, GPIO_PIN_5 },
  { GPIOD, GPIO_PIN_6 },
  { GPIOD, GPIO_PIN_7 },
  { GPIOD, GPIO_PIN_8 },
  { GPIOD, GPIO_PIN_9 },
  { GPIOD, GPIO_PIN_10},
  { GPIOD, GPIO_PIN_11},
  { GPIOD, GPIO_PIN_12},
  { GPIOD, GPIO_PIN_13},
  { GPIOD, GPIO_PIN_14},
  { GPIOD, GPIO_PIN_15},
  { GPIOE, GPIO_PIN_0 },
  { GPIOE, GPIO_PIN_1 },
  { GPIOE, GPIO_PIN_2 },
  { GPIOE, GPIO_PIN_3 },
  { GPIOE, GPIO_PIN_4 },
  { GPIOE, GPIO_PIN_5 },
  { GPIOE, GPIO_PIN_6 },
  { GPIOE, GPIO_PIN_7 },
  { GPIOE, GPIO_PIN_8 },
  { GPIOE, GPIO_PIN_9 },
  { GPIOE, GPIO_PIN_10},
  { GPIOE, GPIO_PIN_11},
  { GPIOE, GPIO_PIN_12},
  { GPIOE, GPIO_PIN_13},
  { GPIOE, GPIO_PIN_14},
  { GPIOE, GPIO_PIN_15},
  { GPIOF, GPIO_PIN_0 },
  { GPIOF, GPIO_PIN_1 },
  { GPIOF, GPIO_PIN_2 },
  { GPIOF, GPIO_PIN_3 },
  { GPIOF, GPIO_PIN_4 },
  { GPIOF, GPIO_PIN_5 },
  { GPIOF, GPIO_PIN_6 },
  { GPIOF, GPIO_PIN_7 },
  { GPIOF, GPIO_PIN_8 },
  { GPIOF, GPIO_PIN_9 },
  { GPIOF, GPIO_PIN_11},
  { GPIOF, GPIO_PIN_12},
  { GPIOF, GPIO_PIN_13},
  { GPIOF, GPIO_PIN_14},
  { GPIOF, GPIO_PIN_15},
  { GPIOG, GPIO_PIN_0 },
  { GPIOG, GPIO_PIN_1 },
  { GPIOG, GPIO_PIN_2 },
  { GPIOG, GPIO_PIN_3 },
  { GPIOG, GPIO_PIN_4 },
  { GPIOG, GPIO_PIN_5 },
  { GPIOG, GPIO_PIN_9 },
  { GPIOG, GPIO_PIN_10},
  { GPIOG, GPIO_PIN_12},
  { GPIOG, GPIO_PIN_13},
  { GPIOG, GPIO_PIN_14},
  { GPIOH, GPIO_PIN_0 },
  { GPIOH, GPIO_PIN_1 },
  { GPIOH, GPIO_PIN_2 },
};
*/

/*
enum {
   PA0 ,
   PA1 ,
   PA2 ,
   PA3 ,
   PA4 ,
   PA5 ,
   PA6 ,
   PA7 ,
   PA8 ,
   PA9 ,
   PA10,
   PA11,
   PA12,
   PA13,
   PA14,
   PA15,
   PB0 ,
   PB1 ,
   PB2 ,
   PB3 ,
   PB4 ,
   PB5 ,
   PB6 ,
   PB7 ,
   PB8 ,
   PB9 ,
   PB10,
   PB11,
   PB12,
   PB13,
   PB14,
   PB15,
   PC0 ,
   PC1 ,
   PC2 ,
   PC3 ,
   PC4 ,
   PC5 ,
   PC6 ,
   PC7 ,
   PC8 ,
   PC9 ,
   PC10,
   PC11,
   PC12,
   PC13,
   PC14,
   PC15,
   PD0 ,
   PD1 ,
   PD2 ,
   PD3 ,
   PD4 ,
   PD5 ,
   PD6 ,
   PD7 ,
   PD8 ,
   PD9 ,
   PD10,
   PD11,
   PD12,
   PD13,
   PD14,
   PD15,
   PE0 ,
   PE1 ,
   PE2 ,
   PE3 ,
   PE4 ,
   PE5 ,
   PE6 ,
   PE7 ,
   PE8 ,
   PE9 ,
   PE10,
   PE11,
   PE12,
   PE13,
   PE14,
   PE15,
   PF0 ,
   PF1 ,
   PF2 ,
   PF3 ,
   PF4 ,
   PF5 ,
   PF6 ,
   PF7 ,
   PF8 ,
   PF9 ,
   PF11,
   PF12,
   PF13,
   PF14,
   PF15,
   PG0 ,
   PG1 ,
   PG2 ,
   PG3 ,
   PG4 ,
   PG5 ,
   PG9 ,
   PG10,
   PG12,
   PG13,
   PG14,
   PH0 ,
   PH1 ,
   PH2 ,
NUM_PINS,
};
*/

// --------------------ADC--------------------

// --------------------I2C--------------------

const stm32_af_pin_list_type chip_af_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_6  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_8  , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_10 , GPIO_AF4_I2C2  }, 
}; 

const stm32_af_pin_list_type chip_af_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_7  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_9  , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_11 , GPIO_AF4_I2C2  }, 
}; 

// --------------------I2S--------------------
#define STM32_CHIP_HAS_I2S

const stm32_af_pin_list_type chip_af_i2s_ck [] = {
//I2S2
    { SPI2  , GPIOB, GPIO_PIN_13 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOD, GPIO_PIN_1  , GPIO_AF5_SPI2  }, 
//I2S3
    { SPI3  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_10 , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_i2s_mck [] = {
//I2S2
    { SPI2  , GPIOC, GPIO_PIN_6  , GPIO_AF5_SPI2  }, 
//I2S3
    { SPI3  , GPIOC, GPIO_PIN_7  , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_i2s_sd [] = {
//I2S2
    { SPI2  , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOD, GPIO_PIN_4  , GPIO_AF5_SPI2  }, 
//I2S3
    { SPI3  , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_12 , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_i2s_ws [] = {
//I2S2
    { SPI2  , GPIOB, GPIO_PIN_12 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOD, GPIO_PIN_0  , GPIO_AF5_SPI2  }, 
//I2S3
    { SPI3  , GPIOA, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOA, GPIO_PIN_15 , GPIO_AF6_SPI3  }, 
}; 

// --------------------SDIO--------------------
#define STM32_CHIP_HAS_SDIO

const stm32_af_pin_list_type chip_af_sdio_ck [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_12 , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_cmd [] = {
//SDIO
    { SDIO  , GPIOD, GPIO_PIN_2  , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d0 [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_8  , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d1 [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_9  , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d2 [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_10 , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d3 [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_11 , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d4 [] = {
//SDIO
    { SDIO  , GPIOB, GPIO_PIN_8  , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d5 [] = {
//SDIO
    { SDIO  , GPIOB, GPIO_PIN_9  , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d6 [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_6  , GPIO_AF12_SDIO }, 
}; 

const stm32_af_pin_list_type chip_af_sdio_d7 [] = {
//SDIO
    { SDIO  , GPIOC, GPIO_PIN_7  , GPIO_AF12_SDIO }, 
}; 

// --------------------SPI--------------------

const stm32_af_pin_list_type chip_af_spi_miso [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_6  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOA, GPIO_PIN_11 , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_4  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOE, GPIO_PIN_14 , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_14 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOD, GPIO_PIN_3  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_11 , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_mosi [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_7  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOA, GPIO_PIN_12 , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_5  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOE, GPIO_PIN_15 , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOD, GPIO_PIN_4  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_12 , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_nss [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_4  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOA, GPIO_PIN_15 , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOE, GPIO_PIN_12 , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_12 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOD, GPIO_PIN_0  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOA, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOA, GPIO_PIN_15 , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_sck [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_5  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_3  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOE, GPIO_PIN_13 , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_13 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOD, GPIO_PIN_1  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_10 , GPIO_AF6_SPI3  }, 
}; 

// --------------------TIM--------------------

// --------------------TIM1--------------------

// --------------------TIMX--------------------

// --------------------USART--------------------

const stm32_af_pin_list_type chip_af_usart_rx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_10 , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_7  , GPIO_AF7_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_3  , GPIO_AF7_USART2}, 
    { USART2, GPIOD, GPIO_PIN_6  , GPIO_AF7_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_11 , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_11 , GPIO_AF7_USART3}, 
    { USART3, GPIOD, GPIO_PIN_9  , GPIO_AF7_USART3}, 
}; 

const stm32_af_pin_list_type chip_af_usart_tx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_9  , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_6  , GPIO_AF7_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_2  , GPIO_AF7_USART2}, 
    { USART2, GPIOD, GPIO_PIN_5  , GPIO_AF7_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_10 , GPIO_AF7_USART3}, 
    { USART3, GPIOC, GPIO_PIN_10 , GPIO_AF7_USART3}, 
    { USART3, GPIOD, GPIO_PIN_8  , GPIO_AF7_USART3}, 
}; 

const stm32_chip_adc1_channel_type chip_adc1_channel[] = {
    { GPIOA, GPIO_PIN_0  , ADC_CHANNEL_0  }, 
    { GPIOA, GPIO_PIN_1  , ADC_CHANNEL_1  }, 
    { GPIOA, GPIO_PIN_2  , ADC_CHANNEL_2  }, 
    { GPIOA, GPIO_PIN_3  , ADC_CHANNEL_3  }, 
    { GPIOA, GPIO_PIN_4  , ADC_CHANNEL_4  }, 
    { GPIOA, GPIO_PIN_5  , ADC_CHANNEL_5  }, 
    { GPIOA, GPIO_PIN_6  , ADC_CHANNEL_6  }, 
    { GPIOA, GPIO_PIN_7  , ADC_CHANNEL_7  }, 
    { GPIOB, GPIO_PIN_0  , ADC_CHANNEL_8  }, 
    { GPIOB, GPIO_PIN_1  , ADC_CHANNEL_9  }, 
    { GPIOC, GPIO_PIN_0  , ADC_CHANNEL_10 }, 
    { GPIOC, GPIO_PIN_1  , ADC_CHANNEL_11 }, 
    { GPIOC, GPIO_PIN_2  , ADC_CHANNEL_12 }, 
    { GPIOC, GPIO_PIN_3  , ADC_CHANNEL_13 }, 
    { GPIOC, GPIO_PIN_4  , ADC_CHANNEL_14 }, 
    { GPIOC, GPIO_PIN_5  , ADC_CHANNEL_15 }, 
    { GPIOB, GPIO_PIN_12 , ADC_CHANNEL_18 }, 
    { GPIOB, GPIO_PIN_13 , ADC_CHANNEL_19 }, 
    { GPIOB, GPIO_PIN_14 , ADC_CHANNEL_20 }, 
    { GPIOB, GPIO_PIN_15 , ADC_CHANNEL_21 }, 
    { GPIOE, GPIO_PIN_7  , ADC_CHANNEL_22 }, 
    { GPIOE, GPIO_PIN_8  , ADC_CHANNEL_23 }, 
    { GPIOE, GPIO_PIN_9  , ADC_CHANNEL_24 }, 
    { GPIOE, GPIO_PIN_10 , ADC_CHANNEL_25 }, 
    { GPIOF, GPIO_PIN_6  , ADC_CHANNEL_27 }, 
    { GPIOF, GPIO_PIN_7  , ADC_CHANNEL_28 }, 
    { GPIOF, GPIO_PIN_8  , ADC_CHANNEL_29 }, 
    { GPIOF, GPIO_PIN_9  , ADC_CHANNEL_30 }, 
};

const stm32_clock_freq_list_type chip_clock_freq_list[] = {
    {I2C1  , HAL_RCC_GetPCLK1Freq },  
    {I2C2  , HAL_RCC_GetPCLK1Freq },  
    {SPI2  , HAL_RCC_GetPCLK1Freq },  
    {SPI3  , HAL_RCC_GetPCLK1Freq },  
    {USART2, HAL_RCC_GetPCLK1Freq },  
    {USART3, HAL_RCC_GetPCLK1Freq },  

    {SPI1  , HAL_RCC_GetPCLK2Freq },  
    {USART1, HAL_RCC_GetPCLK2Freq },  
};

