#pragma once
#include <sdkgen/support_library.hpp>
#include "iommu_s1_x64_domain_settings_t.hpp"

#include "magic/iommu_domain_settings_t.start.hpp"
namespace ext
{
    // [struct _EXT_IOMMU_DOMAIN_SETTINGS]
    // => Windows 11
    //
    struct iommu_domain_settings_t                         
    {                                                      
        struct u0_s2_t                                     
        {                                                  
            // Windows 11                                  
            //                                             
            _m01 uint8_t  page_table_root_level;             //{ +0x0000    } | .PageTableRootLevel
            _m02 uint8_t  input_size;                        //{ +0x0001    } | .InputSize
            _m03 uint64_t page_table_root;                   //{ +0x0008    } | .PageTableRoot
                                                           
            SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_DOMAIN_SETTINGS.S2.$", 0x0, false, 0x7263fea6c1a61431 );                         
            SDK_FIXED_SIZE( u0_s2_t, 0x10 );                         
        };                                                 
                                                           
        // Windows 11                                      
        //                                                 
        _m00 struct ext::iommu_s1_x64_domain_settings_t s1;  //{ +0x0000    } | .S1
        _m04 u0_s2_t                                    s2;  //{ +0x0010    } | .S2
                                                           
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_DOMAIN_SETTINGS.$", 0x0, false, 0xd196a2403bff7641 );   
        SDK_FIXED_SIZE( iommu_domain_settings_t, 0x20 );   
    };                                                     
};
#include "magic/iommu_domain_settings_t.end.hpp"
SDK_VERIFY( struct ext::iommu_domain_settings_t::u0_s2_t, 0x10 );
SDK_VERIFY( struct ext::iommu_domain_settings_t, 0x20 );
