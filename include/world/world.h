#ifndef LIBYCENV_INCLUDE_WORLD_H
#define LIBYCENV_INCLUDE_WORLD_H

#include <libycres.h>

#include "statuses/statuses.h"

typedef struct yc_env_world {
    yc_res_map_t *map;
} yc_env_world_t;

yc_env_world_status_t yc_env_world_init(yc_res_map_t *source, yc_env_world_t **destination);
yc_env_world_status_t yc_env_world_tick(yc_env_world_t *world);

#endif //LIBYCENV_INCLUDE_WORLD_H
