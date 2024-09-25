#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dualstringarray_t.start.hpp"
namespace tag
{
    // [struct tagDUALSTRINGARRAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dualstringarray_t                           
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                             
        _m00 uint16_t                w_num_entries;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wNumEntries
        _m01 uint16_t                w_security_offset;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wSecurityOffset
        _m02 sdk::array<uint16_t, 1> a_string_array;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .aStringArray
                                                       
        SDK_MAGIC_PROPERTIES( "tagDUALSTRINGARRAY.$", 0x6, true, 0x7a294123d013aa5d );                  
        SDK_FIXED_SIZE( dualstringarray_t, 0x6 );                  
    };                                                 
};
#include "magic/dualstringarray_t.end.hpp"
SDK_VERIFY( struct tag::dualstringarray_t, 0x6 );
