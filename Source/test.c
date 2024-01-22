/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pin_mux.h"
#include "board.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define SEG_A_PORT BOARD_segA_PORT
#define SEG_A_PIN  BOARD_segA_PIN

#define SEG_B_PORT BOARD_segB_PORT
#define SEG_B_PIN  BOARD_segB_PIN

#define SEG_C_PORT BOARD_segC_PORT
#define SEG_C_PIN  BOARD_segC_PIN

#define SEG_D_PORT BOARD_segD_PORT
#define SEG_D_PIN  BOARD_segD_PIN

#define SEG_E_PORT BOARD_segE_PORT
#define SEG_E_PIN  BOARD_segE_PIN

#define SEG_F_PORT BOARD_segF_PORT
#define SEG_F_PIN  BOARD_segF_PIN

#define SEG_G_PORT BOARD_segG_PORT
#define SEG_G_PIN  BOARD_segG_PIN

#define DIG_1_PORT BOARD_Dig1_PORT
#define DIG_1_PIN  BOARD_Dig1_PIN
#define DIG_1_MASK BOARD_Dig1_PIN_MASK

#define DIG_2_PORT BOARD_Dig2_PORT
#define DIG_2_PIN  BOARD_Dig2_PIN
#define DIG_2_MASK BOARD_Dig2_GPIO_PIN_MASK

#define DIG_3_PORT BOARD_Dig3_PORT
#define DIG_3_PIN  BOARD_Dig3_PIN
#define DIG_3_MASK BOARD_Dig3_GPIO_PIN_MASK

#define DIG_4_PORT BOARD_Dig4_PORT
#define DIG_4_PIN  BOARD_Dig4_PIN
#define DIG_4_MASK BOARD_Dig4_GPIO_PIN_MASK

//#define BOARD_ABHI_PORT
//#define BOARD_ABHI_PIN

/*********
 * Prototypes
 **********/

/*********
 * Variables
 **********/
volatile uint32_t g_systickCounter;

/*********
 * Code
 **********/
void SysTick_Handler(void)
{
    if (g_systickCounter != 0U)
    {
        g_systickCounter--;
    }
}

void SysTick_DelayTicks(uint32_t n)
{
    g_systickCounter = n;
    while (g_systickCounter != 0U)
    {
    }
}




void display(int num){

    //Displaying 1
	if(num == 1){
		GPIO_PinWrite(GPIO, SEG_A_PORT, SEG_A_PIN, 0u << SEG_A_PIN);
		GPIO_PinWrite(GPIO, SEG_D_PORT, SEG_D_PIN, 0u << SEG_D_PIN);
		GPIO_PinWrite(GPIO, SEG_E_PORT, SEG_E_PIN, 0u << SEG_E_PIN);
		GPIO_PinWrite(GPIO, SEG_F_PORT, SEG_F_PIN, 0u << SEG_F_PIN);
		GPIO_PinWrite(GPIO, SEG_G_PORT, SEG_G_PIN, 0u << SEG_G_PIN);

//		SysTick_DelayTicks(1 000U);
	}

    // Displaying-2
	else if(num==2){
	    GPIO_PinWrite(GPIO, SEG_A_PORT, SEG_A_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_B_PORT, SEG_B_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_C_PORT, SEG_C_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_D_PORT, SEG_D_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_E_PORT, SEG_E_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_F_PORT, SEG_F_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_G_PORT, SEG_G_PIN, 1);
	//        GPIO_PortMaskedWrite(GPIO, SEG_D_PORT, 1u <<SEG_D_PIN);
//	    SysTick_DelayTicks(1000U);
	}


    //Displaying-3
	else if(num==3){
	    GPIO_PinWrite(GPIO, SEG_A_PORT, SEG_A_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_B_PORT, SEG_B_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_C_PORT, SEG_C_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_D_PORT, SEG_D_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_E_PORT, SEG_E_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_F_PORT, SEG_F_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_G_PORT, SEG_G_PIN, 1);
//	    SysTick_DelayTicks(1000U);
	}


    //Displaying-4
	else if(num==4){
	    GPIO_PinWrite(GPIO, SEG_A_PORT, SEG_A_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_B_PORT, SEG_B_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_C_PORT, SEG_C_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_D_PORT, SEG_D_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_E_PORT, SEG_E_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_F_PORT, SEG_F_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_G_PORT, SEG_G_PIN, 1);
//	    SysTick_DelayTicks(1000U);
	}

    //Displaying-5
	else if(num ==5){
	    GPIO_PinWrite(GPIO, SEG_A_PORT, SEG_A_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_B_PORT, SEG_B_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_C_PORT, SEG_C_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_D_PORT, SEG_D_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_E_PORT, SEG_E_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_F_PORT, SEG_F_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_G_PORT, SEG_G_PIN, 1);
//	    SysTick_DelayTicks(1000U);
	}

    //Displaying-6
	else if(num==6){
	    GPIO_PinWrite(GPIO, SEG_A_PORT, SEG_A_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_B_PORT, SEG_B_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_C_PORT, SEG_C_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_D_PORT, SEG_D_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_E_PORT, SEG_E_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_F_PORT, SEG_F_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_G_PORT, SEG_G_PIN, 1);
//	    SysTick_DelayTicks(1000U);

	}

    //Displaying-7
	else if(num==7){
	    GPIO_PinWrite(GPIO, SEG_A_PORT, SEG_A_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_B_PORT, SEG_B_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_C_PORT, SEG_C_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_D_PORT, SEG_D_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_E_PORT, SEG_E_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_F_PORT, SEG_F_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_G_PORT, SEG_G_PIN, 0);
//	    SysTick_DelayTicks(1000U);
	}

    //Displaying-8
	else if(num == 8){
	    GPIO_PinWrite(GPIO, SEG_A_PORT, SEG_A_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_B_PORT, SEG_B_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_C_PORT, SEG_C_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_D_PORT, SEG_D_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_E_PORT, SEG_E_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_F_PORT, SEG_F_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_G_PORT, SEG_G_PIN, 1);
//	    SysTick_DelayTicks(1000U);
	}


    //Displaying-6
	else if(num == 9){
	    GPIO_PinWrite(GPIO, SEG_A_PORT, SEG_A_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_B_PORT, SEG_B_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_C_PORT, SEG_C_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_D_PORT, SEG_D_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_E_PORT, SEG_E_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_F_PORT, SEG_F_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_G_PORT, SEG_G_PIN, 1);
//	    SysTick_DelayTicks(1000U);
	}

    //Displaying-0
	else if (num == 0){
	    GPIO_PinWrite(GPIO, SEG_A_PORT, SEG_A_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_B_PORT, SEG_B_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_C_PORT, SEG_C_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_D_PORT, SEG_D_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_E_PORT, SEG_E_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_F_PORT, SEG_F_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_G_PORT, SEG_G_PIN, 0);
//	    SysTick_DelayTicks(1000U);
	}
	else{
	    GPIO_PinWrite(GPIO, SEG_A_PORT, SEG_A_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_B_PORT, SEG_B_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_C_PORT, SEG_C_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_D_PORT, SEG_D_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_E_PORT, SEG_E_PIN, 1);
	    GPIO_PinWrite(GPIO, SEG_F_PORT, SEG_F_PIN, 0);
	    GPIO_PinWrite(GPIO, SEG_G_PORT, SEG_G_PIN, 0);
//	    SysTick_DelayTicks(1000U);
	}


}
/*!
 * @brief Main function
 */
