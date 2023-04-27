#ifndef __NOXIMROUTING_MULTICAST_H__
#define __NOXIMROUTING_MULTICAST_H__

#include "RoutingAlgorithm.h"
#include "RoutingAlgorithms.h"
#include "../Router.h"

using namespace std;

class Routing_MULTICAST : RoutingAlgorithm {
	public:
		vector<int> route(Router * router, const RouteData & routeData);

		static Routing_MULTICAST * getInstance();

	private:
		Routing_MULTICAST(){};
		~Routing_MULTICAST(){};

		static Routing_MULTICAST * routing_MULTICAST;
		static RoutingAlgorithmsRegister routingAlgorithmsRegister;
};

#endif
