#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/luid_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "cached_handles_table_t.hpp"
#include "lowbox_handles_table_t.hpp"
#include "../ob/handle_revocation_block_t.hpp"

namespace nt { struct authzbasep_claim_attributes_collection_t; }
namespace nt { struct device_map_t;                             }
namespace nt { struct ejob_t;                                   }

#include "magic/logon_session_references_t.start.hpp"
namespace sep
{
    struct sid_values_block_t;
    struct logon_session_references_t;

    // [struct _SEP_LOGON_SESSION_REFERENCES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct logon_session_references_t                                        
    {                                                                        
        using shared_claim_attributes_t = struct nt::authzbasep_claim_attributes_collection_t*;                        
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                   
        _m00 struct sep::logon_session_references_t* next;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct nt::luid_t                       logon_id;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LogonId
        _m02 struct nt::luid_t                       buddy_logon_id;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BuddyLogonId
        _m03 int64_t                                 reference_count;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReferenceCount
        _m04 uint32_t                                flags;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
        _m05 struct nt::device_map_t*                p_device_map;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pDeviceMap
        _m06 void*                                   token;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Token
        _m07 nt::unicode_view                        account_name;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AccountName
        _m08 nt::unicode_view                        authority_name;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .AuthorityName
        _m09 struct ex::push_lock_t                  shared_data_lock;         //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .SharedDataLock
        _m10 shared_claim_attributes_t               shared_claim_attributes;  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .SharedClaimAttributes
        _m11 struct sep::sid_values_block_t*         shared_sid_values;        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .SharedSidValues
        _m12 struct ob::handle_revocation_block_t    revocation_block;         //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .RevocationBlock
        _m13 struct nt::ejob_t*                      server_silo;              //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ServerSilo
        _m14 struct nt::luid_t                       sibling_auth_id;          //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .SiblingAuthId
        _m15 nt::list_entry_t                        token_list;               //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .TokenList
                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                   
        _m16 struct sep::cached_handles_table_t      cached_handles_table;     //{ +0x0058    +0x0058    +0x0058    } | .CachedHandlesTable
                                                                             
        // Windows 10 v1607                                                  
        //                                                                   
        _m17 struct sep::lowbox_handles_table_t      low_box_handles_table;    //{ +0x0058    } | .LowBoxHandlesTable
                                                                             
        SDK_MAGIC_PROPERTIES( "_SEP_LOGON_SESSION_REFERENCES.$", 0xc0, true, 0xcbba69a962a4d2ec );                        
        SDK_FIXED_SIZE( logon_session_references_t, 0xc0 );                        
    };                                                                       
};
#include "magic/logon_session_references_t.end.hpp"
SDK_VERIFY( struct sep::logon_session_references_t, 0xc0 );
