#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_t.hpp"
#include "token_type_t.hpp"
#include "token_source_t.hpp"
#include "../sep/audit_policy_t.hpp"
#include "../sep/token_privileges_t.hpp"
#include "sid_and_attributes_hash_t.hpp"
#include "../sec/impersonation_level_t.hpp"

namespace sep { struct cached_handles_entry_t;     }
namespace sep { struct logon_session_references_t; }
namespace sep { struct lowbox_handles_entry_t;     }
namespace sep { struct lowbox_number_entry_t;      }
namespace sep { struct luid_to_index_map_entry_t;  }
namespace sep { struct sid_values_block_t;         }
namespace sep { struct token_diag_track_entry_t;   }

#include "magic/token_t.start.hpp"
namespace nt
{
    struct acl_t;
    struct token_t;
    struct eresource_t;
    struct sid_and_attributes_t;
    struct authzbasep_claim_attributes_collection_t;
    struct authzbasep_security_attributes_information_t;

    // [struct _TOKEN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct token_t                                                                
    {                                                                             
        using p_security_attributes_t = struct nt::authzbasep_security_attributes_information_t*;                            
        using lowbox_handles_entry_t =  sdk::variant<struct sep::lowbox_handles_entry_t*, struct sep::cached_handles_entry_t*>;                            
        using p_claim_attributes_t =    struct nt::authzbasep_claim_attributes_collection_t*;                            
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                        
        _m000 struct nt::token_source_t               token_source;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TokenSource
        _m001 struct nt::luid_t                       token_id;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TokenId
        _m002 struct nt::luid_t                       authentication_id;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AuthenticationId
        _m003 struct nt::luid_t                       parent_token_id;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ParentTokenId
        _m004 int64_t                                 expiration_time;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ExpirationTime
        _m005 struct nt::eresource_t*                 token_lock;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TokenLock
        _m006 struct nt::luid_t                       modified_id;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ModifiedId
        _m007 struct sep::token_privileges_t          privileges;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Privileges
        _m008 struct sep::audit_policy_t              audit_policy;                 //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .AuditPolicy
        _m009 uint32_t                                session_id;                   //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .SessionId
        _m010 uint32_t                                user_and_group_count;         //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .UserAndGroupCount
        _m011 uint32_t                                restricted_sid_count;         //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .RestrictedSidCount
        _m012 uint32_t                                variable_length;              //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .VariableLength
        _m013 uint32_t                                dynamic_charged;              //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .DynamicCharged
        _m014 uint32_t                                dynamic_available;            //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .DynamicAvailable
        _m015 uint32_t                                default_owner_index;          //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .DefaultOwnerIndex
        _m016 struct nt::sid_and_attributes_t*        user_and_groups;              //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .UserAndGroups
        _m017 struct nt::sid_and_attributes_t*        restricted_sids;              //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .RestrictedSids
        _m018 void*                                   primary_group;                //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .PrimaryGroup
        _m019 uint32_t*                               dynamic_part;                 //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .DynamicPart
        _m020 struct nt::acl_t*                       default_dacl;                 //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .DefaultDacl
        _m021 enum nt::token_type_t                   token_type;                   //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .TokenType
        _m022 enum sec::impersonation_level_t         impersonation_level;          //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .ImpersonationLevel
        _m023 uint32_t                                token_flags;                  //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .TokenFlags
        _m024 uint8_t                                 token_in_use;                 //{ +0x00cc    +0x00cc    +0x00cc    +0x00cc    } | .TokenInUse
        _m025 uint32_t                                integrity_level_index;        //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .IntegrityLevelIndex
        _m026 uint32_t                                mandatory_policy;             //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .MandatoryPolicy
        _m027 struct sep::logon_session_references_t* logon_session;                //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .LogonSession
        _m028 struct nt::luid_t                       originating_logon_session;    //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .OriginatingLogonSession
        _m029 struct nt::sid_and_attributes_hash_t    sid_hash;                     //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .SidHash
        _m030 struct nt::sid_and_attributes_hash_t    restricted_sid_hash;          //{ +0x01f8    +0x01f8    +0x01f8    +0x01f8    } | .RestrictedSidHash
        _m031 p_security_attributes_t                 p_security_attributes;        //{ +0x0308    +0x0308    +0x0308    +0x0308    } | .pSecurityAttributes
        _m032 void*                                   package;                      //{ +0x0310    +0x0310    +0x0310    +0x0310    } | .Package
        _m033 struct nt::sid_and_attributes_t*        capabilities;                 //{ +0x0318    +0x0318    +0x0318    +0x0318    } | .Capabilities
        _m034 uint32_t                                capability_count;             //{ +0x0320    +0x0320    +0x0320    +0x0320    } | .CapabilityCount
        _m035 struct nt::sid_and_attributes_hash_t    capabilities_hash;            //{ +0x0328    +0x0328    +0x0328    +0x0328    } | .CapabilitiesHash
        _m036 struct sep::lowbox_number_entry_t*      lowbox_number_entry;          //{ +0x0438    +0x0438    +0x0438    +0x0438    } | .LowboxNumberEntry
        _m037 lowbox_handles_entry_t                  lowbox_handles_entry;         //{ +0x0440    +0x0440    +0x0440    +0x0440    } | .LowboxHandlesEntry
        _m038 p_claim_attributes_t                    p_claim_attributes;           //{ +0x0448    +0x0448    +0x0448    +0x0448    } | .pClaimAttributes
        _m039 void*                                   trust_level_sid;              //{ +0x0450    +0x0450    +0x0450    +0x0450    } | .TrustLevelSid
        _m040 struct nt::token_t*                     trust_linked_token;           //{ +0x0458    +0x0458    +0x0458    +0x0458    } | .TrustLinkedToken
        _m041 void*                                   integrity_level_sid_value;    //{ +0x0460    +0x0460    +0x0460    +0x0460    } | .IntegrityLevelSidValue
        _m042 struct sep::sid_values_block_t*         token_sid_values;             //{ +0x0468    +0x0468    +0x0468    +0x0468    } | .TokenSidValues
        _m043 struct sep::luid_to_index_map_entry_t*  index_entry;                  //{ +0x0470    +0x0470    +0x0470    +0x0470    } | .IndexEntry
        _m044 struct sep::token_diag_track_entry_t*   diagnostic_info;              //{ +0x0478    +0x0478    +0x0478    +0x0478    } | .DiagnosticInfo
        _m045 void*                                   session_object;               //{ +0x0480    +0x0488    +0x0488    +0x0488    } | .SessionObject
        _m046 uint64_t                                variable_part;                //{ +0x0488    +0x0490    +0x0490    +0x0490    } | .VariablePart
                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                        
        _m047 struct sep::cached_handles_entry_t*     bno_isolation_handles_entry;  //{ +0x0480    +0x0480    +0x0480    } | .BnoIsolationHandlesEntry
                                                                                  
        SDK_MAGIC_PROPERTIES( "_TOKEN.$", 0x498, true, 0xd1ae85d56a371972 );                            
        SDK_DYNAMIC_SIZE( token_t );                                              
    };                                                                            
};
#include "magic/token_t.end.hpp"
