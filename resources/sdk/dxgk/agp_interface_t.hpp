#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/memory_caching_type_t.hpp"

#include "magic/agp_interface_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_AGP_INTERFACE]
    // => WDK 10 (NV)
    //
    struct agp_interface_t                                                  
    {                                                                       
        using dxgkcb_agp_allocate_pool_t = sdk::function<int32_t(void*, uint32_t, enum nt::memory_caching_type_t, int64_t*, void**)>*;                      
                                                                            
        // WDK 10                                                           
        //                                                                  
        _m00 uint16_t                                 size;                   //{ +0x0000    } | .Size
        _m01 uint16_t                                 version;                //{ +0x0002    } | .Version
        _m02 void*                                    context;                //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*              interface_reference;    //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*              interface_dereference;  //{ +0x0018    } | .InterfaceDereference
        _m05 dxgkcb_agp_allocate_pool_t               agp_allocate_pool;      //{ +0x0020    } | .AgpAllocatePool
        _m06 sdk::function<int32_t(void*, void*)>*    agp_free_pool;          //{ +0x0028    } | .AgpFreePool
        _m07 sdk::function<int32_t(void*, uint32_t)>* agp_set_command;        //{ +0x0030    } | .AgpSetCommand
                                                                            
        SDK_NONVOL_PROPERTIES( "_DXGK_AGP_INTERFACE.$", 0x0, false, 0x76262992b912645b );                      
        SDK_FIXED_SIZE( agp_interface_t, 0x38 );                            
    };                                                                      
};
#include "magic/agp_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::agp_interface_t, 0x38 );
