#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_bus_type_t.hpp"

#include "magic/raid_adapter_parameters_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_ADAPTER_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_adapter_parameters_t                                      
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                
        _m00 uint32_t                            number_of_hba_requests;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfHbaRequests
        _m01 enum stor::port::storage_bus_type_t bus_type;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BusType
        _m02 uint32_t                            uncached_ext_alignment;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UncachedExtAlignment
        _m03 uint64_t                            maximum_uncached_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumUncachedAddress
        _m04 uint64_t                            minimum_uncached_address;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MinimumUncachedAddress
        _m05 uint64_t                            boundary_address;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BoundaryAddress
        _m06 uint64_t                            minimum_physical_address;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MinimumPhysicalAddress
        _m07 uint64_t                            maximum_physical_address;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MaximumPhysicalAddress
                                                                          
        SDK_MAGIC_PROPERTIES( "_RAID_ADAPTER_PARAMETERS.$", 0x38, true, 0xa2de318c48ee61ab );                         
        SDK_FIXED_SIZE( raid_adapter_parameters_t, 0x38 );                         
    };                                                                    
};
#include "magic/raid_adapter_parameters_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_adapter_parameters_t, 0x38 );
