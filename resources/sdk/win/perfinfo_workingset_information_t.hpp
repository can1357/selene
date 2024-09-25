#pragma once
#include <sdkgen/support_library.hpp>
#include "perfinfo_workingset_entry_t.hpp"

#include "magic/perfinfo_workingset_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_WORKINGSET_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_workingset_information_t
    {                                       
        using ws_entry_t = sdk::array<struct win::perfinfo_workingset_entry_t, 1>;         
                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                        
        _m00 uint32_t    count;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 ws_entry_t  ws_entry;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .WsEntry
                                            
        SDK_MAGIC_PROPERTIES( "_PERFINFO_WORKINGSET_INFORMATION.$", 0x48, true, 0xc62787243c4307ed );         
        SDK_FIXED_SIZE( perfinfo_workingset_information_t, 0x48 );         
    };                                      
};
#include "magic/perfinfo_workingset_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_workingset_information_t, 0x48 );
