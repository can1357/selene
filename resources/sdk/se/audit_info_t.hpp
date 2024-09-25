#pragma once
#include <sdkgen/support_library.hpp>
#include "audit_operation_t.hpp"
#include "../nt/audit_event_type_t.hpp"

namespace nt { struct guid_t; }
namespace nt { struct luid_t; }

#include "magic/audit_info_t.start.hpp"
namespace se
{
    // [struct _SE_AUDIT_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct audit_info_t                                    
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                 
        _m00 uint32_t                    size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum nt::audit_event_type_t audit_type;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AuditType
        _m02 enum se::audit_operation_t  audit_operation;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AuditOperation
        _m03 uint32_t                    audit_flags;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .AuditFlags
        _m04 nt::unicode_view            subsystem_name;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SubsystemName
        _m05 nt::unicode_view            object_type_name;   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ObjectTypeName
        _m06 nt::unicode_view            object_name;        //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ObjectName
        _m07 void*                       handle_id;          //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .HandleId
        _m08 struct nt::guid_t*          transaction_id;     //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .TransactionId
        _m09 struct nt::luid_t*          operation_id;       //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .OperationId
        _m10 uint8_t                     object_creation;    //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .ObjectCreation
        _m11 uint8_t                     generate_on_close;  //{ +0x0059    +0x0059    +0x0059    +0x0059    +0x0059    } | .GenerateOnClose
                                                           
        SDK_NONVOL_PROPERTIES( "_SE_AUDIT_INFO.$", 0x60, true, 0x844e5d743d771f26 );                  
        SDK_FIXED_SIZE( audit_info_t, 0x60 );                  
    };                                                     
};
#include "magic/audit_info_t.end.hpp"
SDK_VERIFY( struct se::audit_info_t, 0x60 );
