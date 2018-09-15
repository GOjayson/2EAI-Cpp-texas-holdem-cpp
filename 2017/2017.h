#include "tournament.h"

#include "brent.h"
#include "bryan.h"
#include "carl.h"
#include "glenn.h"
#include "gregory.h"
#include "guido.h"
#include "jan.h"
#include "jason.h"
#include "jeffreyg.h"
#include "jiacheng.h"
#include "joeri.h"
#include "juul.h"
#include "kristof.h"
#include "martijn.h"
#include "robin.h"
#include "sebastiaan.h"
#include "shijia.h"
#include "steve.h"
#include "stijn.h"
#include "tacir.h"
#include "taha.h"
#include "turpal.h"
#include "waitung.h"

namespace PXL2017
{
	void registerPlayers( Tournament & tour )
	{
		for( unsigned char i = 0 ; i < 4 ; i++ )
		{
			tour.registerPlayer( new Brent( i ), PXL_2017_BRENT );
			tour.registerPlayer( new bryan( i ), PXL_2017_BRYAN );
			tour.registerPlayer( new Carl( i ), PXL_2017_CARL );
			tour.registerPlayer( new Glenn( i ), PXL_2017_GLENN );
			tour.registerPlayer( new Gregory( /*i*/ ), PXL_2017_GREGORY );
			tour.registerPlayer( new Guido( i ), PXL_2017_GUIDO );
			tour.registerPlayer( new Jan( /*i*/ ), PXL_2017_JAN );
			tour.registerPlayer( new Jason( i ), PXL_2017_JASON );
			tour.registerPlayer( new JeffreyG( /*i*/ ), PXL_2017_JEFFREYG );
			tour.registerPlayer( new JIACHENG( i ), PXL_2017_JIACHENG );
			tour.registerPlayer( new joeri( i ), PXL_2017_JOERI );
			tour.registerPlayer( new Juul( i ), PXL_2017_JUUL );
			tour.registerPlayer( new Kristof( i ), PXL_2017_KRISTOF );
			tour.registerPlayer( new martijn( i ), PXL_2017_MARTIJN );
			tour.registerPlayer( new Robin( i ), PXL_2017_ROBIN );
			tour.registerPlayer( new Sebastiaan( i ), PXL_2017_SEBASTIAAN );
			tour.registerPlayer( new SHIJIA( i ), PXL_2017_SHIJIA );
			//tour.registerPlayer( new Steve( i ), PXL_2017_STEVE );
			tour.registerPlayer( new stijn( i ), PXL_2017_STIJN );
			tour.registerPlayer( new Tacir( /*i*/ ), PXL_2017_TACIR );
			//tour.registerPlayer( new taha( /*i*/ ), PXL_2017_TAHA );
			tour.registerPlayer( new turpal( /*i*/ ), PXL_2017_TURPAL );
			tour.registerPlayer( new Fam( /*i*/ ), PXL_2017_FAM );
		}
	}
}
/*
namespace PXL2017
{
	void registerPlayers( Tournament& tour );
}
*/
