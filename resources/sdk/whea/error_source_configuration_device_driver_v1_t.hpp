#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/error_source_configuration_device_driver_v1_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER_V1]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct error_source_configuration_device_driver_v1_t           
    {                                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                         
        _m00 uint32_t                                 version;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 struct nt::guid_t                        source_guid;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SourceGuid
        _m02 uint16_t                                 log_tag;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .LogTag
        _m03 sdk::function<int32_t(void*, uint32_t)>* initialize;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Initialize
        _m04 sdk::function<void(void*)>*              uninitialize;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Uninitialize
                                                                   
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER_V1.$", 0x2c, true, 0x4f1ae1b5491fa631 );             
        SDK_FIXED_SIZE( error_source_configuration_device_driver_v1_t, 0x2c );             
    };                                                             
};
#include "magic/error_source_configuration_device_driver_v1_t.end.hpp"
SDK_VERIFY( struct whea::error_source_configuration_device_driver_v1_t, 0x2c );
