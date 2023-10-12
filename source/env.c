#include <libycenv.h>
#include <libycres.h>

void level(void) {
    yc_env_level_t level = { .tick = 0 };
    level.tick = 0;

    yc_res_map_t *map = NULL;
    yc_res_map_invalidate(map);
}
