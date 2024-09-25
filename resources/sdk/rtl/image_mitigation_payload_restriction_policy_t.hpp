#pragma once
#include <sdkgen/support_library.hpp>
#include "image_mitigation_policy_t.hpp"

#include "magic/image_mitigation_payload_restriction_policy_t.start.hpp"
namespace rtl
{
    // [struct _RTL_IMAGE_MITIGATION_PAYLOAD_RESTRICTION_POLICY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct image_mitigation_payload_restriction_policy_t                            
    {                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                          
        _m00 union rtl::image_mitigation_policy_t enable_export_address_filter;       //{ +0x0000    +0x0000    +0x0000    } | .EnableExportAddressFilter
        _m01 union rtl::image_mitigation_policy_t enable_export_address_filter_plus;  //{ +0x0008    +0x0008    +0x0008    } | .EnableExportAddressFilterPlus
        _m02 union rtl::image_mitigation_policy_t enable_import_address_filter;       //{ +0x0010    +0x0010    +0x0010    } | .EnableImportAddressFilter
        _m03 union rtl::image_mitigation_policy_t enable_rop_stack_pivot;             //{ +0x0018    +0x0018    +0x0018    } | .EnableRopStackPivot
        _m04 union rtl::image_mitigation_policy_t enable_rop_caller_check;            //{ +0x0020    +0x0020    +0x0020    } | .EnableRopCallerCheck
        _m05 union rtl::image_mitigation_policy_t enable_rop_sim_exec;                //{ +0x0028    +0x0028    +0x0028    } | .EnableRopSimExec
        _m06 sdk::array<wchar_t, 512>             eaf_plus_module_list;               //{ +0x0030    +0x0030    +0x0030    } | .EafPlusModuleList
                                                                                    
        SDK_MAGIC_PROPERTIES( "_RTL_IMAGE_MITIGATION_PAYLOAD_RESTRICTION_POLICY.$", 0x430, true, 0x179616898b5ae7fe );                                  
        SDK_FIXED_SIZE( image_mitigation_payload_restriction_policy_t, 0x430 );                                  
    };                                                                              
};
#include "magic/image_mitigation_payload_restriction_policy_t.end.hpp"
SDK_VERIFY( struct rtl::image_mitigation_payload_restriction_policy_t, 0x430 );
