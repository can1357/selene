#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gdi_teb_batch32_t.start.hpp"
namespace nt
{
    // [struct _GDI_TEB_BATCH32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gdi_teb_batch32_t                                 
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                   
        _m00 uint31_t                  offset;                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Offset
        _m01 uint1_t                   has_rendering_command;  //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .HasRenderingCommand
        _m02 uint32_t                  hdc;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HDC
        _m03 sdk::array<uint32_t, 310> buffer;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
                                                             
        SDK_MAGIC_PROPERTIES( "_GDI_TEB_BATCH32.$", 0x4e0, true, 0x160c73aec995a9fc );                      
        SDK_FIXED_SIZE( gdi_teb_batch32_t, 0x4e0 );                      
    };                                                       
};
#include "magic/gdi_teb_batch32_t.end.hpp"
SDK_VERIFY( struct nt::gdi_teb_batch32_t, 0x4e0 );
