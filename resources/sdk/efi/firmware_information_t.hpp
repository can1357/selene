#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct virtual_efi_runtime_services_t; }

#include "magic/firmware_information_t.start.hpp"
namespace efi
{
    // [struct _EFI_FIRMWARE_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct firmware_information_t                                                      
    {                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                             
        _m00 uint32_t                                   firmware_version;                //{ +0x0000    +0x0000    +0x0000    } | .FirmwareVersion
        _m01 struct nt::virtual_efi_runtime_services_t* virtual_efi_runtime_services;    //{ +0x0008    +0x0008    +0x0008    } | .VirtualEfiRuntimeServices
        _m02 int32_t                                    set_virtual_address_map_status;  //{ +0x0010    +0x0010    +0x0010    } | .SetVirtualAddressMapStatus
        _m03 uint32_t                                   missed_mappings_count;           //{ +0x0014    +0x0014    +0x0014    } | .MissedMappingsCount
        _m04 nt::list_entry_t                           firmware_resource_list;          //{ +0x0018    +0x0018    +0x0018    } | .FirmwareResourceList
        _m05 void*                                      efi_memory_map;                  //{ +0x0028    +0x0028    +0x0028    } | .EfiMemoryMap
        _m06 uint32_t                                   efi_memory_map_size;             //{ +0x0030    +0x0030    +0x0030    } | .EfiMemoryMapSize
        _m07 uint32_t                                   efi_memory_map_descriptor_size;  //{ +0x0034    +0x0034    +0x0034    } | .EfiMemoryMapDescriptorSize
                                                                                       
        SDK_MAGIC_PROPERTIES( "_EFI_FIRMWARE_INFORMATION.$", 0x38, true, 0x616206e6102a24de );                               
        SDK_FIXED_SIZE( firmware_information_t, 0x38 );                                
    };                                                                                 
};
#include "magic/firmware_information_t.end.hpp"
SDK_VERIFY( struct efi::firmware_information_t, 0x38 );
