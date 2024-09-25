#pragma once
#include <sdkgen/support_library.hpp>
#include "env_spinlock_t.hpp"
#include "iommu_domain_type_t.hpp"
#include "iommu_domain_settings_t.hpp"
#include "iommu_translation_type_t.hpp"

#include "magic/iommu_domain_t.start.hpp"
namespace ext
{
    struct iommu_domain_t;

    // [struct _EXT_IOMMU_DOMAIN]
    // => Windows 11
    //
    struct iommu_domain_t                                           
    {                                                               
        struct u0_flags_t                                           
        {                                                           
            // Windows 11                                           
            //                                                      
            _m02 uint1_t default_domain;                              //{ +0x0000@0  } | .DefaultDomain
            _m03 uint1_t firmware_domain;                             //{ +0x0000@1  } | .FirmwareDomain
                                                                    
            SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_DOMAIN.Flags.$", 0x0, false, 0x101aa1a78a6b547b );                                   
            SDK_FIXED_SIZE( u0_flags_t, 0x1 );                                   
        };                                                          
                                                                    
        // Windows 11                                               
        //                                                          
        _m00 enum ext::iommu_domain_type_t       domain_type;         //{ +0x0000    } | .DomainType
        _m01 enum ext::iommu_translation_type_t  translation_type;    //{ +0x0004    } | .TranslationType
        _m04 u0_flags_t                          flags;               //{ +0x0008    } | .Flags
        _m05 uint16_t                            firmware_domain_id;  //{ +0x000a    } | .FirmwareDomainId
        _m06 struct ext::iommu_domain_settings_t settings;            //{ +0x0010    } | .Settings
        _m07 uint32_t                            context_id;          //{ +0x0030    } | .ContextId
        _m08 uint32_t                            device_count;        //{ +0x0034    } | .DeviceCount
        _m09 nt::list_entry_t                    devices;             //{ +0x0038    } | .Devices
        _m10 struct ext::env_spinlock_t          lock;                //{ +0x0048    } | .Lock
        _m11 struct ext::iommu_domain_t*         s2_domain;           //{ +0x0068    } | .S2Domain
                                                                    
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_DOMAIN.$", 0x0, false, 0xac7445bad24d04f6 );                   
        SDK_FIXED_SIZE( iommu_domain_t, 0x70 );                     
    };                                                              
};
#include "magic/iommu_domain_t.end.hpp"
SDK_VERIFY( struct ext::iommu_domain_t::u0_flags_t, 0x1 );
SDK_VERIFY( struct ext::iommu_domain_t, 0x70 );
