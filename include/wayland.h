#pragma once

#include "swappy.h"

bool wayland_init(struct swappy_state *state);
void wayland_finish(struct swappy_state *state);
bool wayland_screencopy_geometry(struct swappy_state *state);
