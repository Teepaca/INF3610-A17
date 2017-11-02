#pragma once

#include <systemc.h>
#include "LMBIF.h"
#include "InterfaceWrite.h"

///////////////////////////////////////////////////////////////////////////////
//
//	Class Writer
//
///////////////////////////////////////////////////////////////////////////////
class Writer : public sc_channel, public InterfaceWrite
{
public:
	// Ports
	sc_port<LMBIF>			dataPortRAM;


	// Constructor
	Writer(sc_module_name name);

	// Destructor
	~Writer();

	virtual void Write(unsigned int offset, unsigned int data);

private:

	/*

	� compl�ter

	*/

};
