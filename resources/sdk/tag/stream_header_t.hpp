#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stream_header_t.start.hpp"
namespace tag
{
    // [struct tagSTREAM_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stream_header_t              
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t ul_stream_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulStreamVersion
        _m01 uint32_t ul_pickled_size;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulPickledSize
                                        
        SDK_MAGIC_PROPERTIES( "tagSTREAM_HEADER.$", 0x8, true, 0x4e5e57a7fe51d518 );                  
        SDK_FIXED_SIZE( stream_header_t, 0x8 );                  
    };                                  
};
#include "magic/stream_header_t.end.hpp"
SDK_VERIFY( struct tag::stream_header_t, 0x8 );
