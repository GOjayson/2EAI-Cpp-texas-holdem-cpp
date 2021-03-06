#include <iostream>
#include <string.h>
#include "tournament.h"
#include "noob.h"
#include "vader.h"
#include "jayson.h"
//#include "2016/2016.h"
//#include "2017/2017.h"
//#include "2018/2018.h"

using namespace std;

int main( int argumentCount, char * argumentVector[] )
{
	cout << "Official Texas Hold'Em Shoot-Out Tournament for EA-ICT !" << endl;

	Tournament tour;
	if( argumentCount > 1 && ( strcmp( argumentVector[1], "official" ) == 0 ) )
	{
		cerr << "Are you sure you want to start the official tournament ?" << endl;
		if( getchar() != 'y' )
		{
			return( 0 );
		}
		//Previous years :
//		PXL2016::registerPlayers( tour );
//		PXL2017::registerPlayers( tour );
//		PXL2018::registerPlayers( tour );
	}
	else
	{
//		PXL2016::registerPlayers( tour );
//		PXL2017::registerPlayers( tour );
//		PXL2018::registerPlayers( tour );
        for( unsigned char i = 0 ; i < 2 ; i++ )
		{
			tour.registerPlayer( new Noob( i ), NOOB );
		}

        tour.registerPlayer( new PXL2020::Jayson(), JAYSON );

		tour.registerPlayer( new Vader(), VADER );
	}
	tour.start();

	return( 0 );
}
