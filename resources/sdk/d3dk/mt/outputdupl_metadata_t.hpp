#pragma once
#include <sdkgen/support_library.hpp>
#include "outputdupl_metadatatype_t.hpp"

#include "magic/outputdupl_metadata_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTPUTDUPL_METADATA]
    // => WDK 10 (NV)
    //
    struct outputdupl_metadata_t                                           
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 uint32_t                                 h_adapter;             //{ +0x0000    } | .hAdapter
        _m01 uint32_t                                 vid_pn_source_id;      //{ +0x0004    } | .VidPnSourceId
        _m02 enum d3dk::mt::outputdupl_metadatatype_t type;                  //{ +0x0008    } | .Type
        _m03 uint32_t                                 buffer_size_supplied;  //{ +0x000c    } | .BufferSizeSupplied
        _m04 void*                                    p_buffer;              //{ +0x0010    } | .pBuffer
        _m05 uint32_t                                 buffer_size_required;  //{ +0x0018    } | .BufferSizeRequired
                                                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTPUTDUPL_METADATA.$", 0x0, false, 0xe7ab51463e8ae685 );                     
        SDK_FIXED_SIZE( outputdupl_metadata_t, 0x20 );                     
    };                                                                     
};
#include "magic/outputdupl_metadata_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outputdupl_metadata_t, 0x20 );
