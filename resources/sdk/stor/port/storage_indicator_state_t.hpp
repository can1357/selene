#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_indicator_state_t.start.hpp"
namespace stor::port
{
    // [union _STORAGE_INDICATOR_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union storage_indicator_state_t                   
    {                                                 
        struct u0_state_t                             
        {                                             
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
            //                                        
            _m00 uint1_t ok;                            //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Ok
            _m01 uint1_t locate;                        //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .Locate
            _m02 uint1_t fail;                          //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .Fail
            _m03 uint1_t rebuild;                       //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .Rebuild
            _m04 uint1_t pfa;                           //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .PFA
            _m05 uint1_t hot_spare;                     //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .HotSpare
            _m06 uint1_t in_a_critical_array;           //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .InACriticalArray
            _m07 uint1_t in_a_failed_array;             //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .InAFailedArray
            _m08 uint1_t invalid_device;                //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .InvalidDevice
            _m09 uint1_t disabled;                      //{ +0x0000@9  +0x0000@9  +0x0000@9  } | .Disabled
                                                      
            SDK_MAGIC_PROPERTIES( "_STORAGE_INDICATOR_STATE.State.$", 0x4, true, 0xb295de876074d624 );                             
            SDK_FIXED_SIZE( u0_state_t, 0x4 );                             
        };                                            
                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                            
        _m10 u0_state_t                      state;     //{ +0x0000    +0x0000    +0x0000    } | .State
        _m11 uint32_t                        as_ulong;  //{ +0x0000    +0x0000    +0x0000    } | .AsUlong
                                                      
        SDK_MAGIC_PROPERTIES( "_STORAGE_INDICATOR_STATE.$", 0x4, true, 0x9d4eca18340ace39 );         
        SDK_FIXED_SIZE( storage_indicator_state_t, 0x4 );         
    };                                                
};
#include "magic/storage_indicator_state_t.end.hpp"
SDK_VERIFY( struct stor::port::storage_indicator_state_t::u0_state_t, 0x4 );
SDK_VERIFY( union stor::port::storage_indicator_state_t, 0x4 );
