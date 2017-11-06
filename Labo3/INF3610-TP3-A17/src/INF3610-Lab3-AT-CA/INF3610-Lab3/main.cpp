///////////////////////////////////////////////////////////////////////////////
//
//	main.cpp
//
///////////////////////////////////////////////////////////////////////////////
#include <systemc.h>
#include "Sobel.h"
#include "Sobelv2.h"
#include "Reader.h"
#include "DataRAM.h"
#include "CacheMem.h"
#include "Writer.h"

#define RAMSIZE 0x200000

///////////////////////////////////////////////////////////////////////////////
//
//	Main
//
///////////////////////////////////////////////////////////////////////////////
int sc_main(int arg_count, char **arg_value)
{
	// Variables
	int sim_units = 2; //SC_NS

	// Clock
	const sc_core::sc_time_unit simTimeUnit = SC_NS;
	const int clk_freq = 4000;
	sc_clock clk("SysClock", clk_freq, simTimeUnit, 0.5);

	// Components
	Reader reader("Reader");
	DataRAM dataRAM("DataRAM", "image.mem", RAMSIZE, false);
	//TODO : Déclaration du module de l'écrivain
	Writer writer("Writer");

	// Signals
	sc_signal<unsigned int, SC_MANY_WRITERS> data;
	sc_signal<unsigned int, SC_MANY_WRITERS> address;
	sc_signal<unsigned int*> addressData;
	sc_signal<unsigned int> length;
	sc_signal<bool, SC_MANY_WRITERS> reqRead;
	sc_signal<bool, SC_MANY_WRITERS> ackReaderWriter;
	sc_signal<bool, SC_MANY_WRITERS> reqWrite;
	sc_signal<bool, SC_MANY_WRITERS> ackCache;
	sc_signal<bool, SC_MANY_WRITERS> reqCache;

	/* à compléter*/

	// Connexions
	reader.clk(clk);
	reader.data(data);
	reader.address(address);
	reader.request(reqRead);
	reader.ack(ackReaderWriter);
	reader.dataPortRAM(dataRAM);

	writer.clk(clk);
	writer.data(data);
	writer.address(address);
	writer.request(reqWrite);
	writer.ack(ackReaderWriter);
	writer.dataPortRAM(dataRAM);

	/* à compléter */

	const bool utiliseCacheMem = true;

	if (!utiliseCacheMem) {
		Sobel sobel("Sobel");

		sobel.clk(clk);
		sobel.address(address);
		sobel.ack(ackReaderWriter);
		sobel.data(data);
		sobel.requestRead(reqRead);
		sobel.requestWrite(reqWrite);
		/* à compléter */

		// Démarrage de l'application
		cout << "Démarrage de la simulation." << endl;
		sc_start(-1, sc_core::sc_time_unit(sim_units));
		cout << endl << "Simulation s'est terminée à " << sc_time_stamp();
	} else {
		Sobelv2 sobel("Sobel");
		CacheMem cacheMem("CacheMem");

		sobel.ackCache(ackCache);
		sobel.ackReaderWriter(ackReaderWriter);
		sobel.address(address);
		sobel.addressRes(addressData);
		sobel.clk(clk);
		sobel.dataRW(data);
		sobel.length(length);
		sobel.requestCache(reqCache);
		sobel.requestRead(reqRead);
		sobel.requestWrite(reqWrite);
		
		cacheMem.ackFromReader(ackReaderWriter);
		cacheMem.ackToCPU(ackCache);
		cacheMem.address(address);
		cacheMem.addressData(addressData);
		cacheMem.clk(clk);
		cacheMem.dataReader(data);
		cacheMem.length(length);
		cacheMem.requestFromCPU(reqCache);
		cacheMem.requestToReader(reqRead);


		/* à compléter*/

		// Démarrage de l'application
		cout << "Démarrage de la simulation." << endl;
		sc_start(-1, sc_core::sc_time_unit(sim_units));
		cout << endl << "Simulation s'est terminée à " << sc_time_stamp();

	}

	return 0;
}
