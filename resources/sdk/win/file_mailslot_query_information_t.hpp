#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_mailslot_query_information_t.start.hpp"
namespace win
{
    // [struct _FILE_MAILSLOT_QUERY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_mailslot_query_information_t
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t maximum_message_size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MaximumMessageSize
        _m01 uint32_t mailslot_quota;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .MailslotQuota
        _m02 uint32_t next_message_size;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NextMessageSize
        _m03 uint32_t messages_available;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .MessagesAvailable
        _m04 int64_t  read_timeout;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ReadTimeout
                                            
        SDK_NONVOL_PROPERTIES( "_FILE_MAILSLOT_QUERY_INFORMATION.$", 0x18, true, 0x50445aab288ad6ff );                     
        SDK_FIXED_SIZE( file_mailslot_query_information_t, 0x18 );                     
    };                                      
};
#include "magic/file_mailslot_query_information_t.end.hpp"
SDK_VERIFY( struct win::file_mailslot_query_information_t, 0x18 );
