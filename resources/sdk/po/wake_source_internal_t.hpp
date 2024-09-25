#pragma once
#include <sdkgen/support_library.hpp>
#include "wake_source_header_t.hpp"
#include "internal_wake_source_type_t.hpp"

#include "magic/wake_source_internal_t.start.hpp"
namespace po
{
    // [struct _PO_WAKE_SOURCE_INTERNAL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wake_source_internal_t                                           
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                  
        _m00 struct po::wake_source_header_t      header;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum po::internal_wake_source_type_t internal_wake_source_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InternalWakeSourceType
                                                                            
        SDK_MAGIC_PROPERTIES( "_PO_WAKE_SOURCE_INTERNAL.$", 0xc, true, 0x512b0a291ceeac85 );                          
        SDK_FIXED_SIZE( wake_source_internal_t, 0xc );                          
    };                                                                      
};
#include "magic/wake_source_internal_t.end.hpp"
SDK_VERIFY( struct po::wake_source_internal_t, 0xc );
