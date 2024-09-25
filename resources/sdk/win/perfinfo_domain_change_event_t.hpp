#pragma once
#include <sdkgen/support_library.hpp>
#include "perfinfo_domain_change_event_reason_t.hpp"

#include "magic/perfinfo_domain_change_event_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_DOMAIN_CHANGE_EVENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_domain_change_event_t                               
    {                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                              
        _m00 uint64_t                                        new_domain;  //{ +0x0000    +0x0000    +0x0000    } | .NewDomain
        _m01 enum win::perfinfo_domain_change_event_reason_t reason;      //{ +0x0008    +0x0008    +0x0008    } | .Reason
        _m02 uint32_t                                        thread_id;   //{ +0x000c    +0x000c    +0x000c    } | .ThreadId
                                                                        
        SDK_MAGIC_PROPERTIES( "_PERFINFO_DOMAIN_CHANGE_EVENT.$", 0x10, true, 0xf52fa430e5fc84b9 );           
        SDK_FIXED_SIZE( perfinfo_domain_change_event_t, 0x10 );           
    };                                                                  
};
#include "magic/perfinfo_domain_change_event_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_domain_change_event_t, 0x10 );
