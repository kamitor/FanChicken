/*
 * author: Koen Schoute, koen@gorgabal.nl (october 2016)
 * Provides internal communication template. 
 */
#ifndef FANSTATUS_H
#define FANSTATUS_H

	/*
	 * The fanstatus struct is meant for holding information about the individual fansystems. 
	 * The communicator refers to this struct when doing anything fanstatus related. (update)
	 *
	 */
	struct fanstatus_t {
		 int id;
		 char const *devicepath[50];
		 bool active;
		 bool error;
		 float temperature;
		 float humidity;

		fanstatus_t(){
			id = -1;
			devicepath[0] = "/dev/null";
			active = false;
			error = false;
			temperature = 0.0;
			humidity = 0.0;
		}

	};


#endif /* end include geard*/
