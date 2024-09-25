#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/call_performance_data_t.start.hpp"
namespace nt
{
    // [struct _CALL_PERFORMANCE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct call_performance_data_t                       
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                               
        _m00 uint64_t                         spin_lock;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpinLock
        _m01 sdk::array<nt::list_entry_t, 64> hash_table;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HashTable
                                                         
        SDK_MAGIC_PROPERTIES( "_CALL_PERFORMANCE_DATA.$", 0x408, true, 0xebe04adc2c35709 );           
        SDK_FIXED_SIZE( call_performance_data_t, 0x408 );           
    };                                                   
};
#include "magic/call_performance_data_t.end.hpp"
SDK_VERIFY( struct nt::call_performance_data_t, 0x408 );
