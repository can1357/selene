#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trustlet_mailbox_key_t.start.hpp"
namespace nt
{
    // [struct _TRUSTLET_MAILBOX_KEY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trustlet_mailbox_key_t                 
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                        
        _m00 sdk::array<uint64_t, 2> secret_value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SecretValue
                                                  
        SDK_MAGIC_PROPERTIES( "_TRUSTLET_MAILBOX_KEY.$", 0x10, true, 0x23a1955e85a22124 );             
        SDK_FIXED_SIZE( trustlet_mailbox_key_t, 0x10 );             
    };                                            
};
#include "magic/trustlet_mailbox_key_t.end.hpp"
SDK_VERIFY( struct nt::trustlet_mailbox_key_t, 0x10 );
