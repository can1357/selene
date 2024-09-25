#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_value_layer_information_t.start.hpp"
namespace win
{
    // [struct _KEY_VALUE_LAYER_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_value_layer_information_t
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 uint1_t is_tombstone;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .IsTombstone
                                        
        SDK_NONVOL_PROPERTIES( "_KEY_VALUE_LAYER_INFORMATION.$", 0x4, true, 0x86f1e378b19a8fd5 );             
        SDK_FIXED_SIZE( key_value_layer_information_t, 0x4 );             
    };                                  
};
#include "magic/key_value_layer_information_t.end.hpp"
SDK_VERIFY( struct win::key_value_layer_information_t, 0x4 );
