#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ioring_handleref_t.start.hpp"
namespace os
{
    // [union _NT_IORING_HANDLEREF]
    // => Windows 11
    //
    union ioring_handleref_t       
    {                              
        // Windows 11              
        //                         
        _m00 void*    handle;        //{ +0x0000    } | .Handle
        _m01 uint32_t handle_index;  //{ +0x0000    } | .HandleIndex
                                   
        SDK_MAGIC_PROPERTIES( "_NT_IORING_HANDLEREF.$", 0x0, false, 0x379f095e92de3d2 );             
        SDK_FIXED_SIZE( ioring_handleref_t, 0x8 );             
    };                             
};
#include "magic/ioring_handleref_t.end.hpp"
SDK_VERIFY( union os::ioring_handleref_t, 0x8 );
