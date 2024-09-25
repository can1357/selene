#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getruntimedata_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GETRUNTIMEDATA]
    // => WDK 10 (NV)
    //
    struct getruntimedata_t             
    {                                   
        // WDK 10                       
        //                              
        _m00 uint32_t h_adapter;          //{ +0x0000    } | .hAdapter
        _m01 uint32_t h_global_share;     //{ +0x0004    } | .hGlobalShare
        _m02 void*    p_runtime_data;     //{ +0x0008    } | .pRuntimeData
        _m03 uint32_t runtime_data_size;  //{ +0x0010    } | .RuntimeDataSize
                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETRUNTIMEDATA.$", 0x0, false, 0xee97102d3e33ab84 );                  
        SDK_FIXED_SIZE( getruntimedata_t, 0x18 );                  
    };                                  
};
#include "magic/getruntimedata_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getruntimedata_t, 0x18 );
