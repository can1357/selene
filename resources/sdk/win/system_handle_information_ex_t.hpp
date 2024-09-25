#pragma once
#include <sdkgen/support_library.hpp>
#include "system_handle_table_entry_info_ex_t.hpp"

#include "magic/system_handle_information_ex_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_HANDLE_INFORMATION_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_handle_information_ex_t 
    {                                     
        using handles_t = sdk::array<struct win::system_handle_table_entry_info_ex_t, 1>;                  
                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                
        _m00 uint64_t   number_of_handles;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfHandles
        _m01 handles_t  handles;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Handles
                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_HANDLE_INFORMATION_EX.$", 0x38, true, 0xa4c6c195e806ba20 );                  
        SDK_FIXED_SIZE( system_handle_information_ex_t, 0x38 );                  
    };                                    
};
#include "magic/system_handle_information_ex_t.end.hpp"
SDK_VERIFY( struct win::system_handle_information_ex_t, 0x38 );
