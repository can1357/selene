#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wake_source_info_t.start.hpp"
namespace po
{
    // [struct _PO_WAKE_SOURCE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wake_source_info_t                
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 uint32_t                count;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 sdk::array<uint32_t, 1> offsets;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Offsets
                                             
        SDK_MAGIC_PROPERTIES( "_PO_WAKE_SOURCE_INFO.$", 0x8, true, 0xb78e6fe9a83b765b );        
        SDK_FIXED_SIZE( wake_source_info_t, 0x8 );        
    };                                       
};
#include "magic/wake_source_info_t.end.hpp"
SDK_VERIFY( struct po::wake_source_info_t, 0x8 );
