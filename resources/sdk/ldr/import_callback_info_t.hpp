#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/import_callback_info_t.start.hpp"
namespace ldr
{
    // [struct _LDR_IMPORT_CALLBACK_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct import_callback_info_t                                         
    {                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                
        _m00 sdk::function<void(void*, char*)>* import_callback_routine;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ImportCallbackRoutine
        _m01 void*                              import_callback_parameter;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ImportCallbackParameter
                                                                          
        SDK_NONVOL_PROPERTIES( "_LDR_IMPORT_CALLBACK_INFO.$", 0x10, true, 0xee47890c7cc204e9 );                          
        SDK_FIXED_SIZE( import_callback_info_t, 0x10 );                          
    };                                                                    
};
#include "magic/import_callback_info_t.end.hpp"
SDK_VERIFY( struct ldr::import_callback_info_t, 0x10 );
