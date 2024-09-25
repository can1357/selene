#pragma once
#include <sdkgen/support_library.hpp>
#include "clienthint_t.hpp"
#include "../../d3d/ddi/createcontextflags_t.hpp"

#include "magic/createcontextvirtual_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATECONTEXTVIRTUAL]
    // => WDK 10 (NV)
    //
    struct createcontextvirtual_t                                           
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 uint32_t                              h_device;                  //{ +0x0000    } | .hDevice
        _m01 uint32_t                              node_ordinal;              //{ +0x0004    } | .NodeOrdinal
        _m02 uint32_t                              engine_affinity;           //{ +0x0008    } | .EngineAffinity
        _m03 struct d3d::ddi::createcontextflags_t flags;                     //{ +0x000c    } | .Flags
        _m04 void*                                 p_private_driver_data;     //{ +0x0010    } | .pPrivateDriverData
        _m05 uint32_t                              private_driver_data_size;  //{ +0x0018    } | .PrivateDriverDataSize
        _m06 enum d3dk::mt::clienthint_t           client_hint;               //{ +0x001c    } | .ClientHint
        _m07 uint32_t                              h_context;                 //{ +0x0020    } | .hContext
                                                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATECONTEXTVIRTUAL.$", 0x0, false, 0x998ae2449fb24d68 );                         
        SDK_FIXED_SIZE( createcontextvirtual_t, 0x28 );                         
    };                                                                      
};
#include "magic/createcontextvirtual_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createcontextvirtual_t, 0x28 );
