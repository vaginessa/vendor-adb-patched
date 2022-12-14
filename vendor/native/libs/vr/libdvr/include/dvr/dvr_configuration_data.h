#ifndef DVR_CONFIGURATION_DATA_H_
#define DVR_CONFIGURATION_DATA_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <dvr/dvr_display_types.h>
#include <dvr/dvr_surface.h>

#ifdef __cplusplus
extern "C" {
#endif

// Loads device configuration data of DVR_CONFIGURATION_DATA_*.
// @return 0 on success. Otherwise returns a negative error value.
int dvrConfigurationDataGet(int config_type,
                            uint8_t** data, size_t* data_size);

// Destroy the configuration data returned from dvrGetConfigurationData.
void dvrConfigurationDataDestroy(uint8_t* data);

#ifdef __cplusplus
}
#endif

#endif  // DVR_CONFIGURATION_DATA_H_
