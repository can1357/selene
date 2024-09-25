#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_payload_restriction_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_mitigation_payload_restriction_policy_t
    {                                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                              
        _m00 uint32_t flags;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  enable_export_address_filter;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .EnableExportAddressFilter
        _m02 uint1_t  audit_export_address_filter;          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .AuditExportAddressFilter
        _m03 uint1_t  enable_export_address_filter_plus;    //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .EnableExportAddressFilterPlus
        _m04 uint1_t  audit_export_address_filter_plus;     //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .AuditExportAddressFilterPlus
        _m05 uint1_t  enable_import_address_filter;         //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .EnableImportAddressFilter
        _m06 uint1_t  audit_import_address_filter;          //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .AuditImportAddressFilter
        _m07 uint1_t  enable_rop_stack_pivot;               //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .EnableRopStackPivot
        _m08 uint1_t  audit_rop_stack_pivot;                //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .AuditRopStackPivot
        _m09 uint1_t  enable_rop_caller_check;              //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EnableRopCallerCheck
        _m10 uint1_t  audit_rop_caller_check;               //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .AuditRopCallerCheck
        _m11 uint1_t  enable_rop_sim_exec;                  //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .EnableRopSimExec
        _m12 uint1_t  audit_rop_sim_exec;                   //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .AuditRopSimExec
                                                          
        SDK_NONVOL_PROPERTIES( "_PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY.$", 0x4, true, 0x1b48487a02bde188 );                                  
        SDK_FIXED_SIZE( process_mitigation_payload_restriction_policy_t, 0x4 );                                  
    };                                                    
};
#include "magic/process_mitigation_payload_restriction_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_payload_restriction_policy_t, 0x4 );
