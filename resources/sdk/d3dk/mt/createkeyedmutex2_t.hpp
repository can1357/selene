#pragma once
#include <sdkgen/support_library.hpp>
#include "createkeyedmutex2_flags_t.hpp"

#include "magic/createkeyedmutex2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATEKEYEDMUTEX2]
    // => WDK 10 (NV)
    //
    struct createkeyedmutex2_t                                                    
    {                                                                             
        // WDK 10                                                                 
        //                                                                        
        _m00 uint64_t                                   initial_value;              //{ +0x0000    } | .InitialValue
        _m01 uint32_t                                   h_shared_handle;            //{ +0x0008    } | .hSharedHandle
        _m02 uint32_t                                   h_keyed_mutex;              //{ +0x000c    } | .hKeyedMutex
        _m03 void*                                      p_private_runtime_data;     //{ +0x0010    } | .pPrivateRuntimeData
        _m04 uint32_t                                   private_runtime_data_size;  //{ +0x0018    } | .PrivateRuntimeDataSize
        _m05 struct d3dk::mt::createkeyedmutex2_flags_t flags;                      //{ +0x001c    } | .Flags
                                                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATEKEYEDMUTEX2.$", 0x0, false, 0x57e689e0bc04332c );                          
        SDK_FIXED_SIZE( createkeyedmutex2_t, 0x20 );                              
    };                                                                            
};
#include "magic/createkeyedmutex2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createkeyedmutex2_t, 0x20 );
