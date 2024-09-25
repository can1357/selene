#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/miniport_restart_parameters_t.start.hpp"
namespace ndis
{
    struct restart_attributes_t;

    // [struct _NDIS_MINIPORT_RESTART_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_restart_parameters_t                           
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                         
        _m00 struct ndis::object_header_t       header;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct ndis::restart_attributes_t* restart_attributes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RestartAttributes
        _m02 uint32_t                           flags;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_RESTART_PARAMETERS.$", 0x18, true, 0xd6734a12548842d3 );                   
        SDK_FIXED_SIZE( miniport_restart_parameters_t, 0x18 );                   
    };                                                             
};
#include "magic/miniport_restart_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_restart_parameters_t, 0x18 );
