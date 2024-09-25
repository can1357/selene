#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_fm_ctrl_unknown_t.start.hpp"
namespace win
{
    class c_free_marshaler_t;

    // [class CFmCtrlUnknown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_fm_ctrl_unknown_t                      
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                         
        _m00 class win::c_free_marshaler_t* pfm;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pfm
        _m01 uint32_t                       c_refs;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._cRefs
                                                   
        SDK_MAGIC_PROPERTIES( "CFmCtrlUnknown.$", 0x18, true, 0x5a74c0e8310bca69 );       
        SDK_FIXED_SIZE( c_fm_ctrl_unknown_t, 0x18 );       
    };                                             
};
#include "magic/c_fm_ctrl_unknown_t.end.hpp"
SDK_VERIFY( class win::c_fm_ctrl_unknown_t, 0x18 );
