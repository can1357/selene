#pragma once
#include <sdkgen/support_library.hpp>
#include "system_bigpool_entry_t.hpp"

#include "magic/system_session_bigpool_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SESSION_BIGPOOL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_session_bigpool_information_t  
    {                                            
        using allocated_info_t = sdk::array<struct win::system_bigpool_entry_t, 1>;                  
                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                       
        _m00 uint64_t          next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t          session_id;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SessionId
        _m02 uint32_t          count;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Count
        _m03 allocated_info_t  allocated_info;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocatedInfo
                                                 
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SESSION_BIGPOOL_INFORMATION.$", 0x28, true, 0x679cb37c5cf7f683 );                  
        SDK_FIXED_SIZE( system_session_bigpool_information_t, 0x28 );                  
    };                                           
};
#include "magic/system_session_bigpool_information_t.end.hpp"
SDK_VERIFY( struct win::system_session_bigpool_information_t, 0x28 );
