#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cst_inner_unknown_t.start.hpp"
namespace win
{
    class c_std_event_t;

    // [class CSTInnerUnknown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cst_inner_unknown_t                      
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                         
        _m00 uint32_t                  i_ref_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._iRefCount
        _m01 class win::c_std_event_t* p_parent;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pParent
                                                   
        SDK_MAGIC_PROPERTIES( "CSTInnerUnknown.$", 0x18, true, 0xbb100a262e25c49c );            
        SDK_FIXED_SIZE( cst_inner_unknown_t, 0x18 );            
    };                                             
};
#include "magic/cst_inner_unknown_t.end.hpp"
SDK_VERIFY( class win::cst_inner_unknown_t, 0x18 );
