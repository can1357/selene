#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_t.hpp"
#include "privilege_set_t.hpp"
#include "initial_privilege_set_t.hpp"
#include "../sec/subject_context_t.hpp"

#include "magic/access_state_t.start.hpp"
namespace nt
{
    // [struct _ACCESS_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct access_state_t                                                                           
    {                                                                                               
        union u0_privileges_t                                                                       
        {                                                                                           
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                                                      
            _m12 struct nt::initial_privilege_set_t initial_privilege_set;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InitialPrivilegeSet
            _m13 struct nt::privilege_set_t         privilege_set;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PrivilegeSet
                                                                                                    
            SDK_NONVOL_PROPERTIES( "_ACCESS_STATE.Privileges.$", 0x2c, true, 0x83c7877c4878444b );                                                
            SDK_FIXED_SIZE( u0_privileges_t, 0x2c );                                                
        };                                                                                          
                                                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                                          
        _m00 struct nt::luid_t                                            operation_id;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationID
        _m01 uint8_t                                                      security_evaluated;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SecurityEvaluated
        _m02 uint8_t                                                      generate_audit;             //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .GenerateAudit
        _m03 uint8_t                                                      generate_on_close;          //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .GenerateOnClose
        _m04 uint8_t                                                      privileges_allocated;       //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .PrivilegesAllocated
        _m05 uint32_t                                                     flags;                      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m06 uint32_t                                                     remaining_desired_access;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .RemainingDesiredAccess
        _m07 uint32_t                                                     previously_granted_access;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .PreviouslyGrantedAccess
        _m08 uint32_t                                                     original_desired_access;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .OriginalDesiredAccess
        _m09 struct sec::subject_context_t                                subject_security_context;   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SubjectSecurityContext
        _m10 void*                                                        security_descriptor;        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .SecurityDescriptor
        _m11 void*                                                        aux_data;                   //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .AuxData
        _m14 u0_privileges_t                                              privileges;                 //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .Privileges
        _m15 uint8_t                                                      audit_privileges;           //{ +0x007c    +0x007c    +0x007c    +0x007c    +0x007c    } | .AuditPrivileges
        _m16 nt::unicode_view                                             object_name;                //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .ObjectName
        _m17 nt::unicode_view                                             object_type_name;           //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .ObjectTypeName
                                                                                                    
        SDK_NONVOL_PROPERTIES( "_ACCESS_STATE.$", 0xa0, true, 0xade78752ea5a6ec2 );                          
        SDK_FIXED_SIZE( access_state_t, 0xa0 );                                                     
    };                                                                                              
};
#include "magic/access_state_t.end.hpp"
SDK_VERIFY( union nt::access_state_t::u0_privileges_t, 0x2c );
SDK_VERIFY( struct nt::access_state_t, 0xa0 );
