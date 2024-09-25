#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_indicator_state_t.hpp"

#include "magic/storage_set_indicator_t.start.hpp"
namespace stor::port
{
    // [struct _STORAGE_SET_INDICATOR]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct storage_set_indicator_t                                         
    {                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                 
        _m00 uint32_t                                    version;            //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                    size;               //{ +0x0004    +0x0004    +0x0004    } | .Size
        _m02 union stor::port::storage_indicator_state_t indicator_control;  //{ +0x0008    +0x0008    +0x0008    } | .IndicatorControl
        _m03 uint8_t                                     set;                //{ +0x000c    +0x000c    +0x000c    } | .Set
                                                                           
        SDK_MAGIC_PROPERTIES( "_STORAGE_SET_INDICATOR.$", 0x10, true, 0xf84df4a28a417230 );                  
        SDK_FIXED_SIZE( storage_set_indicator_t, 0x10 );                   
    };                                                                     
};
#include "magic/storage_set_indicator_t.end.hpp"
SDK_VERIFY( struct stor::port::storage_set_indicator_t, 0x10 );
