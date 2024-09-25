#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gdi_teb_batch_t.start.hpp"
namespace nt
{
    // [struct _GDI_TEB_BATCH]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct gdi_teb_batch_t                                   
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                   
        _m00 varuint_t                 offset;                 //{ +0x0000    +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Offset
        _m01 uint64_t                  hdc;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .HDC
        _m02 sdk::array<uint32_t, 310> buffer;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Buffer
                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                   
        _m03 uint1_t                   has_rendering_command;  //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .HasRenderingCommand
                                                             
        SDK_NONVOL_PROPERTIES( "_GDI_TEB_BATCH.$", 0x4e8, true, 0x3259007d7063e36f );                      
        SDK_FIXED_SIZE( gdi_teb_batch_t, 0x4e8 );                      
    };                                                       
};
#include "magic/gdi_teb_batch_t.end.hpp"
SDK_VERIFY( struct nt::gdi_teb_batch_t, 0x4e8 );
