#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vacb_array_header_t.start.hpp"
namespace nt
{
    // [struct _VACB_ARRAY_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vacb_array_header_t             
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t vacb_array_index;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VacbArrayIndex
        _m01 uint32_t mapping_count;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MappingCount
        _m02 uint32_t highest_mapped_index;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HighestMappedIndex
                                           
        SDK_MAGIC_PROPERTIES( "_VACB_ARRAY_HEADER.$", 0x10, true, 0xb58a3abe9f9666d9 );                     
        SDK_FIXED_SIZE( vacb_array_header_t, 0x10 );                     
    };                                     
};
#include "magic/vacb_array_header_t.end.hpp"
SDK_VERIFY( struct nt::vacb_array_header_t, 0x10 );
