#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mailslot_create_parameters_t.start.hpp"
namespace nt
{
    // [struct _MAILSLOT_CREATE_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mailslot_create_parameters_t    
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t mailslot_quota;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MailslotQuota
        _m01 uint32_t maximum_message_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .MaximumMessageSize
        _m02 int64_t  read_timeout;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ReadTimeout
        _m03 uint8_t  timeout_specified;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeoutSpecified
                                           
        SDK_NONVOL_PROPERTIES( "_MAILSLOT_CREATE_PARAMETERS.$", 0x18, true, 0x161fb00fc3dd52dd );                     
        SDK_FIXED_SIZE( mailslot_create_parameters_t, 0x18 );                     
    };                                     
};
#include "magic/mailslot_create_parameters_t.end.hpp"
SDK_VERIFY( struct nt::mailslot_create_parameters_t, 0x18 );
