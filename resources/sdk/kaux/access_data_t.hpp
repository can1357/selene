#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/access_reasons_t.hpp"
#include "../nt/generic_mapping_t.hpp"

namespace nt { struct privilege_set_t; }

#include "magic/access_data_t.start.hpp"
namespace kaux
{
    // [struct _AUX_ACCESS_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct access_data_t                                                     
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                   
        _m00 struct nt::privilege_set_t*        privileges_used;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PrivilegesUsed
        _m01 struct nt::generic_mapping_t       generic_mapping;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .GenericMapping
        _m02 uint32_t                           accesses_to_audit;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AccessesToAudit
        _m03 uint32_t                           maximum_audit_mask;            //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .MaximumAuditMask
        _m04 struct nt::guid_t                  transaction_id;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TransactionId
        _m05 void*                              new_security_descriptor;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NewSecurityDescriptor
        _m06 void*                              existing_security_descriptor;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ExistingSecurityDescriptor
        _m07 void*                              parent_security_descriptor;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ParentSecurityDescriptor
        _m08 sdk::function<void(void*, void*)>* de_ref_security_descriptor;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DeRefSecurityDescriptor
        _m09 void*                              sd_lock;                       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .SDLock
        _m10 struct nt::access_reasons_t        access_reasons;                //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .AccessReasons
        _m11 uint8_t                            generate_staging_events;       //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .GenerateStagingEvents
                                                                             
        SDK_MAGIC_PROPERTIES( "_AUX_ACCESS_DATA.$", 0xe0, true, 0x8110c82dd166b174 );                             
        SDK_DYNAMIC_SIZE( access_data_t );                                   
    };                                                                       
};
#include "magic/access_data_t.end.hpp"
