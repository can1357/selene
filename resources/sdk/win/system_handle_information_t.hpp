#pragma once
#include <sdkgen/support_library.hpp>
#include "system_handle_table_entry_info_t.hpp"

#include "magic/system_handle_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_HANDLE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_handle_information_t    
    {                                     
        using handles_t = sdk::array<struct win::system_handle_table_entry_info_t, 1>;                  
                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                
        _m00 uint32_t   number_of_handles;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfHandles
        _m01 handles_t  handles;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Handles
                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_HANDLE_INFORMATION.$", 0x20, true, 0x9c8be9c0cd834fe5 );                  
        SDK_FIXED_SIZE( system_handle_information_t, 0x20 );                  
    };                                    
};
#include "magic/system_handle_information_t.end.hpp"
SDK_VERIFY( struct win::system_handle_information_t, 0x20 );
