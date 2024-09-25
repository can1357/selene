#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/miniport_pause_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_PAUSE_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_pause_parameters_t                 
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 struct ndis::object_header_t header;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     pause_reason;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PauseReason
                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_PAUSE_PARAMETERS.$", 0xc, true, 0xc50359d0d12c47a3 );             
        SDK_FIXED_SIZE( miniport_pause_parameters_t, 0xc );             
    };                                                 
};
#include "magic/miniport_pause_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_pause_parameters_t, 0xc );
