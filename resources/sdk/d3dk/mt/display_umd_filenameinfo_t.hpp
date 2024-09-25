#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/kmt_display_umd_version_t.hpp"

#include "magic/display_umd_filenameinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DISPLAY_UMD_FILENAMEINFO]
    // => WDK 10 (NV)
    //
    struct display_umd_filenameinfo_t                         
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 enum nt::kmt_display_umd_version_t version;        //{ +0x0000    } | .Version
        _m01 sdk::array<wchar_t, 260>           umd_file_name;  //{ +0x0004    } | .UmdFileName
                                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DISPLAY_UMD_FILENAMEINFO.$", 0x0, false, 0x729c688a6e73ce98 );              
        SDK_FIXED_SIZE( display_umd_filenameinfo_t, 0x20c );              
    };                                                        
};
#include "magic/display_umd_filenameinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::display_umd_filenameinfo_t, 0x20c );
