#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_call_count_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_CALL_COUNT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_call_count_information_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t length;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t number_of_tables;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfTables
                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_CALL_COUNT_INFORMATION.$", 0x8, true, 0xe96a48d4d37fe60a );                 
        SDK_FIXED_SIZE( system_call_count_information_t, 0x8 );                 
    };                                    
};
#include "magic/system_call_count_information_t.end.hpp"
SDK_VERIFY( struct win::system_call_count_information_t, 0x8 );
