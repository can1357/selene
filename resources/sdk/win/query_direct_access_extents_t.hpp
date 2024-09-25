#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_direct_access_extents_t.start.hpp"
namespace win
{
    // [struct _QUERY_DIRECT_ACCESS_EXTENTS]
    // => Windows 11
    //
    struct query_direct_access_extents_t
    {                                   
        // Windows 11             
        //                        
        _m00 int64_t  file_offset;        //{ +0x0000    } | .FileOffset
        _m01 int64_t  length;             //{ +0x0008    } | .Length
        _m02 uint32_t flags;              //{ +0x0010    } | .Flags
                                        
        SDK_MAGIC_PROPERTIES( "_QUERY_DIRECT_ACCESS_EXTENTS.$", 0x0, false, 0xc303733e89063100 );            
        SDK_FIXED_SIZE( query_direct_access_extents_t, 0x18 );            
    };                                  
};
#include "magic/query_direct_access_extents_t.end.hpp"
SDK_VERIFY( struct win::query_direct_access_extents_t, 0x18 );
