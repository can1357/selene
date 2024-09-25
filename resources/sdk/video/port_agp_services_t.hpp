#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/port_agp_services_t.start.hpp"
namespace video
{
    // [struct _VIDEO_PORT_AGP_SERVICES]
    // => WDK 10 (NV)
    //
    struct port_agp_services_t                                             
    {                                                                      
        enum class u0_agp_reserve_physical_t : int32_t                     
        {                                                                  
            non_cached =     0x0,                                            // WDK 10
            write_combined = 0x1,                                            // WDK 10
            cached =         0x2,                                            // WDK 10
        };                                                                 
                                                                           
        using pagp_reserve_physical_t = sdk::function<int64_t(void*, uint32_t, enum , void**)>*;                     
        using pagp_commit_physical_t =  sdk::function<uint8_t(void*, void*, uint32_t, uint32_t)>*;                     
        using agp_free_physical_t =     sdk::function<void(void*, void*, uint32_t, uint32_t)>*;                     
        using pagp_reserve_virtual_t =  sdk::function<void*(void*, void*, void*, void**)>*;                     
        using pagp_commit_virtual_t =   sdk::function<void*(void*, void*, uint32_t, uint32_t)>*;                     
        using agp_free_virtual_t =      sdk::function<void(void*, void*, uint32_t, uint32_t)>*;                     
                                                                           
        // WDK 10                                                          
        //                                                                 
        _m00 pagp_reserve_physical_t                  agp_reserve_physical;  //{ +0x0000    } | .AgpReservePhysical
        _m01 sdk::function<void(void*, void*)>*       agp_release_physical;  //{ +0x0008    } | .AgpReleasePhysical
        _m02 pagp_commit_physical_t                   agp_commit_physical;   //{ +0x0010    } | .AgpCommitPhysical
        _m03 agp_free_physical_t                      agp_free_physical;     //{ +0x0018    } | .AgpFreePhysical
        _m04 pagp_reserve_virtual_t                   agp_reserve_virtual;   //{ +0x0020    } | .AgpReserveVirtual
        _m05 sdk::function<void(void*, void*)>*       agp_release_virtual;   //{ +0x0028    } | .AgpReleaseVirtual
        _m06 pagp_commit_virtual_t                    agp_commit_virtual;    //{ +0x0030    } | .AgpCommitVirtual
        _m07 agp_free_virtual_t                       agp_free_virtual;      //{ +0x0038    } | .AgpFreeVirtual
        _m08 uint64_t                                 allocation_limit;      //{ +0x0040    } | .AllocationLimit
                                                                           
        SDK_NONVOL_PROPERTIES( "_VIDEO_PORT_AGP_SERVICES.$", 0x0, false, 0xe9442324e315b4f8 );                     
        SDK_FIXED_SIZE( port_agp_services_t, 0x48 );                       
    };                                                                     
};
#include "magic/port_agp_services_t.end.hpp"
SDK_VERIFY( struct video::port_agp_services_t, 0x48 );
