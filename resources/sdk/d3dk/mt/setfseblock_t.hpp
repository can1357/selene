#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"
#include "setfseblockflags_t.hpp"

#include "magic/setfseblock_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETFSEBLOCK]
    // => WDK 10 (NV)
    //
    struct setfseblock_t                                         
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 struct nt::luid_t                  adapter_luid;      //{ +0x0000    } | .AdapterLuid
        _m01 uint32_t                           h_adapter;         //{ +0x0008    } | .hAdapter
        _m02 uint32_t                           vid_pn_source_id;  //{ +0x000c    } | .VidPnSourceId
        _m03 union d3dk::mt::setfseblockflags_t flags;             //{ +0x0010    } | .Flags
                                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETFSEBLOCK.$", 0x0, false, 0x65e7b88e332796bc );                 
        SDK_FIXED_SIZE( setfseblock_t, 0x14 );                   
    };                                                           
};
#include "magic/setfseblock_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setfseblock_t, 0x14 );
