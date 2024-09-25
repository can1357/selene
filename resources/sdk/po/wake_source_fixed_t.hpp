#pragma once
#include <sdkgen/support_library.hpp>
#include "wake_source_header_t.hpp"
#include "fixed_wake_source_type_t.hpp"

#include "magic/wake_source_fixed_t.start.hpp"
namespace po
{
    // [struct _PO_WAKE_SOURCE_FIXED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wake_source_fixed_t                                        
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                            
        _m00 struct po::wake_source_header_t   header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum po::fixed_wake_source_type_t fixed_wake_source_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FixedWakeSourceType
                                                                      
        SDK_MAGIC_PROPERTIES( "_PO_WAKE_SOURCE_FIXED.$", 0xc, true, 0x4c14f56bb2254691 );                       
        SDK_FIXED_SIZE( wake_source_fixed_t, 0xc );                       
    };                                                                
};
#include "magic/wake_source_fixed_t.end.hpp"
SDK_VERIFY( struct po::wake_source_fixed_t, 0xc );
