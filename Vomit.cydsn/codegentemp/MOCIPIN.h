/*******************************************************************************
* File Name: MOCIPIN.h  
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

#if !defined(CY_PINS_MOCIPIN_H) /* Pins MOCIPIN_H */
#define CY_PINS_MOCIPIN_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MOCIPIN_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MOCIPIN__PORT == 15 && ((MOCIPIN__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    MOCIPIN_Write(uint8 value);
void    MOCIPIN_SetDriveMode(uint8 mode);
uint8   MOCIPIN_ReadDataReg(void);
uint8   MOCIPIN_Read(void);
void    MOCIPIN_SetInterruptMode(uint16 position, uint16 mode);
uint8   MOCIPIN_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the MOCIPIN_SetDriveMode() function.
     *  @{
     */
        #define MOCIPIN_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define MOCIPIN_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define MOCIPIN_DM_RES_UP          PIN_DM_RES_UP
        #define MOCIPIN_DM_RES_DWN         PIN_DM_RES_DWN
        #define MOCIPIN_DM_OD_LO           PIN_DM_OD_LO
        #define MOCIPIN_DM_OD_HI           PIN_DM_OD_HI
        #define MOCIPIN_DM_STRONG          PIN_DM_STRONG
        #define MOCIPIN_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define MOCIPIN_MASK               MOCIPIN__MASK
#define MOCIPIN_SHIFT              MOCIPIN__SHIFT
#define MOCIPIN_WIDTH              1u

/* Interrupt constants */
#if defined(MOCIPIN__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MOCIPIN_SetInterruptMode() function.
     *  @{
     */
        #define MOCIPIN_INTR_NONE      (uint16)(0x0000u)
        #define MOCIPIN_INTR_RISING    (uint16)(0x0001u)
        #define MOCIPIN_INTR_FALLING   (uint16)(0x0002u)
        #define MOCIPIN_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define MOCIPIN_INTR_MASK      (0x01u) 
#endif /* (MOCIPIN__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MOCIPIN_PS                     (* (reg8 *) MOCIPIN__PS)
/* Data Register */
#define MOCIPIN_DR                     (* (reg8 *) MOCIPIN__DR)
/* Port Number */
#define MOCIPIN_PRT_NUM                (* (reg8 *) MOCIPIN__PRT) 
/* Connect to Analog Globals */                                                  
#define MOCIPIN_AG                     (* (reg8 *) MOCIPIN__AG)                       
/* Analog MUX bux enable */
#define MOCIPIN_AMUX                   (* (reg8 *) MOCIPIN__AMUX) 
/* Bidirectional Enable */                                                        
#define MOCIPIN_BIE                    (* (reg8 *) MOCIPIN__BIE)
/* Bit-mask for Aliased Register Access */
#define MOCIPIN_BIT_MASK               (* (reg8 *) MOCIPIN__BIT_MASK)
/* Bypass Enable */
#define MOCIPIN_BYP                    (* (reg8 *) MOCIPIN__BYP)
/* Port wide control signals */                                                   
#define MOCIPIN_CTL                    (* (reg8 *) MOCIPIN__CTL)
/* Drive Modes */
#define MOCIPIN_DM0                    (* (reg8 *) MOCIPIN__DM0) 
#define MOCIPIN_DM1                    (* (reg8 *) MOCIPIN__DM1)
#define MOCIPIN_DM2                    (* (reg8 *) MOCIPIN__DM2) 
/* Input Buffer Disable Override */
#define MOCIPIN_INP_DIS                (* (reg8 *) MOCIPIN__INP_DIS)
/* LCD Common or Segment Drive */
#define MOCIPIN_LCD_COM_SEG            (* (reg8 *) MOCIPIN__LCD_COM_SEG)
/* Enable Segment LCD */
#define MOCIPIN_LCD_EN                 (* (reg8 *) MOCIPIN__LCD_EN)
/* Slew Rate Control */
#define MOCIPIN_SLW                    (* (reg8 *) MOCIPIN__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MOCIPIN_PRTDSI__CAPS_SEL       (* (reg8 *) MOCIPIN__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MOCIPIN_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MOCIPIN__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MOCIPIN_PRTDSI__OE_SEL0        (* (reg8 *) MOCIPIN__PRTDSI__OE_SEL0) 
#define MOCIPIN_PRTDSI__OE_SEL1        (* (reg8 *) MOCIPIN__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MOCIPIN_PRTDSI__OUT_SEL0       (* (reg8 *) MOCIPIN__PRTDSI__OUT_SEL0) 
#define MOCIPIN_PRTDSI__OUT_SEL1       (* (reg8 *) MOCIPIN__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MOCIPIN_PRTDSI__SYNC_OUT       (* (reg8 *) MOCIPIN__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(MOCIPIN__SIO_CFG)
    #define MOCIPIN_SIO_HYST_EN        (* (reg8 *) MOCIPIN__SIO_HYST_EN)
    #define MOCIPIN_SIO_REG_HIFREQ     (* (reg8 *) MOCIPIN__SIO_REG_HIFREQ)
    #define MOCIPIN_SIO_CFG            (* (reg8 *) MOCIPIN__SIO_CFG)
    #define MOCIPIN_SIO_DIFF           (* (reg8 *) MOCIPIN__SIO_DIFF)
#endif /* (MOCIPIN__SIO_CFG) */

/* Interrupt Registers */
#if defined(MOCIPIN__INTSTAT)
    #define MOCIPIN_INTSTAT            (* (reg8 *) MOCIPIN__INTSTAT)
    #define MOCIPIN_SNAP               (* (reg8 *) MOCIPIN__SNAP)
    
	#define MOCIPIN_0_INTTYPE_REG 		(* (reg8 *) MOCIPIN__0__INTTYPE)
#endif /* (MOCIPIN__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MOCIPIN_H */


/* [] END OF FILE */
