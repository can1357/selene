#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct DeleteMarshaledTargetInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct delete_marshaled_target_info_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "DeleteMarshaledTargetInfo.$", 0x1, true, 0xb35541c2cc62bd22 );
        SDK_FIXED_SIZE( delete_marshaled_target_info_t, 0x1 );
    };                                   
};
SDK_VERIFY( struct win::delete_marshaled_target_info_t, 0x1 );
