#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfstate_domain_event_t.start.hpp"
namespace ppm
{
    // [struct PPM_PERFSTATE_DOMAIN_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfstate_domain_event_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t state;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .State
        _m01 uint32_t latency;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Latency
        _m02 uint32_t speed;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Speed
        _m03 uint64_t processors;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Processors
                                   
        SDK_MAGIC_PROPERTIES( "PPM_PERFSTATE_DOMAIN_EVENT.$", 0x18, true, 0x123739076f0c656e );           
        SDK_FIXED_SIZE( perfstate_domain_event_t, 0x18 );           
    };                             
};
#include "magic/perfstate_domain_event_t.end.hpp"
SDK_VERIFY( struct ppm::perfstate_domain_event_t, 0x18 );
