#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/pd_config_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PD_CONFIG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_config_t                                        
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                    
        _m00 struct ndis::object_header_t header;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint8_t                      enabled;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Enabled
        _m03 uint32_t                     capabilities_offset;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CapabilitiesOffset
        _m04 uint32_t                     capabilities_size;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CapabilitiesSize
                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_CONFIG.$", 0x18, true, 0x54dd5f08c4bc2cb9 );                    
        SDK_FIXED_SIZE( pd_config_t, 0x18 );                    
    };                                                        
};
#include "magic/pd_config_t.end.hpp"
SDK_VERIFY( struct ndis::pd_config_t, 0x18 );
