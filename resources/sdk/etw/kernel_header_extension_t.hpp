#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/perfinfo_groupmask_t.hpp"

#include "magic/kernel_header_extension_t.start.hpp"
namespace etw
{
    // [struct _ETW_KERNEL_HEADER_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kernel_header_extension_t                     
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                               
        _m00 struct nt::perfinfo_groupmask_t group_masks;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GroupMasks
        _m01 uint32_t                        version;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Version
                                                         
        SDK_MAGIC_PROPERTIES( "_ETW_KERNEL_HEADER_EXTENSION.$", 0x24, true, 0x2ea2a929ce562400 );            
        SDK_FIXED_SIZE( kernel_header_extension_t, 0x24 );            
    };                                                   
};
#include "magic/kernel_header_extension_t.end.hpp"
SDK_VERIFY( struct etw::kernel_header_extension_t, 0x24 );
