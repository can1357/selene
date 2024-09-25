#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/storage_device_fault_domain_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_FAULT_DOMAIN_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_device_fault_domain_descriptor_t                   
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 uint32_t                         version;                  //{ +0x0000    } | .Version
        _m01 uint32_t                         size;                     //{ +0x0004    } | .Size
        _m02 uint32_t                         number_of_fault_domains;  //{ +0x0008    } | .NumberOfFaultDomains
        _m03 sdk::array<struct nt::guid_t, 1> fault_domain_ids;         //{ +0x000c    } | .FaultDomainIds
                                                                      
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_FAULT_DOMAIN_DESCRIPTOR.$", 0x0, false, 0xf0be83dfecd76ddd );                        
        SDK_FIXED_SIZE( storage_device_fault_domain_descriptor_t, 0x1c );                        
    };                                                                
};
#include "magic/storage_device_fault_domain_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_fault_domain_descriptor_t, 0x1c );
