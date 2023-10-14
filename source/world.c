#include <libycenv.h>
#include <libycres.h>

void world(void) {
    yc_res_map_t *map = NULL;
    yc_res_map_invalidate(map);

    yc_env_world_t world = { .map = NULL };
    world.map = map;
}
