#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gpuenginetopology_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GPUENGINETOPOLOGY]
    // => WDK 10 (NV)
    //
    struct gpuenginetopology_t                      
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint32_t nb_asymetric_processing_nodes;  //{ +0x0000    } | .NbAsymetricProcessingNodes
                                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_GPUENGINETOPOLOGY.$", 0x0, false, 0xbe9079fd2e954a28 );                              
        SDK_FIXED_SIZE( gpuenginetopology_t, 0x104 );                              
    };                                              
};
#include "magic/gpuenginetopology_t.end.hpp"
SDK_VERIFY( struct dxgk::gpuenginetopology_t, 0x104 );
