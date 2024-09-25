#pragma once
#include <sdkgen/support_library.hpp>
#include "process_handle_table_entry_info_t.hpp"

#include "magic/process_handle_snapshot_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_HANDLE_SNAPSHOT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_handle_snapshot_information_t
    {                                           
        using handles_t = sdk::array<struct win::process_handle_table_entry_info_t, 1>;                  
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                
        _m00 uint64_t   number_of_handles;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfHandles
        _m01 handles_t  handles;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Handles
                                                
        SDK_MAGIC_PROPERTIES( "_PROCESS_HANDLE_SNAPSHOT_INFORMATION.$", 0x38, true, 0x7095799b531f801 );                  
        SDK_FIXED_SIZE( process_handle_snapshot_information_t, 0x38 );                  
    };                                          
};
#include "magic/process_handle_snapshot_information_t.end.hpp"
SDK_VERIFY( struct win::process_handle_snapshot_information_t, 0x38 );
