#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/track_mem_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TRACK_MEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct track_mem_t                       
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                   
        _m00 nt::list_entry_t list;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .List
        _m01 uint32_t         tag;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Tag
        _m02 uint32_t         length;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Length
        _m03 void*            caller;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Caller
        _m04 void*            callers_caller;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CallersCaller
                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_TRACK_MEM.$", 0x28, true, 0x9e313ecf597879e2 );               
        SDK_FIXED_SIZE( track_mem_t, 0x28 );               
    };                                       
};
#include "magic/track_mem_t.end.hpp"
SDK_VERIFY( struct ndis::track_mem_t, 0x28 );
