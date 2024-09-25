#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/kmtumdversion_t.hpp"

#include "magic/umdfilenameinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_UMDFILENAMEINFO]
    // => WDK 10 (NV)
    //
    struct umdfilenameinfo_t                        
    {                                               
        // WDK 10                                   
        //                                          
        _m00 enum nt::kmtumdversion_t version;        //{ +0x0000    } | .Version
        _m01 sdk::array<wchar_t, 260> umd_file_name;  //{ +0x0004    } | .UmdFileName
                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_UMDFILENAMEINFO.$", 0x0, false, 0x4f8d8a0587dd1004 );              
        SDK_FIXED_SIZE( umdfilenameinfo_t, 0x20c );              
    };                                              
};
#include "magic/umdfilenameinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::umdfilenameinfo_t, 0x20c );
