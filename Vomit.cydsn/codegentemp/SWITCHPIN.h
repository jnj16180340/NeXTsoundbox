/*******************************************************************************
* File Name: SWITCHPIN.h  
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

#if !defined(CY_PINS_SWITCHPIN_H) /* Pins SWITCHPIN_H */
#define CY_PINS_SWITCHPIN_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "SWITCHPIN_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 SWITCHPIN__PORT == 15 && ((SWITCHPIN__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    SWITCHPIN_Write(uint8 value);
void    SWITCHPIN_SetDriveMode(uint8 mode);
uint8   SWITCHPIN_ReadDataReg(void);
uint8   SWITCHPIN_Read(void);
void    SWITCHPIN_SetInterruptMode(uint16 position, uint16 mode);
uint8   SWITCHPIN_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the SWITCHPIN_SetDriveMode() function.
     *  @{
     */
        #define SWITCHPIN_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define SWITCHPIN_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define SWITCHPIN_DM_RES_UP          PIN_DM_RES_UP
        #define SWITCHPIN_DM_RES_DWN         PIN_DM_RES_DWN
        #define SWITCHPIN_DM_OD_LO           PIN_DM_OD_LO
        #define SWITCHPIN_DM_OD_HI           PIN_DM_OD_HI
        #define SWITCHPIN_DM_STRONG          PIN_DM_STRONG
        #define SWITCHPIN_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define SWITCHPIN_MASK               SWITCHPIN__MASK
#define SWITCHPIN_SHIFT              SWITCHPIN__SHIFT
#define SWITCHPIN_WIDTH              1u

/* Interrupt constants */
#if defined(SWITCHPIN__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in SWITCHPIN_SetInterruptMode() function.
     *  @{
     */
        #define SWITCHPIN_INTR_NONE      (uint16)(0x0000u)
        #define SWITCHPIN_INTR_RISING    (uint16)(0x0001u)
        #define SWITCHPIN_INTR_FALLING   (uint16)(0x0002u)
        #define SWITCHPIN_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define SWITCHPIN_INTR_MASK      (0x01u) 
#endif /* (SWITCHPIN__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define SWITCHPIN_PS                     (* (reg8 *) SWITCHPIN__PS)
/* Data Register */
#define SWITCHPIN_DR                     (* (reg8 *) SWITCHPIN__DR)
/* Port Number */
#define SWITCHPIN_PRT_NUM                (* (reg8 *) SWITCHPIN__PRT) 
/* Connect to Analog Globals */                                                  
#define SWITCHPIN_AG                     (* (reg8 *) SWITCHPIN__AG)                       
/* Analog MUX bux enable */
#define SWITCHPIN_AMUX                   (* (reg8 *) SWITCHPIN__AMUX) 
/* Bidirectional Enable */                                                        
#define SWITCHPIN_BIE                    (* (reg8 *) SWITCHPIN__BIE)
/* Bit-mask for Aliased Register Access */
#define SWITCHPIN_BIT_MASK               (* (reg8 *) SWITCHPIN__BIT_MASK)
/* Bypass Enable */
#define SWITCHPIN_BYP                    (* (reg8 *) SWITCHPIN__BYP)
/* Port wide control signals */                                                   
#define SWITCHPIN_CTL                    (* (reg8 *) SWITCHPIN__CTL)
/* Drive Modes */
#define SWITCHPIN_DM0                    (* (reg8 *) SWITCHPIN__DM0) 
#define SWITCHPIN_DM1                    (* (reg8 *) SWITCHPIN__DM1)
#define SWITCHPIN_DM2                    (* (reg8 *) SWITCHPIN__DM2) 
/* Input Buffer Disable Override */
#define SWITCHPIN_INP_DIS                (* (reg8 *) SWITCHPIN__INP_DIS)
/* LCD Common or Segment Drive */
#define SWITCHPIN_LCD_COM_SEG            (* (reg8 *) SWITCHPIN__LCD_COM_SEG)
/* Enable Segment LCD */
#define SWITCHPIN_LCD_EN                 (* (reg8 *) SWITCHPIN__LCD_EN)
/* Slew Rate Control */
#define SWITCHPIN_SLW                    (* (reg8 *) SWITCHPIN__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define SWITCHPIN_PRTDSI__CAPS_SEL       (* (reg8 *) SWITCHPIN__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define SWITCHPIN_PRTDSI__DBL_SYNC_IN    (* (reg8 *) SWITCHPIN__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define SWITCHPIN_PRTDSI__OE_SEL0        (* (reg8 *) SWITCHPIN__PRTDSI__OE_SEL0) 
#define SWITCHPIN_PRTDSI__OE_SEL1        (* (reg8 *) SWITCHPIN__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define SWITCHPIN_PRTDSI__OUT_SEL0       (* (reg8 *) SWITCHPIN__PRTDSI__OUT_SEL0) 
#define SWITCHPIN_PRTDSI__OUT_SEL1       (* (reg8 *) SWITCHPIN__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define SWITCHPIN_PRTDSI__SYNC_OUT       (* (reg8 *) SWITCHPIN__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(SWITCHPIN__SIO_CFG)
    #define SWITCHPIN_SIO_HYST_EN        (* (reg8 *) SWITCHPIN__SIO_HYST_EN)
    #define SWITCHPIN_SIO_REG_HIFREQ     (* (reg8 *) SWITCHPIN__SIO_REG_HIFREQ)
    #define SWITCHPIN_SIO_CFG            (* (reg8 *) SWITCHPIN__SIO_CFG)
    #define SWITCHPIN_SIO_DIFF           (* (reg8 *) SWITCHPIN__SIO_DIFF)
#endif /* (SWITCHPIN__SIO_CFG) */

/* Interrupt Registers */
#if defined(SWITCHPIN__INTSTAT)
    #define SWITCHPIN_INTSTAT            (* (reg8 *) SWITCHPIN__INTSTAT)
    #define SWITCHPIN_SNAP               (* (reg8 *) SWITCHPIN__SNAP)
    
	#define SWITCHPIN_0_INTTYPE_REG 		(* (reg8 *) SWITCHPIN__0__INTTYPE)
#endif /* (SWITCHPIN__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_SWITCHPIN_H */


/* [] END OF FILE */
