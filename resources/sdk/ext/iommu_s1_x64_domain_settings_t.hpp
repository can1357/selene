#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_s1_x64_domain_settings_t.start.hpp"
namespace ext
{
    // [struct _EXT_IOMMU_S1_X64_DOMAIN_SETTINGS]
    // => Windows 11
    //
    struct iommu_s1_x64_domain_settings_t               
    {                                                   
        struct u0_flags_t                               
        {                                               
            // Windows 11                               
            //                                          
            _m00 uint1_t enable_translation;              //{ +0x0000@0  } | .EnableTranslation
                                                        
            SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_S1_X64_DOMAIN_SETTINGS.Flags.$", 0x0, false, 0xbf7aadae88794d17 );                               
            SDK_FIXED_SIZE( u0_flags_t, 0x1 );                               
        };                                              
                                                        
        // Windows 11                                   
        //                                              
        _m01 u0_flags_t                     flags;        //{ +0x0000    } | .Flags
        _m02 void*                          pasid_table;  //{ +0x0008    } | .PasidTable
                                                        
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_S1_X64_DOMAIN_SETTINGS.$", 0x0, false, 0x80d137b72b930d33 );            
        SDK_FIXED_SIZE( iommu_s1_x64_domain_settings_t, 0x10 );            
    };                                                  
};
#include "magic/iommu_s1_x64_domain_settings_t.end.hpp"
SDK_VERIFY( struct ext::iommu_s1_x64_domain_settings_t::u0_flags_t, 0x1 );
SDK_VERIFY( struct ext::iommu_s1_x64_domain_settings_t, 0x10 );
