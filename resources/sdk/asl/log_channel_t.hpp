#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/log_channel_t.start.hpp"
namespace asl
{
    // [struct _ASL_LOG_CHANNEL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct log_channel_t                    
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                  
        _m00 sdk::array<char, 64> name;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m01 void volatile*       data;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Data
        _m02 volatile uint32_t    data_size;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DataSize
        _m03 uint32_t             quota;      //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .Quota
        _m04 uint32_t             flags;      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Flags
        _m05 uint32_t             level;      //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .Level
        _m06 int32_t              fence;      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Fence
                                            
        SDK_MAGIC_PROPERTIES( "_ASL_LOG_CHANNEL.$", 0x5c, true, 0xa491076af8023c96 );          
        SDK_FIXED_SIZE( log_channel_t, 0x5c );          
    };                                      
};
#include "magic/log_channel_t.end.hpp"
SDK_VERIFY( struct asl::log_channel_t, 0x5c );
