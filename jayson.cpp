#include "jayson.h"
#include "game.h"
#include "player.h"

namespace PXL2020{

int Jayson::willYouRaise(unsigned int totalbet)
{
    PokerRank temp = getHand().getMyRank();

    if(getTable()->getCommunityCards().size() == 0)
    {

        int VerschilMax = getHand().getFirstCard() - getHand().getSecondCard();
        int VerschilMin = getHand().getSecondCard() - getHand().getFirstCard();

        if((Jayson::getRank().getCategory() == ONE_PAIR) && (Jayson::getHand().getSecondCard()->getRank()) >= 7)
        {
            return( 5 );
        }

        else if(totalbet > ( Jayson::getBet() * 2.5 ) || ( totalbet > (getGame()->getBlind() * 5.5 ) && totalbet > ( Jayson::getChips() / 2.5 ) ) )
        {
            return( -1 );
        }

        else if((Jayson::getRank().getCategory() == ONE_PAIR && (Jayson::getHand().getSecondCard()->getRank() < 7)))
        {
            return( 3 );
        }

        else if( (Jayson::getHand().getSecondCard()->getRank() >= 7 && Jayson::getHand().getFirstCard()->getRank() >= 7) && ((VerschilMax <= 5 && VerschilMax <= -5) || (VerschilMin <= 5 && VerschilMin <= -5)))
        {
            return( 1 );
        }

        else if( (Jayson::getHand().getSecondCard()->getRank() < 4 && Jayson::getHand().getFirstCard()->getRank() < 4 ))
        {
         return(-1);
        }

        else
        {
            return(0);
        }

    }



    else if(getTable()->getCommunityCards().size() < 4)
    {

        printf("Ik check als er 3 kaarten liggen op tafel");

        if( (Jayson::getRank().getCategory() == TWO_PAIR))
        {
            return( 2 );
        }

        else if( (Jayson::getRank().getCategory() == THREE_OF_A_KIND))
        {
            return( 5 );
        }

        else if( (Jayson::getRank().getCategory() == STRAIGHT))
        {
            return( 10 );
        }

        else if( (Jayson::getRank().getCategory() == FLUSH))
        {
            return( 15 );
        }

        else if( (Jayson::getRank().getCategory() == FULL_HOUSE))
        {
            return( 20 );
        }

        else if( (Jayson::getRank().getCategory() == FOUR_OF_A_KIND))
        {
            return( 25 );
        }

        else if( (Jayson::getRank().getCategory() == STRAIGHT_FLUSH))
        {
            return( 50 );
        }

        else if( (Jayson::getRank().getCategory() == STRAIGHT_FLUSH))
        {
            return( 100 );
        }

        else if(((Jayson::getRank().getCategory() == HIGH_CARD) && (Jayson::getBet()*5 < totalbet)))
        {
            return( -1 );
        }

        else
        {
            return( 0 );
        }
    }

    else if(getTable()->getCommunityCards().size() < 5)
    {

        printf("Ik check als er 4 kaarten liggen op tafel");

        if( (Jayson::getRank().getCategory() == FULL_HOUSE))
        {
            return( 20 );
        }
        else if( (Jayson::getRank().getCategory() == FOUR_OF_A_KIND))
        {
            return( 25 );
        }
        else if( (Jayson::getRank().getCategory() == STRAIGHT_FLUSH))
        {
            return( 50 );
        }
        else if( (Jayson::getRank().getCategory() == STRAIGHT_FLUSH))
        {
            return( 100 );
        }
        else if(((Jayson::getRank().getCategory() <= TWO_PAIR) && (Jayson::getBet()*5 < totalbet)))
        {
            return( -1 );
        }
        else
        {
            return( 0 );
        }
    }

    else
    {
        printf("Ik check als er 5 kaarten liggen op tafel");

        if( (Jayson::getRank().getCategory() == STRAIGHT_FLUSH))
        {
            return( 50 );
        }
        else if( (Jayson::getRank().getCategory() == STRAIGHT_FLUSH))
        {
            return( 100 );
        }
        else if(((Jayson::getRank().getCategory() <= FLUSH) && (Jayson::getBet()*5 < totalbet)))
        {
            return( -1 );
        }
        else
        {
            return( 0 );
        }
    }
}

}
