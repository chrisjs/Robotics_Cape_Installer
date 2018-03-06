/**
 * @file rc_test_led.c
 * @example    rc_test_led
 *
 * tests all LEDs on Robotics Cape & BeagleBone Blue
 *
 * @author     James Strawson
 * @date       1/29/2018
 */


#include <stdio.h>
#include <rc/led.h>
#include <rc/time.h>


int main(){

	rc_led_set(RC_LED_GREEN,1);
	rc_usleep(500000);
	rc_led_set(RC_LED_GREEN,0);

	rc_led_set(RC_LED_RED,1);
	rc_usleep(500000);
	rc_led_set(RC_LED_RED,0);


	rc_led_set(RC_LED_USR0,1);
	rc_usleep(500000);
	rc_led_set(RC_LED_USR0,0);

	rc_led_set(RC_LED_USR1,1);
	rc_usleep(500000);
	rc_led_set(RC_LED_USR1,0);

	rc_led_set(RC_LED_USR2,1);
	rc_usleep(500000);
	rc_led_set(RC_LED_USR2,0);

	rc_led_set(RC_LED_USR3,1);
	rc_usleep(500000);
	rc_led_set(RC_LED_USR3,0);

	rc_led_set(RC_LED_BAT25,1);
	rc_usleep(500000);
	rc_led_set(RC_LED_BAT25,0);

	rc_led_set(RC_LED_BAT50,1);
	rc_usleep(500000);
	rc_led_set(RC_LED_BAT50,0);

	rc_led_set(RC_LED_BAT75,1);
	rc_usleep(500000);
	rc_led_set(RC_LED_BAT75,0);

	rc_led_set(RC_LED_BAT100,1);
	rc_usleep(500000);
	rc_led_set(RC_LED_BAT100,0);


	return 0;
}
