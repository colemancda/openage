#include "timer.h"

#include <SDL2/SDL.h>

namespace openage {
namespace util {

void Timer::start() {
	this->starttime = SDL_GetTicks();
}

uint32_t Timer::measure() {
	uint32_t now = SDL_GetTicks();
	return now - this->starttime;
}

}
}
