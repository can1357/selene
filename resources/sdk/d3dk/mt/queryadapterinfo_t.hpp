#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/kmtqueryadapterinfotype_t.hpp"

#include "magic/queryadapterinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYADAPTERINFO]
    // => WDK 10 (NV)
    //
    struct queryadapterinfo_t                                            
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                           h_adapter;                 //{ +0x0000    } | .hAdapter
        _m01 enum nt::kmtqueryadapterinfotype_t type;                      //{ +0x0004    } | .Type
        _m02 void*                              p_private_driver_data;     //{ +0x0008    } | .pPrivateDriverData
        _m03 uint32_t                           private_driver_data_size;  //{ +0x0010    } | .PrivateDriverDataSize
                                                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYADAPTERINFO.$", 0x0, false, 0x4709cde480a7d6d9 );                         
        SDK_FIXED_SIZE( queryadapterinfo_t, 0x18 );                         
    };                                                                   
};
#include "magic/queryadapterinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::queryadapterinfo_t, 0x18 );
