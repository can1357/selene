#pragma once
#include <sdkgen/support_library.hpp>
#include "../../dxgk/gpuclockdata_t.hpp"

#include "magic/queryclockcalibration_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYCLOCKCALIBRATION]
    // => WDK 10 (NV)
    //
    struct queryclockcalibration_t                              
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 uint32_t                    h_adapter;               //{ +0x0000    } | .hAdapter
        _m01 uint32_t                    node_ordinal;            //{ +0x0004    } | .NodeOrdinal
        _m02 uint32_t                    physical_adapter_index;  //{ +0x0008    } | .PhysicalAdapterIndex
        _m03 struct dxgk::gpuclockdata_t clock_data;              //{ +0x000c    } | .ClockData
                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYCLOCKCALIBRATION.$", 0x0, false, 0xa031e0272cb73d80 );                       
        SDK_FIXED_SIZE( queryclockcalibration_t, 0x28 );                       
    };                                                          
};
#include "magic/queryclockcalibration_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::queryclockcalibration_t, 0x28 );
