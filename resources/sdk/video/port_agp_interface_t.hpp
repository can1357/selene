#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/port_agp_interface_t.start.hpp"
namespace video
{
    // [struct _VIDEO_PORT_AGP_INTERFACE]
    // => WDK 10 (NV)
    //
    struct port_agp_interface_t                                             
    {                                                                       
        enum class u0_agp_reserve_physical_t : int32_t                      
        {                                                                   
            non_cached =     0x0,                                             // WDK 10
            write_combined = 0x1,                                             // WDK 10
            cached =         0x2,                                             // WDK 10
        };                                                                  
                                                                            
        using pagp_reserve_physical_t = sdk::function<int64_t(void*, uint32_t, enum , void**)>*;                      
        using pagp_commit_physical_t =  sdk::function<uint8_t(void*, void*, uint32_t, uint32_t)>*;                      
        using agp_free_physical_t =     sdk::function<void(void*, void*, uint32_t, uint32_t)>*;                      
        using pagp_reserve_virtual_t =  sdk::function<void*(void*, void*, void*, void**)>*;                      
        using pagp_commit_virtual_t =   sdk::function<void*(void*, void*, uint32_t, uint32_t)>*;                      
        using agp_free_virtual_t =      sdk::function<void(void*, void*, uint32_t, uint32_t)>*;                      
                                                                            
        // WDK 10                                                           
        //                                                                  
        _m00 uint16_t                                 size;                   //{ +0x0000    } | .Size
        _m01 uint16_t                                 version;                //{ +0x0002    } | .Version
        _m02 void*                                    context;                //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*              interface_reference;    //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*              interface_dereference;  //{ +0x0018    } | .InterfaceDereference
        _m05 pagp_reserve_physical_t                  agp_reserve_physical;   //{ +0x0020    } | .AgpReservePhysical
        _m06 sdk::function<void(void*, void*)>*       agp_release_physical;   //{ +0x0028    } | .AgpReleasePhysical
        _m07 pagp_commit_physical_t                   agp_commit_physical;    //{ +0x0030    } | .AgpCommitPhysical
        _m08 agp_free_physical_t                      agp_free_physical;      //{ +0x0038    } | .AgpFreePhysical
        _m09 pagp_reserve_virtual_t                   agp_reserve_virtual;    //{ +0x0040    } | .AgpReserveVirtual
        _m10 sdk::function<void(void*, void*)>*       agp_release_virtual;    //{ +0x0048    } | .AgpReleaseVirtual
        _m11 pagp_commit_virtual_t                    agp_commit_virtual;     //{ +0x0050    } | .AgpCommitVirtual
        _m12 agp_free_virtual_t                       agp_free_virtual;       //{ +0x0058    } | .AgpFreeVirtual
        _m13 uint64_t                                 agp_allocation_limit;   //{ +0x0060    } | .AgpAllocationLimit
                                                                            
        SDK_NONVOL_PROPERTIES( "_VIDEO_PORT_AGP_INTERFACE.$", 0x0, false, 0xa8df3311778879aa );                      
        SDK_FIXED_SIZE( port_agp_interface_t, 0x68 );                       
    };                                                                      
};
#include "magic/port_agp_interface_t.end.hpp"
SDK_VERIFY( struct video::port_agp_interface_t, 0x68 );
