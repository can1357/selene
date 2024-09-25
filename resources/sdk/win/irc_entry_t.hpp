#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/irc_entry_t.start.hpp"
namespace win
{
    struct irc_entry_t;
    class c_ref_cache_t;

    // [struct IRCEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irc_entry_t                                
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                            
        _m00 struct win::irc_entry_t*  p_next;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNext
        _m01 class win::c_ref_cache_t* p_ref_cache;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pRefCache
        _m02 uint32_t                  c_strong_usage;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cStrongUsage
        _m03 uint32_t                  c_weak_usage;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cWeakUsage
        _m04 uint32_t                  c_strong_refs;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cStrongRefs
        _m05 uint32_t                  c_private_refs;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .cPrivateRefs
        _m06 uint32_t                  c_weak_refs;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cWeakRefs
        _m07 struct nt::guid_t         ipid;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ipid
                                                      
        SDK_MAGIC_PROPERTIES( "IRCEntry.$", 0x38, true, 0x7c6bbfff7be02fd9 );               
        SDK_FIXED_SIZE( irc_entry_t, 0x38 );               
    };                                                
};
#include "magic/irc_entry_t.end.hpp"
SDK_VERIFY( struct win::irc_entry_t, 0x38 );
