#ifndef USE_NAV
#define USE_NAV
#endif

#include "user_task.h"
#include "common/vector.h"
#include "navigation/navigation.h"
#include "navigation/navigation_private.h"



void taskUser(timeUs_t currentTimeUs)
{
    UNUSED(currentTimeUs);

    fpVector3_t destination_pos;
    destination_pos.x = 3.0;
    destination_pos.y = 38.2;
    destination_pos.z = 385;

    for( uint32_t i = 0; i < 5; ++i )
    {
    		if( calculateDistanceToDestination( &destination_pos ) < 10 )
    			{

    				//Activate drop
    				static int test = 1;
    				++test;
    			}

    }

    return;
}
