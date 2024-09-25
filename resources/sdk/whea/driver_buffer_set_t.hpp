#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/driver_buffer_set_t.start.hpp"
namespace whea
{
    // [struct _WHEA_DRIVER_BUFFER_SET]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct driver_buffer_set_t                        
    {                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                            
        _m00 uint32_t           version;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint8_t*           data;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Data
        _m02 uint32_t           data_size;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DataSize
        _m03 struct nt::guid_t* section_type_guid;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SectionTypeGuid
        _m04 uint8_t*           section_friendly_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SectionFriendlyName
        _m05 uint8_t*           flags;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
                                                      
        SDK_NONVOL_PROPERTIES( "_WHEA_DRIVER_BUFFER_SET.$", 0x28, true, 0x42dd111ddbed27ee );                      
        SDK_FIXED_SIZE( driver_buffer_set_t, 0x28 );                      
    };                                                
};
#include "magic/driver_buffer_set_t.end.hpp"
SDK_VERIFY( struct whea::driver_buffer_set_t, 0x28 );
