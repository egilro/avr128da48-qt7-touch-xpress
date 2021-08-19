/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pins.c
  
  This Source file provides APIs.
    Generation Information :
    Driver Version    :   1.0.0
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "../pins.h"

static void (*PC1_InterruptHandler)(void);
static void (*PC0_InterruptHandler)(void);
static void (*PA4_InterruptHandler)(void);
static void (*PA6_InterruptHandler)(void);
static void (*PD0_InterruptHandler)(void);
static void (*PD1_InterruptHandler)(void);
static void (*PD5_InterruptHandler)(void);
static void (*PD7_InterruptHandler)(void);
static void (*PA5_InterruptHandler)(void);
static void (*PA7_InterruptHandler)(void);
static void (*PC2_InterruptHandler)(void);
static void (*PC3_InterruptHandler)(void);
static void (*PD2_InterruptHandler)(void);
static void (*PD3_InterruptHandler)(void);
static void (*PD4_InterruptHandler)(void);
static void (*PD6_InterruptHandler)(void);
void PORT_Initialize(void);

void PIN_MANAGER_Initialize()
{
  PORT_Initialize();
  /* DIR Registers Initialization */
    PORTA.DIR = 0xA0;
    PORTB.DIR = 0x0;
    PORTC.DIR = 0xD;
    PORTD.DIR = 0x5C;
    PORTE.DIR = 0x0;
    PORTF.DIR = 0x0;

  /* OUT Registers Initialization */
    PORTA.OUT = 0x0;
    PORTB.OUT = 0x0;
    PORTC.OUT = 0x0;
    PORTD.OUT = 0x0;
    PORTE.OUT = 0x0;
    PORTF.OUT = 0x0;

  /* PINxCTRL registers Initialization */
    PORTA.PIN0CTRL = 0x0;
    PORTA.PIN1CTRL = 0x0;
    PORTA.PIN2CTRL = 0x0;
    PORTA.PIN3CTRL = 0x0;
    PORTA.PIN4CTRL = 0x0;
    PORTA.PIN5CTRL = 0x0;
    PORTA.PIN6CTRL = 0x0;
    PORTA.PIN7CTRL = 0x0;
    PORTB.PIN0CTRL = 0x0;
    PORTB.PIN1CTRL = 0x0;
    PORTB.PIN2CTRL = 0x0;
    PORTB.PIN3CTRL = 0x0;
    PORTB.PIN4CTRL = 0x0;
    PORTB.PIN5CTRL = 0x0;
    PORTB.PIN6CTRL = 0x0;
    PORTB.PIN7CTRL = 0x0;
    PORTC.PIN0CTRL = 0x0;
    PORTC.PIN1CTRL = 0x0;
    PORTC.PIN2CTRL = 0x0;
    PORTC.PIN3CTRL = 0x0;
    PORTC.PIN4CTRL = 0x0;
    PORTC.PIN5CTRL = 0x0;
    PORTC.PIN6CTRL = 0x0;
    PORTC.PIN7CTRL = 0x0;
    PORTD.PIN0CTRL = 0x0;
    PORTD.PIN1CTRL = 0x0;
    PORTD.PIN2CTRL = 0x0;
    PORTD.PIN3CTRL = 0x0;
    PORTD.PIN4CTRL = 0x0;
    PORTD.PIN5CTRL = 0x0;
    PORTD.PIN6CTRL = 0x0;
    PORTD.PIN7CTRL = 0x0;
    PORTE.PIN0CTRL = 0x0;
    PORTE.PIN1CTRL = 0x0;
    PORTE.PIN2CTRL = 0x0;
    PORTE.PIN3CTRL = 0x0;
    PORTE.PIN4CTRL = 0x0;
    PORTE.PIN5CTRL = 0x0;
    PORTE.PIN6CTRL = 0x0;
    PORTE.PIN7CTRL = 0x0;
    PORTF.PIN0CTRL = 0x0;
    PORTF.PIN1CTRL = 0x0;
    PORTF.PIN2CTRL = 0x0;
    PORTF.PIN3CTRL = 0x0;
    PORTF.PIN4CTRL = 0x0;
    PORTF.PIN5CTRL = 0x0;
    PORTF.PIN6CTRL = 0x0;
    PORTF.PIN7CTRL = 0x0;

  /* Multi-pin Config registers Initialization */
    PORTA.PINCONFIG = 0x00;
    PORTA.PINCTRLCLR = 0x00;
    PORTA.PINCTRLSET = 0x00;
    PORTA.PINCTRLUPD = 0x00;
    PORTB.PINCONFIG = 0x00;
    PORTB.PINCTRLCLR = 0x00;
    PORTB.PINCTRLSET = 0x00;
    PORTB.PINCTRLUPD = 0x00;
    PORTC.PINCONFIG = 0x00;
    PORTC.PINCTRLCLR = 0x00;
    PORTC.PINCTRLSET = 0x00;
    PORTC.PINCTRLUPD = 0x00;
    PORTD.PINCONFIG = 0x00;
    PORTD.PINCTRLCLR = 0x00;
    PORTD.PINCTRLSET = 0x00;
    PORTD.PINCTRLUPD = 0x00;
    PORTE.PINCONFIG = 0x00;
    PORTE.PINCTRLCLR = 0x00;
    PORTE.PINCTRLSET = 0x00;
    PORTE.PINCTRLUPD = 0x00;
    PORTF.PINCONFIG = 0x00;
    PORTF.PINCTRLCLR = 0x00;
    PORTF.PINCTRLSET = 0x00;
    PORTF.PINCTRLUPD = 0x00;

  /* PORTMUX Initialization */
    PORTMUX.ACROUTEA = 0x0;
    PORTMUX.CCLROUTEA = 0x0;
    PORTMUX.EVSYSROUTEA = 0x0;
    PORTMUX.SPIROUTEA = 0x0;
    PORTMUX.TCAROUTEA = 0x0;
    PORTMUX.TCBROUTEA = 0x0;
    PORTMUX.TCDROUTEA = 0x0;
    PORTMUX.TWIROUTEA = 0x0;
    PORTMUX.USARTROUTEA = 0x0;
    PORTMUX.USARTROUTEB = 0x0;
    PORTMUX.ZCDROUTEA = 0x0;

  // register default ISC callback functions at runtime; use these methods to register a custom function
    PC1_SetInterruptHandler(PC1_DefaultInterruptHandler);
    PC0_SetInterruptHandler(PC0_DefaultInterruptHandler);
    PA4_SetInterruptHandler(PA4_DefaultInterruptHandler);
    PA6_SetInterruptHandler(PA6_DefaultInterruptHandler);
    PD0_SetInterruptHandler(PD0_DefaultInterruptHandler);
    PD1_SetInterruptHandler(PD1_DefaultInterruptHandler);
    PD5_SetInterruptHandler(PD5_DefaultInterruptHandler);
    PD7_SetInterruptHandler(PD7_DefaultInterruptHandler);
    PA5_SetInterruptHandler(PA5_DefaultInterruptHandler);
    PA7_SetInterruptHandler(PA7_DefaultInterruptHandler);
    PC2_SetInterruptHandler(PC2_DefaultInterruptHandler);
    PC3_SetInterruptHandler(PC3_DefaultInterruptHandler);
    PD2_SetInterruptHandler(PD2_DefaultInterruptHandler);
    PD3_SetInterruptHandler(PD3_DefaultInterruptHandler);
    PD4_SetInterruptHandler(PD4_DefaultInterruptHandler);
    PD6_SetInterruptHandler(PD6_DefaultInterruptHandler);
}

