#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fx_log_entry_t.start.hpp"
namespace pop
{
    // [struct _POP_FX_LOG_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_log_entry_t         
    {                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint64_t timestamp;    //{ +0x0000    +0x0000    +0x0000    } | .Timestamp
        _m01 uint8_t  operation;    //{ +0x0008    +0x0008    +0x0008    } | .Operation
        _m02 uint8_t  component;    //{ +0x0009    +0x0009    +0x0009    } | .Component
        _m03 uint16_t processor;    //{ +0x000a    +0x000a    +0x000a    } | .Processor
        _m04 uint16_t process;      //{ +0x000c    +0x000c    +0x000c    } | .Process
        _m05 uint16_t thread;       //{ +0x000e    +0x000e    +0x000e    } | .Thread
        _m06 uint64_t information;  //{ +0x0010    +0x0010    +0x0010    } | .Information
                                  
        SDK_MAGIC_PROPERTIES( "_POP_FX_LOG_ENTRY.$", 0x18, true, 0x87a394ad7631ea32 );            
        SDK_FIXED_SIZE( fx_log_entry_t, 0x18 );            
    };                            
};
#include "magic/fx_log_entry_t.end.hpp"
SDK_VERIFY( struct pop::fx_log_entry_t, 0x18 );
