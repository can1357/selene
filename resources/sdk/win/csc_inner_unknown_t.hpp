#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/csc_inner_unknown_t.start.hpp"
namespace win
{
    class c_synchronize_container_t;

    // [class CSCInnerUnknown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class csc_inner_unknown_t                                  
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                     
        _m00 uint32_t                              i_ref_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._iRefCount
        _m01 class win::c_synchronize_container_t* p_parent;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pParent
                                                               
        SDK_MAGIC_PROPERTIES( "CSCInnerUnknown.$", 0x18, true, 0xe115f336961e6b46 );            
        SDK_FIXED_SIZE( csc_inner_unknown_t, 0x18 );            
    };                                                         
};
#include "magic/csc_inner_unknown_t.end.hpp"
SDK_VERIFY( class win::csc_inner_unknown_t, 0x18 );
