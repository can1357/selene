#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dlist_driver_name_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DLIST_DRIVER_NAME]
    // => WDK 10 (NV)
    //
    struct dlist_driver_name_t                         
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 sdk::array<wchar_t, 260> d_list_file_name;  //{ +0x0000    } | .DListFileName
                                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DLIST_DRIVER_NAME.$", 0x0, false, 0x682f1ded9f692d73 );                 
        SDK_FIXED_SIZE( dlist_driver_name_t, 0x208 );                 
    };                                                 
};
#include "magic/dlist_driver_name_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::dlist_driver_name_t, 0x208 );
