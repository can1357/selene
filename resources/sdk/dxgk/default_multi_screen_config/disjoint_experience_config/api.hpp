#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::default_multi_screen_config::disjoint_experience_config
{
    // [CompareUnicodeStrings@DisjointExperienceConfig@DefaultMultiScreenConfig]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x25c90, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) compare_unicode_strings;
    
    // [IsDisjointCapableSku@DisjointExperienceConfig@DefaultMultiScreenConfig]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x46df0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4d58c, 0x84380 bytes
    // dxgkrnl.sys .text:0x47048, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) is_disjoint_capable_sku;
    
    // [RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x25e8c, 0x60098 bytes
    // dxgkrnl.sys .text:0x46ef8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4d7c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x47150, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) reg_query_controller_install_key;
    
    // [RegQueryEnabledForTest@DisjointExperienceConfig@DefaultMultiScreenConfig]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2616c, 0x60098 bytes
    // dxgkrnl.sys .text:0x47224, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4daec, 0x84380 bytes
    // dxgkrnl.sys .text:0x4747c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) reg_query_enabled_for_test;
    
    // [RegQueryIsUnsupportedLanguage@DisjointExperienceConfig@DefaultMultiScreenConfig]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x26288, 0x60098 bytes
    // dxgkrnl.sys .text:0x47354, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4dc1c, 0x84380 bytes
    // dxgkrnl.sys .text:0x475ac, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) reg_query_is_unsupported_language;
    
    // [RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x263ac, 0x60098 bytes
    // dxgkrnl.sys .text:0x47488, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4dd50, 0x84380 bytes
    // dxgkrnl.sys .text:0x476e0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) reg_query_so_c_name;
    
    // [ValidateDynamicRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2650c, 0x60098 bytes
    // dxgkrnl.sys .text:0x47694, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4df44, 0x84380 bytes
    // dxgkrnl.sys .text:0x478ec, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) validate_dynamic_requirements;
    
    // [ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x26594, 0x60098 bytes
    // dxgkrnl.sys .text:0x4771c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4dfcc, 0x84380 bytes
    // dxgkrnl.sys .text:0x47974, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) validate_static_requirements;
};
#include "magic/api.end.hpp"
