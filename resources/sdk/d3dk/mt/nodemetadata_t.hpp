#pragma once
#include <sdkgen/support_library.hpp>
#include "../../dxgk/nodemetadata_t.hpp"

#include "magic/nodemetadata_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_NODEMETADATA]
    // => WDK 10 (NV)
    //
    struct nodemetadata_t                                               
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 uint32_t                    node_ordinal_and_adapter_index;  //{ +0x0000    } | .NodeOrdinalAndAdapterIndex
        _m01 struct dxgk::nodemetadata_t node_data;                       //{ +0x0004    } | .NodeData
                                                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_NODEMETADATA.$", 0x0, false, 0xa11e17467f243c5b );                               
        SDK_FIXED_SIZE( nodemetadata_t, 0x4e );                               
    };                                                                  
};
#include "magic/nodemetadata_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::nodemetadata_t, 0x4e );
