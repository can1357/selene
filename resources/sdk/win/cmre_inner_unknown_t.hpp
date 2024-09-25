#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmre_inner_unknown_t.start.hpp"
namespace win
{
    class c_manual_reset_event_t;

    // [class CMREInnerUnknown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cmre_inner_unknown_t                              
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                  
        _m00 uint32_t                           i_ref_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._iRefCount
        _m01 class win::c_manual_reset_event_t* p_parent;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pParent
                                                            
        SDK_MAGIC_PROPERTIES( "CMREInnerUnknown.$", 0x18, true, 0xcecce0bf0e759d79 );            
        SDK_FIXED_SIZE( cmre_inner_unknown_t, 0x18 );            
    };                                                      
};
#include "magic/cmre_inner_unknown_t.end.hpp"
SDK_VERIFY( class win::cmre_inner_unknown_t, 0x18 );
