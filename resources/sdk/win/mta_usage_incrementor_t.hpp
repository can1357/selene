#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mta_usage_incrementor_t.start.hpp"
namespace win
{
    // [struct _MTA_USAGE_INCREMENTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mta_usage_incrementor_t 
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t ul_time;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulTime
        _m01 uint32_t dw_thread_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwThreadId
                                   
        SDK_MAGIC_PROPERTIES( "_MTA_USAGE_INCREMENTOR.$", 0x8, true, 0xcd9359070ef711e3 );             
        SDK_FIXED_SIZE( mta_usage_incrementor_t, 0x8 );             
    };                             
};
#include "magic/mta_usage_incrementor_t.end.hpp"
SDK_VERIFY( struct win::mta_usage_incrementor_t, 0x8 );