int main(void)
{
    /* Init output LED GPIO. */

   GPIO_PortInit(GPIO, BOARD_segA_PORT );
   GPIO_PortInit(GPIO, BOARD_segB_PORT );
   GPIO_PortInit(GPIO, BOARD_segC_PORT );
   GPIO_PortInit(GPIO, BOARD_segD_PORT );
   GPIO_PortInit(GPIO, BOARD_segE_PORT );
   GPIO_PortInit(GPIO, BOARD_segF_PORT );
   GPIO_PortInit(GPIO, BOARD_segG_PORT );
   GPIO_PortInit(GPIO, BOARD_Dig1_PORT );
   GPIO_PortInit(GPIO, BOARD_Dig2_PORT );
    /* Board pin init */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();

//    GPIO_PortSet(GPIO, BOARD_NUM8_PORT, 0u << BOARD_NUM8_PIN);
//    GPIO_PortSet(GPIO, BOARD_NUM9_PORT, 0u << BOARD_NUM9_PIN);

    /* Set systick reload value to generate 1ms interrupt */
    if (SysTick_Config(SystemCoreClock / 1000U))
    {
        while (1)
        {
        }
    }

   while (1)
  {
        /* Delay 1000 ms */


    int num = 4545;
    int num1[4]={0,0,0,0};

      // scanf("%d",&num);
       int i=0;
       while(num > 0) //do till num greater than  0
       {
           int mod = num % 10;  //split last digit from number
           // printf("%d\n",mod); //print the digit.
           num1[i]=mod;
           i++;


           num = num / 10;    //divide num by 10. num /= 10 also a valid one
       }


       GPIO_PortSet(GPIO, DIG_1_PORT,DIG_1_MASK);
       GPIO_PortSet(GPIO, DIG_2_PORT, DIG_2_MASK);
       GPIO_PortSet(GPIO, DIG_3_PORT, DIG_3_MASK);
       GPIO_PortSet(GPIO, DIG_4_PORT,DIG_4_MASK);

       GPIO_PinWrite(GPIO, DIG_1_PORT, DIG_1_PIN, 0u << DIG_1_PIN );
       display(num1[3]);
       SysTick_DelayTicks(5U);
       GPIO_PortSet(GPIO,DIG_1_PORT, DIG_1_MASK);

       GPIO_PinWrite(GPIO, DIG_2_PORT, DIG_2_PIN, 0u << DIG_2_PIN );
       display(num1[2]);
       SysTick_DelayTicks(5U);
       GPIO_PortSet(GPIO,DIG_2_PORT, DIG_2_MASK);

       GPIO_PinWrite(GPIO, DIG_3_PORT, DIG_3_PIN, 0u << DIG_3_PIN );
       display(num1[1]);
       SysTick_DelayTicks(5U);
       GPIO_PortSet(GPIO,DIG_3_PORT, DIG_3_MASK);

       GPIO_PinWrite(GPIO, DIG_4_PORT, DIG_4_PIN, 0u << DIG_4_PIN );
       display(num1[0]);
       SysTick_DelayTicks(5U);
       GPIO_PortSet(GPIO,DIG_4_PORT, DIG_4_MASK);
    }
}
