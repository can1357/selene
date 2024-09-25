#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_working_set_block_t.hpp"

#include "magic/memory_working_set_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_WORKING_SET_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_working_set_information_t        
    {                                              
        using working_set_info_t = sdk::array<struct win::memory_working_set_block_t, 1>;                  
                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                         
        _m00 uint64_t            number_of_entries;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfEntries
        _m01 working_set_info_t  working_set_info;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WorkingSetInfo
                                                   
        SDK_MAGIC_PROPERTIES( "_MEMORY_WORKING_SET_INFORMATION.$", 0x10, true, 0xfc92e02f6f95ac5 );                  
        SDK_FIXED_SIZE( memory_working_set_information_t, 0x10 );                  
    };                                             
};
#include "magic/memory_working_set_information_t.end.hpp"
SDK_VERIFY( struct win::memory_working_set_information_t, 0x10 );
