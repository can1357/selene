#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmpt_blocked_app_context_t.start.hpp"
namespace wnf
{
    // [struct _WNF_CMPT_BLOCKED_APP_CONTEXT]
    // => Windows 11
    //
    struct cmpt_blocked_app_context_t                   
    {                                                   
        // Windows 11                                   
        //                                              
        _m00 sdk::array<wchar_t, 50>  app_name;           //{ +0x0000    } | .AppName
        _m01 sdk::array<wchar_t, 50>  vendor_name;        //{ +0x0064    } | .VendorName
        _m02 uint32_t                 dw_block;           //{ +0x00c8    } | .dwBlock
        _m03 uint32_t                 dw_fw_link_number;  //{ +0x00cc    } | .dwFwLinkNumber
        _m04 uint32_t                 dw_kb_number;       //{ +0x00d0    } | .dwKbNumber
        _m05 sdk::array<wchar_t, 256> package_full_name;  //{ +0x00d4    } | .PackageFullName
                                                        
        SDK_MAGIC_PROPERTIES( "_WNF_CMPT_BLOCKED_APP_CONTEXT.$", 0x0, false, 0xa9d22f455c80acfa );                  
        SDK_FIXED_SIZE( cmpt_blocked_app_context_t, 0x2d4 );                  
    };                                                  
};
#include "magic/cmpt_blocked_app_context_t.end.hpp"
SDK_VERIFY( struct wnf::cmpt_blocked_app_context_t, 0x2d4 );
