#pragma once
#include <sdkgen/support_library.hpp>
#include "outputdupl_keyedmutex_t.hpp"
#include "outputduplcreationflags_t.hpp"

#include "magic/create_outputdupl_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATE_OUTPUTDUPL]
    // => WDK 10 (NV)
    //
    struct create_outputdupl_t                                                     
    {                                                                              
        using keyed_mutexs_t = sdk::array<struct d3dk::mt::outputdupl_keyedmutex_t, 3>;                           
                                                                                   
        // WDK 10                                                                  
        //                                                                         
        _m00 uint32_t                                   h_adapter;                   //{ +0x0000    } | .hAdapter
        _m01 uint32_t                                   vid_pn_source_id;            //{ +0x0004    } | .VidPnSourceId
        _m02 uint32_t                                   keyed_mutex_count;           //{ +0x0008    } | .KeyedMutexCount
        _m03 uint32_t                                   required_keyed_mutex_count;  //{ +0x000c    } | .RequiredKeyedMutexCount
        _m04 keyed_mutexs_t                             keyed_mutexs;                //{ +0x0010    } | .KeyedMutexs
        _m05 struct d3dk::mt::outputduplcreationflags_t flags;                       //{ +0x0028    } | .Flags
                                                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATE_OUTPUTDUPL.$", 0x0, false, 0xa2239daf6d5b75e2 );                           
        SDK_FIXED_SIZE( create_outputdupl_t, 0x30 );                               
    };                                                                             
};
#include "magic/create_outputdupl_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::create_outputdupl_t, 0x30 );
