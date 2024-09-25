#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_output_t.start.hpp"
namespace win
{
    // [struct _RegOutput]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reg_output_t                       
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                    
        _m00 uint32_t                dw_size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 sdk::array<uint32_t, 1> reg_keys;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RegKeys
                                              
        SDK_MAGIC_PROPERTIES( "_RegOutput.$", 0x8, true, 0x73730d6327a00cf );         
        SDK_FIXED_SIZE( reg_output_t, 0x8 );         
    };                                        
};
#include "magic/reg_output_t.end.hpp"
SDK_VERIFY( struct win::reg_output_t, 0x8 );
