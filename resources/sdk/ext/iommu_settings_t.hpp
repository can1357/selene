#pragma once
#include <sdkgen/support_library.hpp>
#include "iommu_address_translation_policy_t.hpp"
#include "iommu_interrupt_remapping_policy_t.hpp"

#include "magic/iommu_settings_t.start.hpp"
namespace ext
{
    // [struct _EXT_IOMMU_SETTINGS]
    // => Windows 11
    //
    struct iommu_settings_t                                                       
    {                                                                             
        struct u0_enabled_capabilities_t                                          
        {                                                                         
            // Windows 11                                                         
            //                                                                    
            _m00 uint1_t broadcast_tlb_maintenance;                                 //{ +0x0000@0  } | .BroadcastTlbMaintenance
                                                                                  
            SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_SETTINGS.EnabledCapabilities.$", 0x0, false, 0x142f662143f5e942 );                                                  
            SDK_FIXED_SIZE( u0_enabled_capabilities_t, 0x8 );                                                  
        };                                                                        
                                                                                  
        // Windows 11                                                             
        //                                                                        
        _m01 u0_enabled_capabilities_t                    enabled_capabilities;     //{ +0x0000    } | .EnabledCapabilities
        _m02 enum ext::iommu_address_translation_policy_t translation_policy;       //{ +0x0008    } | .TranslationPolicy
        _m03 enum ext::iommu_interrupt_remapping_policy_t remapping_policy;         //{ +0x000c    } | .RemappingPolicy
        _m04 uint32_t                                     remapping_table_entries;  //{ +0x0010    } | .RemappingTableEntries
                                                                                  
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_SETTINGS.$", 0x0, false, 0x884b34ceec5ed095 );                        
        SDK_FIXED_SIZE( iommu_settings_t, 0x18 );                                 
    };                                                                            
};
#include "magic/iommu_settings_t.end.hpp"
SDK_VERIFY( struct ext::iommu_settings_t::u0_enabled_capabilities_t, 0x8 );
SDK_VERIFY( struct ext::iommu_settings_t, 0x18 );
