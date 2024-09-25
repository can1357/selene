#pragma once
#include <sdkgen/support_library.hpp>
#include "system_pooltag_t.hpp"

#include "magic/system_session_pooltag_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SESSION_POOLTAG_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_session_pooltag_information_t                            
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                 
        _m00 uint64_t                                    next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t                                    session_id;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SessionId
        _m02 uint32_t                                    count;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Count
        _m03 sdk::array<struct win::system_pooltag_t, 1> tag_info;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TagInfo
                                                                           
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SESSION_POOLTAG_INFORMATION.$", 0x38, true, 0x474d0620f0dcddb1 );                  
        SDK_FIXED_SIZE( system_session_pooltag_information_t, 0x38 );                  
    };                                                                     
};
#include "magic/system_session_pooltag_information_t.end.hpp"
SDK_VERIFY( struct win::system_session_pooltag_information_t, 0x38 );
