#pragma once
#include <sdkgen/support_library.hpp>
#include "wake_source_type_t.hpp"

#include "magic/wake_source_header_t.start.hpp"
namespace po
{
    // [struct _PO_WAKE_SOURCE_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wake_source_header_t               
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                    
        _m00 enum po::wake_source_type_t type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                    size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
                                              
        SDK_MAGIC_PROPERTIES( "_PO_WAKE_SOURCE_HEADER.$", 0x8, true, 0xf6312fdc44e4b0a5 );     
        SDK_FIXED_SIZE( wake_source_header_t, 0x8 );     
    };                                        
};
#include "magic/wake_source_header_t.end.hpp"
SDK_VERIFY( struct po::wake_source_header_t, 0x8 );
