#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gdi_teb_batch64_t.start.hpp"
namespace nt
{
    // [struct _GDI_TEB_BATCH64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gdi_teb_batch64_t                                 
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                   
        _m00 uint31_t                  offset;                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Offset
        _m01 uint1_t                   has_rendering_command;  //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .HasRenderingCommand
        _m02 uint64_t                  hdc;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HDC
        _m03 sdk::array<uint32_t, 310> buffer;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Buffer
                                                             
        SDK_MAGIC_PROPERTIES( "_GDI_TEB_BATCH64.$", 0x4e8, true, 0xeebdc293e386e3f0 );                      
        SDK_FIXED_SIZE( gdi_teb_batch64_t, 0x4e8 );                      
    };                                                       
};
#include "magic/gdi_teb_batch64_t.end.hpp"
SDK_VERIFY( struct nt::gdi_teb_batch64_t, 0x4e8 );
