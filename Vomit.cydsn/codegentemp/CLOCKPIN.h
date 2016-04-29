/*******************************************************************************
* File Name: CLOCKPIN.h  
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

#if !defined(CY_PINS_CLOCKPIN_H) /* Pins CLOCKPIN_H */
#define CY_PINS_CLOCKPIN_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "CLOCKPIN_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 CLOCKPIN__PORT == 15 && ((CLOCKPIN__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    CLOCKPIN_Write(uint8 value);
void    CLOCKPIN_SetDriveMode(uint8 mode);
uint8   CLOCKPIN_ReadDataReg(void);
uint8   CLOCKPIN_Read(void);
void    CLOCKPIN_SetInterruptMode(uint16 position, uint16 mode);
uint8   CLOCKPIN_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the CLOCKPIN_SetDriveMode() function.
     *  @{
     */
        #define CLOCKPIN_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define CLOCKPIN_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define CLOCKPIN_DM_RES_UP          PIN_DM_RES_UP
        #define CLOCKPIN_DM_RES_DWN         PIN_DM_RES_DWN
        #define CLOCKPIN_DM_OD_LO           PIN_DM_OD_LO
        #define CLOCKPIN_DM_OD_HI           PIN_DM_OD_HI
        #define CLOCKPIN_DM_STRONG          PIN_DM_STRONG
        #define CLOCKPIN_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define CLOCKPIN_MASK               CLOCKPIN__MASK
#define CLOCKPIN_SHIFT              CLOCKPIN__SHIFT
#define CLOCKPIN_WIDTH              1u

/* Interrupt constants */
#if defined(CLOCKPIN__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in CLOCKPIN_SetInterruptMode() function.
     *  @{
     */
        #define CLOCKPIN_INTR_NONE      (uint16)(0x0000u)
        #define CLOCKPIN_INTR_RISING    (uint16)(0x0001u)
        #define CLOCKPIN_INTR_FALLING   (uint16)(0x0002u)
        #define CLOCKPIN_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define CLOCKPIN_INTR_MASK      (0x01u) 
#endif /* (CLOCKPIN__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define CLOCKPIN_PS                     (* (reg8 *) CLOCKPIN__PS)
/* Data Register */
#define CLOCKPIN_DR                     (* (reg8 *) CLOCKPIN__DR)
/* Port Number */
#define CLOCKPIN_PRT_NUM                (* (reg8 *) CLOCKPIN__PRT) 
/* Connect to Analog Globals */                                                  
#define CLOCKPIN_AG                     (* (reg8 *) CLOCKPIN__AG)                       
/* Analog MUX bux enable */
#define CLOCKPIN_AMUX                   (* (reg8 *) CLOCKPIN__AMUX) 
/* Bidirectional Enable */                                                        
#define CLOCKPIN_BIE                    (* (reg8 *) CLOCKPIN__BIE)
/* Bit-mask for Aliased Register Access */
#define CLOCKPIN_BIT_MASK               (* (reg8 *) CLOCKPIN__BIT_MASK)
/* Bypass Enable */
#define CLOCKPIN_BYP                    (* (reg8 *) CLOCKPIN__BYP)
/* Port wide control signals */                                                   
#define CLOCKPIN_CTL                    (* (reg8 *) CLOCKPIN__CTL)
/* Drive Modes */
#define CLOCKPIN_DM0                    (* (reg8 *) CLOCKPIN__DM0) 
#define CLOCKPIN_DM1                    (* (reg8 *) CLOCKPIN__DM1)
#define CLOCKPIN_DM2                    (* (reg8 *) CLOCKPIN__DM2) 
/* Input Buffer Disable Override */
#define CLOCKPIN_INP_DIS                (* (reg8 *) CLOCKPIN__INP_DIS)
/* LCD Common or Segment Drive */
#define CLOCKPIN_LCD_COM_SEG            (* (reg8 *) CLOCKPIN__LCD_COM_SEG)
/* Enable Segment LCD */
#define CLOCKPIN_LCD_EN                 (* (reg8 *) CLOCKPIN__LCD_EN)
/* Slew Rate Control */
#define CLOCKPIN_SLW                    (* (reg8 *) CLOCKPIN__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define CLOCKPIN_PRTDSI__CAPS_SEL       (* (reg8 *) CLOCKPIN__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define CLOCKPIN_PRTDSI__DBL_SYNC_IN    (* (reg8 *) CLOCKPIN__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define CLOCKPIN_PRTDSI__OE_SEL0        (* (reg8 *) CLOCKPIN__PRTDSI__OE_SEL0) 
#define CLOCKPIN_PRTDSI__OE_SEL1        (* (reg8 *) CLOCKPIN__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define CLOCKPIN_PRTDSI__OUT_SEL0       (* (reg8 *) CLOCKPIN__PRTDSI__OUT_SEL0) 
#define CLOCKPIN_PRTDSI__OUT_SEL1       (* (reg8 *) CLOCKPIN__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define CLOCKPIN_PRTDSI__SYNC_OUT       (* (reg8 *) CLOCKPIN__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(CLOCKPIN__SIO_CFG)
    #define CLOCKPIN_SIO_HYST_EN        (* (reg8 *) CLOCKPIN__SIO_HYST_EN)
    #define CLOCKPIN_SIO_REG_HIFREQ     (* (reg8 *) CLOCKPIN__SIO_REG_HIFREQ)
    #define CLOCKPIN_SIO_CFG            (* (reg8 *) CLOCKPIN__SIO_CFG)
    #define CLOCKPIN_SIO_DIFF           (* (reg8 *) CLOCKPIN__SIO_DIFF)
#endif /* (CLOCKPIN__SIO_CFG) */

/* Interrupt Registers */
#if defined(CLOCKPIN__INTSTAT)
    #define CLOCKPIN_INTSTAT            (* (reg8 *) CLOCKPIN__INTSTAT)
    #define CLOCKPIN_SNAP               (* (reg8 *) CLOCKPIN__SNAP)
    
	#define CLOCKPIN_0_INTTYPE_REG 		(* (reg8 *) CLOCKPIN__0__INTTYPE)
#endif /* (CLOCKPIN__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_CLOCKPIN_H */


/* [] END OF FILE */
