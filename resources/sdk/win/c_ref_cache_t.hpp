#pragma once
#include <sdkgen/support_library.hpp>
#include "soid_registration_t.hpp"

#include "magic/c_ref_cache_t.start.hpp"
namespace win
{
    struct irc_entry_t;

    // [class CRefCache]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ref_cache_t                                     
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                  
        _m00 uint32_t                        c_refs;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._cRefs
        _m01 uint32_t                        c_strong_itfs;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | ._cStrongItfs
        _m02 uint32_t                        c_weak_itfs;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cWeakItfs
        _m03 uint32_t                        c_table_strong;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._cTableStrong
        _m04 uint32_t                        c_ir_cs;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._cIRCs
        _m05 struct win::irc_entry_t*        p_irc_list;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pIRCList
        _m06 struct win::soid_registration_t soid_reg;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._soidReg
                                                            
        SDK_MAGIC_PROPERTIES( "CRefCache.$", 0x78, true, 0xbf704c026300e5f6 );               
        SDK_DYNAMIC_SIZE( c_ref_cache_t );                  
    };                                                      
};
#include "magic/c_ref_cache_t.end.hpp"
