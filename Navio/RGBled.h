#ifndef _RGBLED_H_
#define _RGBLED_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <cstdint>
#include <iostream>
//#include "gpio.h"

enum class Colors 
{
    Black,
    Red,
    Green,
    Blue,
    Cyan,
    Magenta,
    Yellow,
    White,
};

class RGBled 
{
	public:
		RGBled()
		{
			
		}

		bool initialize()
		{
			return true;
			//std::cout << "Initialised LED" << std::endl;
		}
		void setColor(Colors color)
		{
			std::string col = "Black";
			//std::string col2 = "Black";
			switch(color)
			{
				case Colors::Black:
					col = "Black";
					break;
				case Colors::Red:
					col = "Red";
					break;
				case Colors::Green:
					col = "Green";
					break;
				case Colors::Blue:
					col = "Blue";
					break;
				case Colors::Cyan:
					col = "Cyan";
					break;
				case Colors::Magenta:
					col = "Magenta";
					break;
				case Colors::Yellow:
					col = "Yellow";
					break;
				case Colors::White:
					col = "White";
					break;
					
			}
			std::cout << "LED colour set to: " << col << std::endl;
		}

	private:
		//Navio::Pin *pinR;
		//Navio::Pin *pinG;
		//Navio::Pin *pinB;
};

#endif //_RGBLED_H_