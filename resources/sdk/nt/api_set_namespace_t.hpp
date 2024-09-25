#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api_set_namespace_t.start.hpp"
namespace nt
{
    // [struct _API_SET_NAMESPACE]
    // => WDK 10 (NV)
    //
    struct api_set_namespace_t     
    {                              
        // WDK 10                  
        //                         
        _m00 uint32_t version;       //{ +0x0000    } | .Version
        _m01 uint32_t size;          //{ +0x0004    } | .Size
        _m02 uint32_t flags;         //{ +0x0008    } | .Flags
        _m03 uint32_t count;         //{ +0x000c    } | .Count
        _m04 uint32_t entry_offset;  //{ +0x0010    } | .EntryOffset
        _m05 uint32_t hash_offset;   //{ +0x0014    } | .HashOffset
        _m06 uint32_t hash_factor;   //{ +0x0018    } | .HashFactor
                                   
        SDK_NONVOL_PROPERTIES( "_API_SET_NAMESPACE.$", 0x0, false, 0x85ed779fa7e3c771 );             
        SDK_FIXED_SIZE( api_set_namespace_t, 0x1c );             
    };                             
};
#include "magic/api_set_namespace_t.end.hpp"
SDK_VERIFY( struct nt::api_set_namespace_t, 0x1c );
