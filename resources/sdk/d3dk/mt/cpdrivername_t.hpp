#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cpdrivername_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CPDRIVERNAME]
    // => WDK 10 (NV)
    //
    struct cpdrivername_t                                          
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 sdk::array<wchar_t, 260> content_protection_file_name;  //{ +0x0000    } | .ContentProtectionFileName
                                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CPDRIVERNAME.$", 0x0, false, 0xd25a3f80cfa18d3 );                             
        SDK_FIXED_SIZE( cpdrivername_t, 0x208 );                             
    };                                                             
};
#include "magic/cpdrivername_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::cpdrivername_t, 0x208 );
