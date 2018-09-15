#include "tournament.h"

#include "armand.h"
#include "armand2.h"
#include "armand3.h"
#include "brecht.h"
#include "david_vader.h"
#include "erik_nies.h"
#include "jarne.h"
#include "jimmy.h"
#include "jolien.h"
#include "jonas.h"
#include "jorim.h"
#include "koen.h"
#include "laura.h"
#include "lode.h"
#include "Poker2.h"
#include "Poker3.h"
#include "tibo.h"
#include "Vanaf_Straight_Raise_JORNE_FRANSSEN.h"
#include "wardm.h"
#include "wouter.h"
#include "yasin_noob.h"

namespace PXL2016
{
	void registerPlayers( Tournament & tour )
	{
		tour.registerPlayer( new Armand(), PXL_2016_ARMAND );
		tour.registerPlayer( new Armand(), PXL_2016_ARMAND );
		tour.registerPlayer( new Armand2(), PXL_2016_ARMAND );
		tour.registerPlayer( new Armand3(), PXL_2016_ARMAND );

		tour.registerPlayer( new Jorne1(), PXL_2016_JORNE );
		tour.registerPlayer( new Jorne2(), PXL_2016_JORNE );
		tour.registerPlayer( new Jorne2(), PXL_2016_JORNE );
		tour.registerPlayer( new Jorne3(), PXL_2016_JORNE );

		for( unsigned char i = 0 ; i < 4 ; i++ )
		{
			//tour.registerPlayer( new Armand( i ), PXL_2016_ARMAND );
			tour.registerPlayer( new Brecht(), PXL_2016_BRECHT );// i ) );
			tour.registerPlayer( new David_Vader(), PXL_2016_DAVID );// i ) );
			tour.registerPlayer( new Erik_Nies(), PXL_2016_ERIK );// i ) );
			tour.registerPlayer( new Jarne(), PXL_2016_JARNE );// i ) );
			tour.registerPlayer( new Jimmy(), PXL_2016_JIMMY );// i ) );
			tour.registerPlayer( new Jolien(), PXL_2016_JOLIEN );// i ) );
			tour.registerPlayer( new Jonas(), PXL_2016_JONAS );// i ) );
			tour.registerPlayer( new Jorim(), PXL_2016_JORIM );// i ) );
			//tour.registerPlayer( new Jorne( i ), PXL_2016_JORNE );
			tour.registerPlayer( new koen(), PXL_2016_KOEN );// i ) );
			tour.registerPlayer( new laura(), PXL_2016_LAURA );// i ) );
			tour.registerPlayer( new Lode_Vader(), PXL_2016_LODE );// i ) );
			tour.registerPlayer( new Tibo(), PXL_2016_TIBO );// i ) );
			tour.registerPlayer( new WardM(), PXL_2016_WARD );// i ) );
			tour.registerPlayer( new Wouter( i ), PXL_2016_WOUTER );
			tour.registerPlayer( new Yasin_Noob( i ), PXL_2016_YASIN );
		}
	}
}

/*namespace PXL2016
{
	void registerPlayers( Tournament& tour );
}
*/
