/*
 * main.c
 *
 *  Created on: Jan 29, 2021
 *      Author: Kishk
 *
 */

#include "../Services/STD_TYPES.h"
#include "../Services/BIT_MATHS.h"
#include "util/delay.h"
#include "../MCAL/01-DIO/DIO_interface.h"
#include "../HAL/04- CLCD/CLCD_interface.h"
#include "../HAL/05- Keypad/Keypad_interface.h"

int main(void) {
	u8 LOC_u8ComeData = 0;

	Keypad_voidInit();
	CLCD_voidInit();

	while(1){

		LOC_u8ComeData = Keypad_u8GetPressed();
		if( LOC_u8ComeData != 0 ){

			CLCD_voidSetPosition( CLCD_ROW_1 , CLCD_COL_1 );
			CLCD_voidSendData( LOC_u8ComeData );

		}


	}
	return 0;

}
