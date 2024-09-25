#pragma once
#include <sdkgen/support_library.hpp>
#include "system_pool_limit_info_t.hpp"

#include "magic/system_pool_limit_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_POOL_LIMIT_INFORMATION]
    // => Windows 11
    //
    struct system_pool_limit_information_t  
    {                                       
        using limit_entries_t = sdk::array<struct win::system_pool_limit_info_t, 1>;              
                                            
        // Windows 11                       
        //                                  
        _m00 uint32_t         version;        //{ +0x0000    } | .Version
        _m01 uint32_t         entry_count;    //{ +0x0004    } | .EntryCount
        _m02 limit_entries_t  limit_entries;  //{ +0x0008    } | .LimitEntries
                                            
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POOL_LIMIT_INFORMATION.$", 0x0, false, 0x6774131c5d39f9f8 );              
        SDK_FIXED_SIZE( system_pool_limit_information_t, 0x38 );              
    };                                      
};
#include "magic/system_pool_limit_information_t.end.hpp"
SDK_VERIFY( struct win::system_pool_limit_information_t, 0x38 );
