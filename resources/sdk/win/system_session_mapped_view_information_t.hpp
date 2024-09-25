#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_session_mapped_view_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SESSION_MAPPED_VIEW_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_session_mapped_view_information_t        
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                 
        _m00 uint64_t next_entry_offset;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t session_id;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SessionId
        _m02 uint32_t view_failures;                         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ViewFailures
        _m03 uint64_t number_of_bytes_available;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfBytesAvailable
        _m04 uint64_t number_of_bytes_available_contiguous;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NumberOfBytesAvailableContiguous
                                                           
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SESSION_MAPPED_VIEW_INFORMATION.$", 0x20, true, 0x144ab0a387787344 );                                     
        SDK_FIXED_SIZE( system_session_mapped_view_information_t, 0x20 );                                     
    };                                                     
};
#include "magic/system_session_mapped_view_information_t.end.hpp"
SDK_VERIFY( struct win::system_session_mapped_view_information_t, 0x20 );
