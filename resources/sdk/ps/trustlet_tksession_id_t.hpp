#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trustlet_tksession_id_t.start.hpp"
namespace ps
{
    // [struct _PS_TRUSTLET_TKSESSION_ID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trustlet_tksession_id_t              
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                      
        _m00 sdk::array<uint64_t, 4> session_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionId
                                                
        SDK_MAGIC_PROPERTIES( "_PS_TRUSTLET_TKSESSION_ID.$", 0x20, true, 0xf603492aad3ea841 );           
        SDK_FIXED_SIZE( trustlet_tksession_id_t, 0x20 );           
    };                                          
};
#include "magic/trustlet_tksession_id_t.end.hpp"
SDK_VERIFY( struct ps::trustlet_tksession_id_t, 0x20 );
