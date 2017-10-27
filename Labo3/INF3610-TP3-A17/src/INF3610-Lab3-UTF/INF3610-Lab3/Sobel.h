///////////////////////////////////////////////////////////////////////////////
//
//	Sobel.h
//
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <systemc.h>
#include <stdio.h>
#include "InterfaceRead.h"
#include "InterfaceWrite.h"		//� d�commenter au moment opportun


///////////////////////////////////////////////////////////////////////////////
//
//	Class Sobel
//
///////////////////////////////////////////////////////////////////////////////
class Sobel : public sc_module
{
	public: 
		// Ports    
		sc_port<InterfaceRead>	readPort;
		sc_port<InterfaceWrite> writePort;

	
		// Constructor
		Sobel( sc_module_name name );
		
		// Destructor
		~Sobel();
		
	private:
		// Process SystemC
		SC_HAS_PROCESS(Sobel);
		
		void thread(void);
		uint8_t sobel_operator(const int index, const int imgWidth, uint8_t * image);

};

