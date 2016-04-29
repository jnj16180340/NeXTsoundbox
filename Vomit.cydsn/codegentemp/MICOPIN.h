/*******************************************************************************
* File Name: MICOPIN.h  
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

#if !defined(CY_PINS_MICOPIN_H) /* Pins MICOPIN_H */
#define CY_PINS_MICOPIN_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MICOPIN_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MICOPIN__PORT == 15 && ((MICOPIN__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    MICOPIN_Write(uint8 value);
void    MICOPIN_SetDriveMode(uint8 mode);
uint8   MICOPIN_ReadDataReg(void);
uint8   MICOPIN_Read(void);
void    MICOPIN_SetInterruptMode(uint16 position, uint16 mode);
uint8   MICOPIN_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the MICOPIN_SetDriveMode() function.
     *  @{
     */
        #define MICOPIN_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define MICOPIN_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define MICOPIN_DM_RES_UP          PIN_DM_RES_UP
        #define MICOPIN_DM_RES_DWN         PIN_DM_RES_DWN
        #define MICOPIN_DM_OD_LO           PIN_DM_OD_LO
        #define MICOPIN_DM_OD_HI           PIN_DM_OD_HI
        #define MICOPIN_DM_STRONG          PIN_DM_STRONG
        #define MICOPIN_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define MICOPIN_MASK               MICOPIN__MASK
#define MICOPIN_SHIFT              MICOPIN__SHIFT
#define MICOPIN_WIDTH              1u

/* Interrupt constants */
#if defined(MICOPIN__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MICOPIN_SetInterruptMode() function.
     *  @{
     */
        #define MICOPIN_INTR_NONE      (uint16)(0x0000u)
        #define MICOPIN_INTR_RISING    (uint16)(0x0001u)
        #define MICOPIN_INTR_FALLING   (uint16)(0x0002u)
        #define MICOPIN_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define MICOPIN_INTR_MASK      (0x01u) 
#endif /* (MICOPIN__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MICOPIN_PS                     (* (reg8 *) MICOPIN__PS)
/* Data Register */
#define MICOPIN_DR                     (* (reg8 *) MICOPIN__DR)
/* Port Number */
#define MICOPIN_PRT_NUM                (* (reg8 *) MICOPIN__PRT) 
/* Connect to Analog Globals */                                                  
#define MICOPIN_AG                     (* (reg8 *) MICOPIN__AG)                       
/* Analog MUX bux enable */
#define MICOPIN_AMUX                   (* (reg8 *) MICOPIN__AMUX) 
/* Bidirectional Enable */                                                        
#define MICOPIN_BIE                    (* (reg8 *) MICOPIN__BIE)
/* Bit-mask for Aliased Register Access */
#define MICOPIN_BIT_MASK               (* (reg8 *) MICOPIN__BIT_MASK)
/* Bypass Enable */
#define MICOPIN_BYP                    (* (reg8 *) MICOPIN__BYP)
/* Port wide control signals */                                                   
#define MICOPIN_CTL                    (* (reg8 *) MICOPIN__CTL)
/* Drive Modes */
#define MICOPIN_DM0                    (* (reg8 *) MICOPIN__DM0) 
#define MICOPIN_DM1                    (* (reg8 *) MICOPIN__DM1)
#define MICOPIN_DM2                    (* (reg8 *) MICOPIN__DM2) 
/* Input Buffer Disable Override */
#define MICOPIN_INP_DIS                (* (reg8 *) MICOPIN__INP_DIS)
/* LCD Common or Segment Drive */
#define MICOPIN_LCD_COM_SEG            (* (reg8 *) MICOPIN__LCD_COM_SEG)
/* Enable Segment LCD */
#define MICOPIN_LCD_EN                 (* (reg8 *) MICOPIN__LCD_EN)
/* Slew Rate Control */
#define MICOPIN_SLW                    (* (reg8 *) MICOPIN__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MICOPIN_PRTDSI__CAPS_SEL       (* (reg8 *) MICOPIN__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MICOPIN_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MICOPIN__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MICOPIN_PRTDSI__OE_SEL0        (* (reg8 *) MICOPIN__PRTDSI__OE_SEL0) 
#define MICOPIN_PRTDSI__OE_SEL1        (* (reg8 *) MICOPIN__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MICOPIN_PRTDSI__OUT_SEL0       (* (reg8 *) MICOPIN__PRTDSI__OUT_SEL0) 
#define MICOPIN_PRTDSI__OUT_SEL1       (* (reg8 *) MICOPIN__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MICOPIN_PRTDSI__SYNC_OUT       (* (reg8 *) MICOPIN__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(MICOPIN__SIO_CFG)
    #define MICOPIN_SIO_HYST_EN        (* (reg8 *) MICOPIN__SIO_HYST_EN)
    #define MICOPIN_SIO_REG_HIFREQ     (* (reg8 *) MICOPIN__SIO_REG_HIFREQ)
    #define MICOPIN_SIO_CFG            (* (reg8 *) MICOPIN__SIO_CFG)
    #define MICOPIN_SIO_DIFF           (* (reg8 *) MICOPIN__SIO_DIFF)
#endif /* (MICOPIN__SIO_CFG) */

/* Interrupt Registers */
#if defined(MICOPIN__INTSTAT)
    #define MICOPIN_INTSTAT            (* (reg8 *) MICOPIN__INTSTAT)
    #define MICOPIN_SNAP               (* (reg8 *) MICOPIN__SNAP)
    
	#define MICOPIN_0_INTTYPE_REG 		(* (reg8 *) MICOPIN__0__INTTYPE)
#endif /* (MICOPIN__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MICOPIN_H */


/* [] END OF FILE */
