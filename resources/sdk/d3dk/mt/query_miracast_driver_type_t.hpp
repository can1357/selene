#pragma once
#include <sdkgen/support_library.hpp>
#include "miracast_driver_type_t.hpp"

#include "magic/query_miracast_driver_type_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERY_MIRACAST_DRIVER_TYPE]
    // => WDK 10 (NV)
    //
    struct query_miracast_driver_type_t                                 
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 enum d3dk::mt::miracast_driver_type_t miracast_driver_type;  //{ +0x0000    } | .MiracastDriverType
                                                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERY_MIRACAST_DRIVER_TYPE.$", 0x0, false, 0xc721d171766e7c3d );                     
        SDK_FIXED_SIZE( query_miracast_driver_type_t, 0x4 );                     
    };                                                                  
};
#include "magic/query_miracast_driver_type_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::query_miracast_driver_type_t, 0x4 );
