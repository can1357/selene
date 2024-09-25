#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/marshaled_handle_storage_t.start.hpp"
namespace win
{
    // [class MarshaledHandleStorage]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class marshaled_handle_storage_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t handle_count;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._handleCount
                                    
        SDK_MAGIC_PROPERTIES( "MarshaledHandleStorage.$", 0x18, true, 0x72830a6ab6f04ef1 );             
        SDK_FIXED_SIZE( marshaled_handle_storage_t, 0x18 );             
    };                              
};
#include "magic/marshaled_handle_storage_t.end.hpp"
SDK_VERIFY( class win::marshaled_handle_storage_t, 0x18 );
