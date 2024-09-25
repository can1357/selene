#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"
#include "queryfseflags_t.hpp"

#include "magic/queryfseblock_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYFSEBLOCK]
    // => WDK 10 (NV)
    //
    struct queryfseblock_t                                    
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 struct nt::luid_t               adapter_luid;      //{ +0x0000    } | .AdapterLuid
        _m01 uint32_t                        h_adapter;         //{ +0x0008    } | .hAdapter
        _m02 uint32_t                        vid_pn_source_id;  //{ +0x000c    } | .VidPnSourceId
        _m03 union d3dk::mt::queryfseflags_t flags;             //{ +0x0010    } | .Flags
                                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYFSEBLOCK.$", 0x0, false, 0x885e4e9fed454b53 );                 
        SDK_FIXED_SIZE( queryfseblock_t, 0x14 );                 
    };                                                        
};
#include "magic/queryfseblock_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::queryfseblock_t, 0x14 );
