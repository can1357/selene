#pragma once
#include <sdkgen/support_library.hpp>

namespace tag { struct reminterfaceref_t; }

#include "magic/rif_ref_buffer_t.start.hpp"
namespace win
{
    // [class RifRefBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class rif_ref_buffer_t                                      
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                      
        _m00 const uint16_t                       c_max_rif_ref;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._cMaxRifRef
        _m01 uint16_t const*                      pc_rif_ref;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pcRifRef
        _m02 struct tag::reminterfaceref_t const* p_buffer;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pBuffer
        _m03 uint16_t                             c_rif_ref;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._cRifRef
                                                                
        SDK_MAGIC_PROPERTIES( "RifRefBuffer.$", 0x20, true, 0x8457820de59869d2 );              
        SDK_FIXED_SIZE( rif_ref_buffer_t, 0x20 );               
    };                                                          
};
#include "magic/rif_ref_buffer_t.end.hpp"
SDK_VERIFY( class win::rif_ref_buffer_t, 0x20 );
