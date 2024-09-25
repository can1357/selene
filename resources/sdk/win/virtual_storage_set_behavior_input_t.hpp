#pragma once
#include <sdkgen/support_library.hpp>
#include "virtual_storage_behavior_code_t.hpp"

#include "magic/virtual_storage_set_behavior_input_t.start.hpp"
namespace win
{
    // [struct _VIRTUAL_STORAGE_SET_BEHAVIOR_INPUT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct virtual_storage_set_behavior_input_t                      
    {                                                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                           
        _m00 uint32_t                                  size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum win::virtual_storage_behavior_code_t behavior_code;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BehaviorCode
                                                                     
        SDK_NONVOL_PROPERTIES( "_VIRTUAL_STORAGE_SET_BEHAVIOR_INPUT.$", 0x8, true, 0xe017a87ea68464d8 );              
        SDK_FIXED_SIZE( virtual_storage_set_behavior_input_t, 0x8 );              
    };                                                               
};
#include "magic/virtual_storage_set_behavior_input_t.end.hpp"
SDK_VERIFY( struct win::virtual_storage_set_behavior_input_t, 0x8 );
