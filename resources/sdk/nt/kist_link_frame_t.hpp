#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kist_link_frame_t.start.hpp"
namespace nt
{
    struct kist_base_frame_t;

    // [struct _KIST_LINK_FRAME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kist_link_frame_t                              
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                
        _m00 struct nt::kist_base_frame_t* ist_base_frame;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IstBaseFrame
        _m01 uint32_t                      signature;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Signature
                                                          
        SDK_MAGIC_PROPERTIES( "_KIST_LINK_FRAME.$", 0x20, true, 0x578324f2d3d0b112 );               
        SDK_FIXED_SIZE( kist_link_frame_t, 0x20 );               
    };                                                    
};
#include "magic/kist_link_frame_t.end.hpp"
SDK_VERIFY( struct nt::kist_link_frame_t, 0x20 );