void PORT_Initialize(void)
{
  /* On AVR devices all peripherals are enable from power on reset, this
  * disables all peripherals to save power. Driver shall enable
  * peripheral if used */

  /* Set all pins to low power mode */
    for (uint8_t i = 0; i < 8; i++) {
      *((uint8_t *)&PORTA + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
    for (uint8_t i = 0; i < 8; i++) {
      *((uint8_t *)&PORTB + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
    for (uint8_t i = 0; i < 8; i++) {
      *((uint8_t *)&PORTC + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
    for (uint8_t i = 0; i < 8; i++) {
      *((uint8_t *)&PORTD + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
    for (uint8_t i = 0; i < 8; i++) {
      *((uint8_t *)&PORTE + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
    for (uint8_t i = 0; i < 8; i++) {
      *((uint8_t *)&PORTF + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
}
/**
  Allows selecting an interrupt handler for PC1 at application runtime
*/
void PC1_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PC1_InterruptHandler = interruptHandler;
}

void PC1_DefaultInterruptHandler(void)
{
    // add your PC1 interrupt custom code
    // or set custom function using PC1_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PC0 at application runtime
*/
void PC0_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PC0_InterruptHandler = interruptHandler;
}

void PC0_DefaultInterruptHandler(void)
{
    // add your PC0 interrupt custom code
    // or set custom function using PC0_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PA4 at application runtime
*/
void PA4_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PA4_InterruptHandler = interruptHandler;
}

void PA4_DefaultInterruptHandler(void)
{
    // add your PA4 interrupt custom code
    // or set custom function using PA4_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PA6 at application runtime
*/
void PA6_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PA6_InterruptHandler = interruptHandler;
}

void PA6_DefaultInterruptHandler(void)
{
    // add your PA6 interrupt custom code
    // or set custom function using PA6_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PD0 at application runtime
*/
void PD0_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PD0_InterruptHandler = interruptHandler;
}

void PD0_DefaultInterruptHandler(void)
{
    // add your PD0 interrupt custom code
    // or set custom function using PD0_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PD1 at application runtime
*/
void PD1_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PD1_InterruptHandler = interruptHandler;
}

void PD1_DefaultInterruptHandler(void)
{
    // add your PD1 interrupt custom code
    // or set custom function using PD1_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PD5 at application runtime
*/
void PD5_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PD5_InterruptHandler = interruptHandler;
}

void PD5_DefaultInterruptHandler(void)
{
    // add your PD5 interrupt custom code
    // or set custom function using PD5_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PD7 at application runtime
*/
void PD7_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PD7_InterruptHandler = interruptHandler;
}

void PD7_DefaultInterruptHandler(void)
{
    // add your PD7 interrupt custom code
    // or set custom function using PD7_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PA5 at application runtime
*/
void PA5_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PA5_InterruptHandler = interruptHandler;
}

void PA5_DefaultInterruptHandler(void)
{
    // add your PA5 interrupt custom code
    // or set custom function using PA5_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PA7 at application runtime
*/
void PA7_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PA7_InterruptHandler = interruptHandler;
}

void PA7_DefaultInterruptHandler(void)
{
    // add your PA7 interrupt custom code
    // or set custom function using PA7_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PC2 at application runtime
*/
void PC2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PC2_InterruptHandler = interruptHandler;
}

void PC2_DefaultInterruptHandler(void)
{
    // add your PC2 interrupt custom code
    // or set custom function using PC2_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PC3 at application runtime
*/
void PC3_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PC3_InterruptHandler = interruptHandler;
}

void PC3_DefaultInterruptHandler(void)
{
    // add your PC3 interrupt custom code
    // or set custom function using PC3_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PD2 at application runtime
*/
void PD2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PD2_InterruptHandler = interruptHandler;
}

void PD2_DefaultInterruptHandler(void)
{
    // add your PD2 interrupt custom code
    // or set custom function using PD2_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PD3 at application runtime
*/
void PD3_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PD3_InterruptHandler = interruptHandler;
}

void PD3_DefaultInterruptHandler(void)
{
    // add your PD3 interrupt custom code
    // or set custom function using PD3_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PD4 at application runtime
*/
void PD4_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PD4_InterruptHandler = interruptHandler;
}

void PD4_DefaultInterruptHandler(void)
{
    // add your PD4 interrupt custom code
    // or set custom function using PD4_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PD6 at application runtime
*/
void PD6_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PD6_InterruptHandler = interruptHandler;
}

void PD6_DefaultInterruptHandler(void)
{
    // add your PD6 interrupt custom code
    // or set custom function using PD6_SetInterruptHandler()
}
ISR(PORTA_PORT_vect)
{  
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTA.INTFLAGS & PORT_INT4_bm)
    {
       PA4_InterruptHandler();
    }
    if(VPORTA.INTFLAGS & PORT_INT6_bm)
    {
       PA6_InterruptHandler();
    }
    if(VPORTA.INTFLAGS & PORT_INT5_bm)
    {
       PA5_InterruptHandler();
    }
    if(VPORTA.INTFLAGS & PORT_INT7_bm)
    {
       PA7_InterruptHandler();
    }

    /* Clear interrupt flags */
    VPORTA.INTFLAGS = 0xff;
}

ISR(PORTB_PORT_vect)
{  
    // Call the interrupt handler for the callback registered at runtime

    /* Clear interrupt flags */
    VPORTB.INTFLAGS = 0xff;
}

ISR(PORTC_PORT_vect)
{  
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTC.INTFLAGS & PORT_INT1_bm)
    {
       PC1_InterruptHandler();
    }
    if(VPORTC.INTFLAGS & PORT_INT0_bm)
    {
       PC0_InterruptHandler();
    }
    if(VPORTC.INTFLAGS & PORT_INT2_bm)
    {
       PC2_InterruptHandler();
    }
    if(VPORTC.INTFLAGS & PORT_INT3_bm)
    {
       PC3_InterruptHandler();
    }

    /* Clear interrupt flags */
    VPORTC.INTFLAGS = 0xff;
}

ISR(PORTD_PORT_vect)
{  
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTD.INTFLAGS & PORT_INT0_bm)
    {
       PD0_InterruptHandler();
    }
    if(VPORTD.INTFLAGS & PORT_INT1_bm)
    {
       PD1_InterruptHandler();
    }
    if(VPORTD.INTFLAGS & PORT_INT5_bm)
    {
       PD5_InterruptHandler();
    }
    if(VPORTD.INTFLAGS & PORT_INT7_bm)
    {
       PD7_InterruptHandler();
    }
    if(VPORTD.INTFLAGS & PORT_INT2_bm)
    {
       PD2_InterruptHandler();
    }
    if(VPORTD.INTFLAGS & PORT_INT3_bm)
    {
       PD3_InterruptHandler();
    }
    if(VPORTD.INTFLAGS & PORT_INT4_bm)
    {
       PD4_InterruptHandler();
    }
    if(VPORTD.INTFLAGS & PORT_INT6_bm)
    {
       PD6_InterruptHandler();
    }

    /* Clear interrupt flags */
    VPORTD.INTFLAGS = 0xff;
}

ISR(PORTE_PORT_vect)
{  
    // Call the interrupt handler for the callback registered at runtime

    /* Clear interrupt flags */
    VPORTE.INTFLAGS = 0xff;
}

ISR(PORTF_PORT_vect)
{  
    // Call the interrupt handler for the callback registered at runtime

    /* Clear interrupt flags */
    VPORTF.INTFLAGS = 0xff;
}

/**
 End of File
*/