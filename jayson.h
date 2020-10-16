#ifndef JAYSON_H
#define JAYSON_H

#include "player.h"
#include "game.h"

namespace PXL2020{
class Jayson : public Player
{
public:
    Jayson( unsigned char instance = 0 )			: Player(instance)	{}

    // Player interface
public:
    const char *getName() const					{ return( "Jayson" ); }
    const char * getOneCard() const				{ return("BETER FOLDEN JULLIE ALLEMAAL NOOBS"); }
    const char * Gamelost() const               { return("JE HEBT FCKING VALS GESPEELD"); }

protected:
    int willYouRaise(unsigned int totalBet);
};
}


#endif // JAYSON_H
