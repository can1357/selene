#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_device_resiliency_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_RESILIENCY_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_device_resiliency_descriptor_t
    {                                            
        // WDK 10                               
        //                                      
        _m00 uint32_t version;                     //{ +0x0000    } | .Version
        _m01 uint32_t size;                        //{ +0x0004    } | .Size
        _m02 uint32_t name_offset;                 //{ +0x0008    } | .NameOffset
        _m03 uint32_t number_of_logical_copies;    //{ +0x000c    } | .NumberOfLogicalCopies
        _m04 uint32_t number_of_physical_copies;   //{ +0x0010    } | .NumberOfPhysicalCopies
        _m05 uint32_t physical_disk_redundancy;    //{ +0x0014    } | .PhysicalDiskRedundancy
        _m06 uint32_t number_of_columns;           //{ +0x0018    } | .NumberOfColumns
        _m07 uint32_t interleave;                  //{ +0x001c    } | .Interleave
                                                 
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_RESILIENCY_DESCRIPTOR.$", 0x0, false, 0x9ba47c58b8f308c0 );                          
        SDK_FIXED_SIZE( storage_device_resiliency_descriptor_t, 0x20 );                          
    };                                           
};
#include "magic/storage_device_resiliency_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_resiliency_descriptor_t, 0x20 );
