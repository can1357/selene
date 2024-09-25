#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/array_of_guids_t.start.hpp"
namespace win
{
    // [class ArrayOfGuids]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class array_of_guids_t                                
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                                
        _m00 const uint64_t                         count;  //{ +0x0008    +0x0008    +0x0008    } | ._count
        _m01 sdk::array<const struct nt::guid_t, 1> guids;  //{ +0x0010    +0x0010    +0x0010    } | ._guids
                                                          
        SDK_MAGIC_PROPERTIES( "ArrayOfGuids.$", 0x20, true, 0x7c853ce0ab02e40c );      
        SDK_FIXED_SIZE( array_of_guids_t, 0x20 );         
    };                                                    
};
#include "magic/array_of_guids_t.end.hpp"
SDK_VERIFY( class win::array_of_guids_t, 0x20 );
