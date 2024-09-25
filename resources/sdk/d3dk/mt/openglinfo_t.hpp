#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/openglinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENGLINFO]
    // => WDK 10 (NV)
    //
    struct openglinfo_t                                         
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 sdk::array<wchar_t, 260> umd_open_gl_icd_file_name;  //{ +0x0000    } | .UmdOpenGlIcdFileName
        _m01 uint32_t                 version;                    //{ +0x0208    } | .Version
        _m02 uint32_t                 flags;                      //{ +0x020c    } | .Flags
                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENGLINFO.$", 0x0, false, 0xfb93ffa320fdfaa5 );                          
        SDK_FIXED_SIZE( openglinfo_t, 0x210 );                          
    };                                                          
};
#include "magic/openglinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::openglinfo_t, 0x210 );
