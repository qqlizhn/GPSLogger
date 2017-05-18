//Autogenerated file
//MCU name: STM32F101T4
//MCU  xml: STM32F101T(4-6)Ux.xml
//GPIO remap/alternate function xml: GPIO-STM32F103x4_gpio_v1_0_Modes.xml

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
  { GPIOD, GPIO_PIN_0 },
  { GPIOD, GPIO_PIN_1 },
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
   PD0 ,
   PD1 ,
NUM_PINS,
};
*/
static void AF_NO_REMAP (void) { }
static void AF__HAL_AFIO_REMAP_CAN1_2(void) { __HAL_AFIO_REMAP_CAN1_2(); }
static void AF__HAL_AFIO_REMAP_CAN1_3(void) { __HAL_AFIO_REMAP_CAN1_3(); }
static void AF__HAL_AFIO_REMAP_CAN_DISABLE(void) { __HAL_AFIO_REMAP_CAN_DISABLE(); }
static void AF__HAL_AFIO_REMAP_I2C1_DISABLE(void) { __HAL_AFIO_REMAP_I2C1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_I2C1_ENABLE(void) { __HAL_AFIO_REMAP_I2C1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_SPI1_DISABLE(void) { __HAL_AFIO_REMAP_SPI1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_SPI1_ENABLE(void) { __HAL_AFIO_REMAP_SPI1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM12_ENABLE(void) { __HAL_AFIO_REMAP_TIM12_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM15_ENABLE(void) { __HAL_AFIO_REMAP_TIM15_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM1_DISABLE(void) { __HAL_AFIO_REMAP_TIM1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM1_PARTIAL(void) { __HAL_AFIO_REMAP_TIM1_PARTIAL(); }
static void AF__HAL_AFIO_REMAP_TIM2_DISABLE(void) { __HAL_AFIO_REMAP_TIM2_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM2_PARTIAL_1(void) { __HAL_AFIO_REMAP_TIM2_PARTIAL_1(); }
static void AF__HAL_AFIO_REMAP_TIM2_PARTIAL_2(void) { __HAL_AFIO_REMAP_TIM2_PARTIAL_2(); }
static void AF__HAL_AFIO_REMAP_TIM3_DISABLE(void) { __HAL_AFIO_REMAP_TIM3_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM3_ENABLE(void) { __HAL_AFIO_REMAP_TIM3_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM3_PARTIAL(void) { __HAL_AFIO_REMAP_TIM3_PARTIAL(); }
static void AF__HAL_AFIO_REMAP_USART1_DISABLE(void) { __HAL_AFIO_REMAP_USART1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_USART1_ENABLE(void) { __HAL_AFIO_REMAP_USART1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_USART2_DISABLE(void) { __HAL_AFIO_REMAP_USART2_DISABLE(); }
static void AF__HAL_AFIO_REMAP_USART2_ENABLE(void) { __HAL_AFIO_REMAP_USART2_ENABLE(); }
static void AF__HAL_AFIO_REMAP_USART3_PARTIAL(void) { __HAL_AFIO_REMAP_USART3_PARTIAL(); }

// --------------------ADC--------------------

// --------------------I2C--------------------

const stm32_af_pin_list_type chip_af_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_I2C1_DISABLE}, 
}; 

const stm32_af_pin_list_type chip_af_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_I2C1_DISABLE}, 
}; 

// --------------------SPI--------------------

const stm32_af_pin_list_type chip_af_spi_miso [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_SPI1_DISABLE}, 
    { SPI1  , GPIOB, GPIO_PIN_4  , AF__HAL_AFIO_REMAP_SPI1_ENABLE}, 
}; 

const stm32_af_pin_list_type chip_af_spi_mosi [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_SPI1_DISABLE}, 
    { SPI1  , GPIOB, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_SPI1_ENABLE}, 
}; 

const stm32_af_pin_list_type chip_af_spi_nss [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_4  , AF__HAL_AFIO_REMAP_SPI1_DISABLE}, 
    { SPI1  , GPIOA, GPIO_PIN_15 , AF__HAL_AFIO_REMAP_SPI1_ENABLE}, 
}; 

const stm32_af_pin_list_type chip_af_spi_sck [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_SPI1_DISABLE}, 
    { SPI1  , GPIOB, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_SPI1_ENABLE}, 
}; 

// --------------------TIM--------------------

// --------------------USART--------------------

const stm32_af_pin_list_type chip_af_usart_rx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_USART1_DISABLE}, 
    { USART1, GPIOB, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_USART1_ENABLE}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_USART2_DISABLE}, 
}; 

const stm32_af_pin_list_type chip_af_usart_tx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_USART1_DISABLE}, 
    { USART1, GPIOB, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_USART1_ENABLE}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_2  , AF__HAL_AFIO_REMAP_USART2_DISABLE}, 
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
};

const stm32_clock_freq_list_type chip_clock_freq_list[] = {
    {I2C1  , HAL_RCC_GetPCLK1Freq },  
    {USART2, HAL_RCC_GetPCLK1Freq },  

    {SPI1  , HAL_RCC_GetPCLK2Freq },  
    {USART1, HAL_RCC_GetPCLK2Freq },  
};

