#pragma once
#include <sdkgen/support_library.hpp>
#include "hardware_counter_type_t.hpp"

#include "magic/counter_reading_t.start.hpp"
namespace nt
{
    // [struct _COUNTER_READING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct counter_reading_t                        
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                          
        _m00 enum nt::hardware_counter_type_t type;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                         index;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Index
        _m02 uint64_t                         start;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Start
        _m03 uint64_t                         total;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Total
                                                    
        SDK_MAGIC_PROPERTIES( "_COUNTER_READING.$", 0x18, true, 0x1aec6901dbfe2da );      
        SDK_FIXED_SIZE( counter_reading_t, 0x18 );      
    };                                              
};
#include "magic/counter_reading_t.end.hpp"
SDK_VERIFY( struct nt::counter_reading_t, 0x18 );
