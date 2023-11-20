#ifndef LIBYCENV_INCLUDE_METHODS_H
#define LIBYCENV_INCLUDE_METHODS_H

yc_env_world_status_t yc_env_world_initialize(yc_env_world_t *result, yc_res_map_t *map);
yc_env_world_status_t yc_env_world_invalidate(yc_env_world_t *world);

yc_env_world_status_t yc_env_world_tick(yc_env_world_t *world);

#endif //LIBYCENV_INCLUDE_METHODS_H
