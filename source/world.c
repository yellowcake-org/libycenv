#include <libycenv.h>
#include <libycres.h>

#include <stdlib.h>

yc_env_world_status_t yc_env_world_init(yc_res_map_t *source, yc_env_world_t **destination) {
    if (NULL == source) { return YC_ENV_WORLD_STATUS_MEM; }

    yc_env_world_t *result = malloc(sizeof(yc_env_world_t));
    if (NULL == result) { return YC_ENV_WORLD_STATUS_MEM; }

    result->map = source;
    *destination = result;

    return YC_ENV_WORLD_STATUS_OK;
}
