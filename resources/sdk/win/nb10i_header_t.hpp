#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nb10i_header_t.start.hpp"
namespace win
{
    // [struct _NB10I_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nb10i_header_t       
    {                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t dw_sig;     //{ +0x0000    +0x0000    +0x0000    } | .dwSig
        _m01 uint32_t dw_offset;  //{ +0x0004    +0x0004    +0x0004    } | .dwOffset
        _m02 uint32_t sig;        //{ +0x0008    +0x0008    +0x0008    } | .sig
        _m03 uint32_t age;        //{ +0x000c    +0x000c    +0x000c    } | .age
                                
        SDK_MAGIC_PROPERTIES( "_NB10I_HEADER.$", 0x10, true, 0x32b378fb2f32c6d9 );          
        SDK_FIXED_SIZE( nb10i_header_t, 0x10 );          
    };                          
};
#include "magic/nb10i_header_t.end.hpp"
SDK_VERIFY( struct win::nb10i_header_t, 0x10 );
