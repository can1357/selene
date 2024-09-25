#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3d/ddi/hdr_metadata_type_t.hpp"

#include "magic/hdr_metadata_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_HDR_METADATA]
    // => WDK 10 (NV)
    //
    struct hdr_metadata_t                                   
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 enum d3d::ddi::hdr_metadata_type_t type;         //{ +0x0000    } | .Type
        _m01 uint32_t                           size;         //{ +0x0004    } | .Size
        _m02 void*                              p_meta_data;  //{ +0x0008    } | .pMetaData
                                                            
        SDK_NONVOL_PROPERTIES( "_DXGK_HDR_METADATA.$", 0x0, false, 0xf2282ab70c1b41fc );            
        SDK_FIXED_SIZE( hdr_metadata_t, 0x10 );             
    };                                                      
};
#include "magic/hdr_metadata_t.end.hpp"
SDK_VERIFY( struct dxgk::hdr_metadata_t, 0x10 );
