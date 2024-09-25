#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/device_flags_t.hpp"

#include "magic/component_information_t.start.hpp"
namespace cm
{
    // [struct _CM_COMPONENT_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct component_information_t                   
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                           
        _m00 struct nt::device_flags_t flags;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t                  version;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 uint32_t                  key;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
        _m03 uint64_t                  affinity_mask;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AffinityMask
                                                     
        SDK_NONVOL_PROPERTIES( "_CM_COMPONENT_INFORMATION.$", 0x18, true, 0x65313d7d30c1f774 );              
        SDK_FIXED_SIZE( component_information_t, 0x18 );              
    };                                               
};
#include "magic/component_information_t.end.hpp"
SDK_VERIFY( struct cm::component_information_t, 0x18 );
