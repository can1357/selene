#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct epartition_t; }

#include "magic/partition_context_t.start.hpp"
namespace etw
{
    // [struct _ETW_PARTITION_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_context_t                  
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                      
        _m00 struct nt::epartition_t* partition;  //{ +0x0000    +0x0000    +0x0000    } | .Partition
                                                
        SDK_MAGIC_PROPERTIES( "_ETW_PARTITION_CONTEXT.$", 0x8, true, 0xa69c810dbc69e45 );          
        SDK_FIXED_SIZE( partition_context_t, 0x8 );          
    };                                          
};
#include "magic/partition_context_t.end.hpp"
SDK_VERIFY( struct etw::partition_context_t, 0x8 );
