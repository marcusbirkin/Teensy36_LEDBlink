/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v5.0
processor: MK66FX1M0xxx18
package_id: MK66FX1M0VMD18
mcu_data: ksdk2_0
processor_version: 5.0.0
pin_labels:
- {pin_num: D8, pin_signal: PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/I2S0_RXD0/FB_AD10/SDRAM_A18/CMP0_OUT/FTM0_CH2, label: 13/LED, identifier: LED}
- {pin_num: A12, pin_signal: ADC0_SE4b/CMP1_IN0/TSI0_CH15/PTC2/SPI0_PCS2/UART1_CTS_b/FTM0_CH1/FB_AD12/SDRAM_A20/I2S0_TX_FS, label: 23/A9}
- {pin_num: B11, pin_signal: ADC0_SE15/TSI0_CH14/PTC1/LLWU_P6/SPI0_PCS3/UART1_RTS_b/FTM0_CH0/FB_AD13/SDRAM_A21/I2S0_TXD0, label: 22/A8}
- {pin_num: A2, pin_signal: ADC0_SE7b/PTD6/LLWU_P15/SPI0_PCS3/UART0_RX/FTM0_CH6/FB_AD0/FTM0_FLT0/SPI1_SOUT, label: 21/A7}
- {pin_num: A3, pin_signal: ADC0_SE6b/PTD5/SPI0_PCS2/UART0_CTS_b/UART0_COL_b/FTM0_CH5/FB_AD1/SDRAM_A9/EWM_OUT_b/SPI1_SCK, label: 20/A6}
- {pin_num: A1, pin_signal: PTD7/CMT_IRO/UART0_TX/FTM0_CH7/SDRAM_CKE/FTM0_FLT1/SPI1_SIN, label: '5'}
- {pin_num: B1, pin_signal: PTD12/SPI2_SCK/FTM3_FLT0/SDHC0_D4/FB_A20, label: '53'}
- {pin_num: C1, pin_signal: PTD15/SPI2_PCS1/SDHC0_D7/FB_A23, label: '54'}
- {pin_num: B2, pin_signal: PTD11/LLWU_P25/SPI2_PCS0/SDHC0_CLKIN/LPUART0_CTS_b/FB_A19, label: '57'}
- {pin_num: C2, pin_signal: PTD14/SPI2_SIN/SDHC0_D6/FB_A22, label: '51'}
- {pin_num: B3, pin_signal: PTD10/LPUART0_RTS_b/FB_A18, label: '56'}
- {pin_num: C3, pin_signal: PTD13/SPI2_SOUT/SDHC0_D5/FB_A21, label: '52'}
- {pin_num: A4, pin_signal: PTD4/LLWU_P14/SPI0_PCS1/UART0_RTS_b/FTM0_CH4/FB_AD2/SDRAM_A10/EWM_IN/SPI1_PCS0, label: '6'}
- {pin_num: B4, pin_signal: PTD3/SPI0_SIN/UART2_TX/FTM3_CH3/FB_AD3/SDRAM_A11/I2C0_SDA, label: '8'}
- {pin_num: C4, pin_signal: PTD2/LLWU_P13/SPI0_SOUT/UART2_RX/FTM3_CH2/FB_AD4/SDRAM_A12/I2C0_SCL, label: '7'}
- {pin_num: D4, pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/UART2_CTS_b/FTM3_CH1/FB_CS0_b, label: 14/A0}
- {pin_num: K4, pin_signal: PTE26/ENET_1588_CLKIN/UART4_CTS_b/RTC_CLKOUT/USB0_CLKIN, label: '24'}
- {pin_num: G4, pin_signal: PTE11/I2C3_SCL/I2S0_TX_FS/LPUART0_RTS_b/FTM3_CH6, label: '57'}
- {pin_num: F1, pin_signal: PTE10/LLWU_P18/I2C3_SDA/I2S0_TXD0/LPUART0_CTS_b/FTM3_CH5/USB1_ID, label: '56'}
- {pin_num: L3, pin_signal: DAC0_OUT/CMP1_IN3/ADC0_SE23, label: A21/DAC0}
- {pin_num: L4, pin_signal: DAC1_OUT/CMP0_IN4/CMP2_IN3/ADC1_SE23, label: A22/DAC1}
- {pin_num: G12, pin_signal: ADC0_SE12/TSI0_CH7/PTB2/I2C0_SCL/UART0_RTS_b/ENET0_1588_TMR0/SDRAM_WE/FTM0_FLT3, label: 19/A5}
- {pin_num: G11, pin_signal: ADC0_SE13/TSI0_CH8/PTB3/I2C0_SDA/UART0_CTS_b/UART0_COL_b/ENET0_1588_TMR1/SDRAM_CS0_b/FTM0_FLT0, label: 18/A4}
- {pin_num: H9, pin_signal: ADC0_SE9/ADC1_SE9/TSI0_CH6/PTB1/I2C0_SDA/FTM1_CH1/RMII0_MDC/MII0_MDC/SDRAM_RAS_b/FTM1_QD_PHB/TPM1_CH1, label: 17/A3}
- {pin_num: H10, pin_signal: ADC0_SE8/ADC1_SE8/TSI0_CH0/PTB0/LLWU_P5/I2C0_SCL/FTM1_CH0/RMII0_MDIO/MII0_MDIO/SDRAM_CAS_b/FTM1_QD_PHA/TPM1_CH0, label: 16/A2}
- {pin_num: B12, pin_signal: ADC0_SE14/TSI0_CH13/PTC0/SPI0_PCS4/PDB0_EXTRG/USB0_SOF_OUT/FB_AD14/SDRAM_A22/I2S0_TXD1, label: 15/A1}
- {pin_num: K11, pin_signal: ADC1_SE17/PTA17/SPI0_SIN/UART0_RTS_b/RMII0_TXD1/MII0_TXD1/I2S0_MCLK, label: 39/A20}
- {pin_num: B7, pin_signal: ADC1_SE7b/PTC11/LLWU_P11/I2C1_SDA/FTM3_CH7/I2S0_RXD1/FB_RW_b, label: 38/A19}
- {pin_num: C7, pin_signal: ADC1_SE6b/PTC10/I2C1_SCL/FTM3_CH6/I2S0_RX_FS/FB_AD5/SDRAM_A13, label: 37/A18}
- {pin_num: D7, pin_signal: ADC1_SE5b/CMP0_IN3/PTC9/FTM3_CH5/I2S0_RX_BCLK/FB_AD6/SDRAM_A14/FTM2_FLT0, label: 36/A17}
- {pin_num: A8, pin_signal: ADC1_SE4b/CMP0_IN2/PTC8/FTM3_CH4/I2S0_MCLK/FB_AD7/SDRAM_A15, label: 35/A16}
- {pin_num: K5, pin_signal: ADC0_SE18/PTE25/LLWU_P21/CAN1_RX/UART4_RX/I2C0_SDA/EWM_IN, label: 34/A15}
- {pin_num: M4, pin_signal: ADC0_SE17/PTE24/CAN1_TX/UART4_TX/I2C0_SCL/EWM_OUT_b, label: 33/A14}
- {pin_num: E11, pin_signal: ADC1_SE15/PTB11/SPI1_SCK/UART3_TX/FB_AD18/SDRAM_D18/FTM0_FLT2, label: 32/A13}
- {pin_num: E12, pin_signal: ADC1_SE14/PTB10/SPI1_PCS0/UART3_RX/FB_AD19/SDRAM_D19/FTM0_FLT1, label: 31/A12}
- {pin_num: D11, pin_signal: TSI0_CH12/PTB19/CAN0_RX/FTM2_CH1/I2S0_TX_FS/FB_OE_b/FTM2_QD_PHB/TPM2_CH1, label: '30'}
- {pin_num: D12, pin_signal: TSI0_CH11/PTB18/CAN0_TX/FTM2_CH0/I2S0_TX_BCLK/FB_AD15/SDRAM_A23/FTM2_QD_PHA/TPM2_CH0, label: '29'}
- {pin_num: K10, pin_signal: CMP3_IN2/PTA16/SPI0_SOUT/UART0_CTS_b/UART0_COL_b/RMII0_TXD0/MII0_TXD0/I2S0_RX_FS/I2S0_RXD1, label: '28'}
- {pin_num: L11, pin_signal: CMP3_IN1/PTA15/SPI0_SCK/UART0_RX/RMII0_TXEN/MII0_TXEN/I2S0_RXD0, label: '27'}
- {pin_num: L10, pin_signal: PTA14/SPI0_PCS0/UART0_TX/RMII0_CRS_DV/MII0_RXDV/I2C2_SCL/I2S0_RX_BCLK/I2S0_TXD1, label: '26'}
- {pin_num: M8, pin_signal: PTA5/USB0_CLKIN/FTM0_CH2/RMII0_RXER/MII0_RXER/CMP2_OUT/I2S0_TX_BCLK/JTAG_TRST_b, label: '25'}
- {pin_num: B8, pin_signal: CMP0_IN1/PTC7/SPI0_SIN/USB0_SOF_OUT/I2S0_RX_FS/FB_AD8/SDRAM_A16, label: '12'}
- {pin_num: C8, pin_signal: CMP0_IN0/PTC6/LLWU_P10/SPI0_SOUT/PDB0_EXTRG/I2S0_RX_BCLK/FB_AD9/SDRAM_A17/I2S0_MCLK, label: '11'}
- {pin_num: A9, pin_signal: PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/FTM0_CH3/FB_AD11/SDRAM_A19/CMP1_OUT, label: '10'}
- {pin_num: A11, pin_signal: CMP1_IN1/PTC3/LLWU_P7/SPI0_PCS1/UART1_RX/FTM0_CH2/CLKOUT/I2S0_TX_BCLK, label: '9'}
- {pin_num: J9, pin_signal: CMP2_IN1/PTA13/LLWU_P4/CAN0_RX/FTM1_CH1/RMII0_RXD0/MII0_RXD0/I2C2_SDA/I2S0_TX_FS/FTM1_QD_PHB/TPM1_CH1, label: '4'}
- {pin_num: A5, pin_signal: PTD0/LLWU_P12/SPI0_PCS0/UART2_RTS_b/FTM3_CH0/FB_ALE/FB_CS1_b/FB_TS_b, label: '2'}
- {pin_num: E9, pin_signal: TSI0_CH10/PTB17/SPI1_SIN/UART0_TX/FTM_CLKIN1/FB_AD16/SDRAM_D16/EWM_OUT_b/TPM_CLKIN1, label: '1'}
- {pin_num: E10, pin_signal: TSI0_CH9/PTB16/SPI1_SOUT/UART0_RX/FTM_CLKIN0/FB_AD17/SDRAM_D17/EWM_IN/TPM_CLKIN0, label: '0'}
- {pin_num: H12, pin_signal: PTA28/MII0_TXER/FB_A25, label: '40'}
- {pin_num: H11, pin_signal: PTA29/MII0_COL/FB_A24, label: '41'}
- {pin_num: J11, pin_signal: PTA26/MII0_TXD3/FB_A27, label: '42'}
- {pin_num: D10, pin_signal: PTB20/SPI2_PCS0/FB_AD31/SDRAM_D31/CMP0_OUT, label: '43'}
- {pin_num: C12, pin_signal: PTB22/SPI2_SOUT/FB_AD29/SDRAM_D29/CMP2_OUT, label: '44'}
- {pin_num: C11, pin_signal: PTB23/SPI2_SIN/SPI0_PCS5/FB_AD28/SDRAM_D28/CMP3_OUT, label: '45'}
- {pin_num: D9, pin_signal: PTB21/SPI2_SCK/FB_AD30/SDRAM_D30/CMP1_OUT, label: '46'}
- {pin_num: C9, pin_signal: PTD8/LLWU_P24/I2C0_SCL/LPUART0_RX/FB_A16, label: '47'}
- {pin_num: B9, pin_signal: PTD9/I2C0_SDA/LPUART0_TX/FB_A17, label: '48'}
- {pin_num: G10, pin_signal: ADC1_SE10/PTB4/ENET0_1588_TMR2/SDRAM_CS1_b/FTM1_FLT0, label: '49'}
- {pin_num: G9, pin_signal: ADC1_SE11/PTB5/ENET0_1588_TMR3/FTM2_FLT0, label: '50'}
- {pin_num: H2, pin_signal: USB0_DM, label: USB0_DM}
- {pin_num: H1, pin_signal: USB0_DP, label: USB0_DP}
- {pin_num: D3, pin_signal: ADC1_SE4a/PTE0/SPI1_PCS1/UART1_TX/SDHC0_D1/TRACE_CLKOUT/I2C1_SDA/RTC_CLKOUT, label: SD_DAT1}
- {pin_num: D2, pin_signal: ADC1_SE5a/PTE1/LLWU_P0/SPI1_SOUT/UART1_RX/SDHC0_D0/TRACE_D3/I2C1_SCL/SPI1_SIN, label: SD_DAT0/DO}
- {pin_num: D1, pin_signal: ADC1_SE6a/PTE2/LLWU_P1/SPI1_SCK/UART1_CTS_b/SDHC0_DCLK/TRACE_D2, label: SD_CLK}
- {pin_num: E2, pin_signal: PTE5/SPI1_PCS2/UART3_RX/SDHC0_D2/FTM3_CH0, label: SD_DAT2}
- {pin_num: E3, pin_signal: PTE4/LLWU_P2/SPI1_PCS0/UART3_TX/SDHC0_D3/TRACE_D0, label: SD_DAT3/CS}
- {pin_num: E4, pin_signal: ADC1_SE7a/PTE3/SPI1_SIN/UART1_RTS_b/SDHC0_CMD/TRACE_D1/SPI1_SOUT, label: SD_CMD/DI}
- {pin_num: M2, pin_signal: ADC1_DM0/ADC0_DM3, label: A11}
- {pin_num: M1, pin_signal: ADC1_DP0/ADC0_DP3, label: A10}
- {pin_num: M6, pin_signal: EXTAL32, label: 32.768kHz}
- {pin_num: M7, pin_signal: XTAL32, label: 32.768kHz}
- {pin_num: M11, pin_signal: XTAL0/PTA19/FTM1_FLT0/FTM_CLKIN1/LPTMR0_ALT1/TPM_CLKIN1, label: 16Mhz}
- {pin_num: M12, pin_signal: EXTAL0/PTA18/FTM0_FLT2/FTM_CLKIN0/TPM_CLKIN0, label: 16Mhz}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: H2, peripheral: USB0, signal: DM, pin_signal: USB0_DM}
  - {pin_num: H1, peripheral: USB0, signal: DP, pin_signal: USB0_DP}
  - {pin_num: G1, peripheral: USB0, signal: VOUT33, pin_signal: VREG_OUT}
  - {pin_num: M12, peripheral: OSC, signal: EXTAL0, pin_signal: EXTAL0/PTA18/FTM0_FLT2/FTM_CLKIN0/TPM_CLKIN0}
  - {pin_num: M11, peripheral: OSC, signal: XTAL0, pin_signal: XTAL0/PTA19/FTM1_FLT0/FTM_CLKIN1/LPTMR0_ALT1/TPM_CLKIN1}
  - {pin_num: M6, peripheral: RTC, signal: EXTAL32, pin_signal: EXTAL32}
  - {pin_num: M7, peripheral: RTC, signal: XTAL32, pin_signal: XTAL32}
  - {pin_num: D8, peripheral: GPIOC, signal: 'GPIO, 5', pin_signal: PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/I2S0_RXD0/FB_AD10/SDRAM_A18/CMP0_OUT/FTM0_CH2, direction: OUTPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Port A Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);
    /* Port C Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortC);

    gpio_pin_config_t LED_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC5 (pin D8)  */
    GPIO_PinInit(BOARD_INITPINS_LED_GPIO, BOARD_INITPINS_LED_PIN, &LED_config);

    /* PORTA18 (pin M12) is configured as EXTAL0 */
    PORT_SetPinMux(PORTA, 18U, kPORT_PinDisabledOrAnalog);

    /* PORTA19 (pin M11) is configured as XTAL0 */
    PORT_SetPinMux(PORTA, 19U, kPORT_PinDisabledOrAnalog);

    /* PORTC5 (pin D8) is configured as PTC5 */
    PORT_SetPinMux(BOARD_INITPINS_LED_PORT, BOARD_INITPINS_LED_PIN, kPORT_MuxAsGpio);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
