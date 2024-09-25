#pragma once
#include <sdkgen/support_library.hpp>
#include "ksr_capabilities_t.hpp"
#include "debug_memory_requirements_t.hpp"
#include "virtual_efi_runtime_services_t.hpp"

#include "magic/ksr_firmware_information_t.start.hpp"
namespace nt
{
    struct inbv_display_context_t;
    struct physical_memory_range_t;
    struct memory_caching_requirements_t;

    // [struct _KSR_FIRMWARE_INFORMATION]
    // => Windows 11
    //
    struct ksr_firmware_information_t                                                            
    {                                                                                            
        // Windows 11                                                                            
        //                                                                                       
        _m000 uint32_t                                  version;                                   //{ +0x0000    } | .Version
        _m001 nt::unicode_view                          efi_version_string;                        //{ +0x0008    } | .EfiVersionString
        _m002 struct nt::virtual_efi_runtime_services_t efi_runtime_services;                      //{ +0x0018    } | .EfiRuntimeServices
        _m003 void*                                     efi_memory_map;                            //{ +0x0088    } | .EfiMemoryMap
        _m004 uint32_t                                  efi_memory_map_size;                       //{ +0x0090    } | .EfiMemoryMapSize
        _m005 uint32_t                                  efi_memory_map_descriptor_size;            //{ +0x0094    } | .EfiMemoryMapDescriptorSize
        _m006 struct nt::memory_caching_requirements_t* caching_requirements;                      //{ +0x0098    } | .CachingRequirements
        _m007 uint32_t                                  caching_requirements_count;                //{ +0x00a0    } | .CachingRequirementsCount
        _m008 void*                                     smbios;                                    //{ +0x00a8    } | .Smbios
        _m009 struct nt::inbv_display_context_t*        display_context;                           //{ +0x00b0    } | .DisplayContext
        _m010 void*                                     secure_boot_policy;                        //{ +0x00b8    } | .SecureBootPolicy
        _m011 uint32_t                                  secure_boot_policy_size;                   //{ +0x00c0    } | .SecureBootPolicySize
        _m012 struct nt::debug_memory_requirements_t    debug_device_memory;                       //{ +0x00c8    } | .DebugDeviceMemory
        _m013 uint32_t                                  soft_restart_count;                        //{ +0x00e8    } | .SoftRestartCount
        _m014 void*                                     code_integrity_policy;                     //{ +0x00f0    } | .CodeIntegrityPolicy
        _m015 uint32_t                                  code_integrity_policy_size;                //{ +0x00f8    } | .CodeIntegrityPolicySize
        _m016 void*                                     efi_memory_attributes;                     //{ +0x0100    } | .EfiMemoryAttributes
        _m017 void*                                     esrt;                                      //{ +0x0108    } | .Esrt
        _m018 uint32_t                                  esrt_size;                                 //{ +0x0110    } | .EsrtSize
        _m019 void*                                     code_integrity_policy_hash;                //{ +0x0118    } | .CodeIntegrityPolicyHash
        _m020 uint32_t                                  code_integrity_policy_hash_size;           //{ +0x0120    } | .CodeIntegrityPolicyHashSize
        _m021 void*                                     code_integrity_policy_original_hash;       //{ +0x0128    } | .CodeIntegrityPolicyOriginalHash
        _m022 uint32_t                                  code_integrity_policy_original_hash_size;  //{ +0x0130    } | .CodeIntegrityPolicyOriginalHashSize
        _m023 struct nt::physical_memory_range_t*       bad_page_ranges;                           //{ +0x0138    } | .BadPageRanges
        _m024 uint32_t                                  bad_page_range_count;                      //{ +0x0140    } | .BadPageRangeCount
        _m025 union nt::ksr_capabilities_t              capabilities;                              //{ +0x0144    } | .Capabilities
                                                                                                 
        SDK_MAGIC_PROPERTIES( "_KSR_FIRMWARE_INFORMATION.$", 0x0, false, 0x2d7a9bd1ef7976e2 );                                         
        SDK_FIXED_SIZE( ksr_firmware_information_t, 0x148 );                                         
    };                                                                                           
};
#include "magic/ksr_firmware_information_t.end.hpp"
SDK_VERIFY( struct nt::ksr_firmware_information_t, 0x148 );
