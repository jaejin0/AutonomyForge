#include "autonomyforge/sim/simulator.hpp"

#include "autonomyforge/core/geometry.hpp"


namespace autonomyforge {

	Simulator::Simulator(double dt) : dt_(dt) {
		if (dt_ <= 0.0) {
			throw std::invalid_argument("Simulation timestep delta must be positive");
		}		
	}
}


