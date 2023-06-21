/*
 * main.c
 *
 *  Created on: Jun 21, 2023
 *      Author: Khaled
 */
#include "lcd_interfacing.h"
#include <util/delay.h>

void main()
{
lcd_intilization();
while(1)
{
	send_command(LCD_CLEAR);
	go_to_xy(row1, column3);
	lcd_display_string("sleeping");
	go_to_xy(row2,column3);
	lcd_display(0);
	_delay_ms(500);

	send_command(LCD_CLEAR);
		go_to_xy(row1, column3);
		lcd_display_string("wake up");
		go_to_xy(row2,column3);
		lcd_display(1);
		_delay_ms(500);

		send_command(LCD_CLEAR);
			go_to_xy(row1, column3);
			lcd_display_string("running");
			go_to_xy(row2,column3);
			lcd_display(2);
			_delay_ms(500);
			send_command(LCD_CLEAR);
						go_to_xy(row1, column3);
						lcd_display_string("running");
						go_to_xy(row2,column3);
						lcd_display(3);
						_delay_ms(500);
						send_command(LCD_CLEAR);
									go_to_xy(row1, column3);
									lcd_display_string("running");
									go_to_xy(row2,column3);
									lcd_display(4);
									_delay_ms(500);
									send_command(LCD_CLEAR);
												go_to_xy(row1, column3);
												lcd_display_string("running");
												go_to_xy(row2,column3);
												lcd_display(5);
												_delay_ms(500);
												send_command(LCD_CLEAR);
												go_to_xy(row1, column3);
												lcd_display_string("slepping");
												go_to_xy(row2,column3);
												lcd_display(6);
															_delay_ms(500);
}


}
