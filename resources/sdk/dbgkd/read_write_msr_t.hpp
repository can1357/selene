#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_write_msr_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_READ_WRITE_MSR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct read_write_msr_t           
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t msr;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Msr
        _m01 uint32_t data_value_low;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DataValueLow
        _m02 uint32_t data_value_high;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataValueHigh
                                      
        SDK_MAGIC_PROPERTIES( "_DBGKD_READ_WRITE_MSR.$", 0xc, true, 0xa0f0617ed7221a2a );                
        SDK_FIXED_SIZE( read_write_msr_t, 0xc );                
    };                                
};
#include "magic/read_write_msr_t.end.hpp"
SDK_VERIFY( struct dbgkd::read_write_msr_t, 0xc );
