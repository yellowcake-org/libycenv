#include <libycenv.h>
#include <libycres.h>

yc_env_world_status_t yc_env_world_initialize(yc_env_world_t *world, yc_res_map_t *map) {
    if (NULL == map) { return YC_ENV_STATUS_INPUT; }
    if (NULL == world) { return YC_ENV_STATUS_INPUT; }

    world->map = map;

    return YC_ENV_STATUS_OK;
}

yc_env_world_status_t yc_env_world_invalidate(yc_env_world_t *world) {
    if (NULL == world) { return YC_ENV_STATUS_INPUT; }

    yc_res_map_invalidate(world->map);

    return YC_ENV_STATUS_OK;
}

yc_env_world_status_t yc_env_world_tick(yc_env_world_t *world) {
    if (NULL == world) { return YC_ENV_STATUS_MEM; }
    if (NULL == world->map) { return YC_ENV_STATUS_MEM; }

    // TODO: Advance the world's state to next tick.
    world->map->ticks += 1;

    return YC_ENV_STATUS_OK;
}
