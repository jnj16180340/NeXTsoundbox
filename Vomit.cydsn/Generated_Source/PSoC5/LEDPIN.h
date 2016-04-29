/*******************************************************************************
* File Name: LEDPIN.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_LEDPIN_H) /* Pins LEDPIN_H */
#define CY_PINS_LEDPIN_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LEDPIN_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LEDPIN__PORT == 15 && ((LEDPIN__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LEDPIN_Write(uint8 value);
void    LEDPIN_SetDriveMode(uint8 mode);
uint8   LEDPIN_ReadDataReg(void);
uint8   LEDPIN_Read(void);
void    LEDPIN_SetInterruptMode(uint16 position, uint16 mode);
uint8   LEDPIN_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LEDPIN_SetDriveMode() function.
     *  @{
     */
        #define LEDPIN_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define LEDPIN_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define LEDPIN_DM_RES_UP          PIN_DM_RES_UP
        #define LEDPIN_DM_RES_DWN         PIN_DM_RES_DWN
        #define LEDPIN_DM_OD_LO           PIN_DM_OD_LO
        #define LEDPIN_DM_OD_HI           PIN_DM_OD_HI
        #define LEDPIN_DM_STRONG          PIN_DM_STRONG
        #define LEDPIN_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LEDPIN_MASK               LEDPIN__MASK
#define LEDPIN_SHIFT              LEDPIN__SHIFT
#define LEDPIN_WIDTH              1u

/* Interrupt constants */
#if defined(LEDPIN__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LEDPIN_SetInterruptMode() function.
     *  @{
     */
        #define LEDPIN_INTR_NONE      (uint16)(0x0000u)
        #define LEDPIN_INTR_RISING    (uint16)(0x0001u)
        #define LEDPIN_INTR_FALLING   (uint16)(0x0002u)
        #define LEDPIN_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define LEDPIN_INTR_MASK      (0x01u) 
#endif /* (LEDPIN__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LEDPIN_PS                     (* (reg8 *) LEDPIN__PS)
/* Data Register */
#define LEDPIN_DR                     (* (reg8 *) LEDPIN__DR)
/* Port Number */
#define LEDPIN_PRT_NUM                (* (reg8 *) LEDPIN__PRT) 
/* Connect to Analog Globals */                                                  
#define LEDPIN_AG                     (* (reg8 *) LEDPIN__AG)                       
/* Analog MUX bux enable */
#define LEDPIN_AMUX                   (* (reg8 *) LEDPIN__AMUX) 
/* Bidirectional Enable */                                                        
#define LEDPIN_BIE                    (* (reg8 *) LEDPIN__BIE)
/* Bit-mask for Aliased Register Access */
#define LEDPIN_BIT_MASK               (* (reg8 *) LEDPIN__BIT_MASK)
/* Bypass Enable */
#define LEDPIN_BYP                    (* (reg8 *) LEDPIN__BYP)
/* Port wide control signals */                                                   
#define LEDPIN_CTL                    (* (reg8 *) LEDPIN__CTL)
/* Drive Modes */
#define LEDPIN_DM0                    (* (reg8 *) LEDPIN__DM0) 
#define LEDPIN_DM1                    (* (reg8 *) LEDPIN__DM1)
#define LEDPIN_DM2                    (* (reg8 *) LEDPIN__DM2) 
/* Input Buffer Disable Override */
#define LEDPIN_INP_DIS                (* (reg8 *) LEDPIN__INP_DIS)
/* LCD Common or Segment Drive */
#define LEDPIN_LCD_COM_SEG            (* (reg8 *) LEDPIN__LCD_COM_SEG)
/* Enable Segment LCD */
#define LEDPIN_LCD_EN                 (* (reg8 *) LEDPIN__LCD_EN)
/* Slew Rate Control */
#define LEDPIN_SLW                    (* (reg8 *) LEDPIN__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LEDPIN_PRTDSI__CAPS_SEL       (* (reg8 *) LEDPIN__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LEDPIN_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LEDPIN__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LEDPIN_PRTDSI__OE_SEL0        (* (reg8 *) LEDPIN__PRTDSI__OE_SEL0) 
#define LEDPIN_PRTDSI__OE_SEL1        (* (reg8 *) LEDPIN__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LEDPIN_PRTDSI__OUT_SEL0       (* (reg8 *) LEDPIN__PRTDSI__OUT_SEL0) 
#define LEDPIN_PRTDSI__OUT_SEL1       (* (reg8 *) LEDPIN__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LEDPIN_PRTDSI__SYNC_OUT       (* (reg8 *) LEDPIN__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LEDPIN__SIO_CFG)
    #define LEDPIN_SIO_HYST_EN        (* (reg8 *) LEDPIN__SIO_HYST_EN)
    #define LEDPIN_SIO_REG_HIFREQ     (* (reg8 *) LEDPIN__SIO_REG_HIFREQ)
    #define LEDPIN_SIO_CFG            (* (reg8 *) LEDPIN__SIO_CFG)
    #define LEDPIN_SIO_DIFF           (* (reg8 *) LEDPIN__SIO_DIFF)
#endif /* (LEDPIN__SIO_CFG) */

/* Interrupt Registers */
#if defined(LEDPIN__INTSTAT)
    #define LEDPIN_INTSTAT            (* (reg8 *) LEDPIN__INTSTAT)
    #define LEDPIN_SNAP               (* (reg8 *) LEDPIN__SNAP)
    
	#define LEDPIN_0_INTTYPE_REG 		(* (reg8 *) LEDPIN__0__INTTYPE)
#endif /* (LEDPIN__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LEDPIN_H */


/* [] END OF FILE */
