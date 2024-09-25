#pragma once
#include <sdkgen/support_library.hpp>
#include "pnp_key_type_t.hpp"

#include "magic/query_physical_adapter_pnp_key_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERY_PHYSICAL_ADAPTER_PNP_KEY]
    // => WDK 10 (NV)
    //
    struct query_physical_adapter_pnp_key_t                       
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 uint32_t                      physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 enum d3dk::mt::pnp_key_type_t pn_p_key_type;           //{ +0x0004    } | .PnPKeyType
        _m02 wchar_t*                      p_dest;                  //{ +0x0008    } | .pDest
        _m03 uint32_t*                     p_cch_dest;              //{ +0x0010    } | .pCchDest
                                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERY_PHYSICAL_ADAPTER_PNP_KEY.$", 0x0, false, 0x672be32d8e3c676e );                       
        SDK_FIXED_SIZE( query_physical_adapter_pnp_key_t, 0x18 );                       
    };                                                            
};
#include "magic/query_physical_adapter_pnp_key_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::query_physical_adapter_pnp_key_t, 0x18 );
