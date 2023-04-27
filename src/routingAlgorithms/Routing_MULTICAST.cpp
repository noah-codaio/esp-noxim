#include "Routing_MULTICAST.h"

RoutingAlgorithmsRegister Routing_MULTICAST::routingAlgorithmsRegister("MULTICAST", getInstance());

Routing_MULTICAST * Routing_MULTICAST::routing_MULTICAST = 0;

Routing_MULTICAST * Routing_MULTICAST::getInstance() {
	if ( routing_MULTICAST == 0 )
		routing_MULTICAST = new Routing_MULTICAST();
    
	return routing_MULTICAST;
}

vector<int> Routing_MULTICAST::route(Router * router, const RouteData & routeData)
{
    Coord current = id2Coord(routeData.current_id);
    Coord destination = id2Coord(routeData.dst_id);
    vector <int> directions;

    if (destination.x > current.x)
       directions.push_back(DIRECTION_EAST);
    else if (destination.x < current.x)
        directions.push_back(DIRECTION_WEST);
    else if (destination.y > current.y)
        directions.push_back(DIRECTION_SOUTH);
    else
        directions.push_back(DIRECTION_NORTH);

    return directions;
   } 
