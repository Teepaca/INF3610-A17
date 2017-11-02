///////////////////////////////////////////////////////////////////////////////
//
//	Reader.h
//
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <systemc.h>
#include "LMBIF.h"
#include "InterfaceRead.h"

///////////////////////////////////////////////////////////////////////////////
//
//	Class Reader
//
///////////////////////////////////////////////////////////////////////////////
class Reader : public sc_channel, public InterfaceRead /* └ complÚter */
{
	public:
		// Ports
		sc_port<LMBIF>			dataPortRAM;

		
		// Constructor
		Reader( sc_module_name name );

		// Destructor
		~Reader();

		virtual unsigned int Read(unsigned int offset);

	private:

	/*
		
	└ complÚter
		
	*/

};

