#pragma once
#include <sdkgen/support_library.hpp>
#include "pool_type_t.hpp"
#include "generic_mapping_t.hpp"
#include "../ob/open_reason_t.hpp"
#include "../sec/operation_code_t.hpp"

namespace ob  { struct extended_parse_parameters_t; }
namespace sec { struct quality_of_service_t;        }

#include "magic/object_type_initializer_t.start.hpp"
namespace nt
{
    struct eprocess_t;
    struct access_state_t;
    struct object_dump_control_t;
    struct object_name_information_t;

    // [struct _OBJECT_TYPE_INITIALIZER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_type_initializer_t                                     
    {                                                                    
        using dump_procedure_t =          sdk::function<void(void*, struct nt::object_dump_control_t*)>*;                              
        using open_procedure_t =          sdk::function<int32_t(enum ob::open_reason_t, char, struct nt::eprocess_t*, void*, uint32_t*, uint32_t)>*;                              
        using close_procedure_t =         sdk::function<void(struct nt::eprocess_t*, void*, uint64_t, uint64_t)>*;                              
        using parse_procedure_t =         sdk::function<int32_t(void*, void*, struct nt::access_state_t*, char, uint32_t, nt::unicode_view*, nt::unicode_view*, void*, struct sec::quality_of_service_t*, void**)>*;                              
        using parse_procedure_ex_t =      sdk::function<int32_t(void*, void*, struct nt::access_state_t*, char, uint32_t, nt::unicode_view*, nt::unicode_view*, void*, struct sec::quality_of_service_t*, struct ob::extended_parse_parameters_t*, void**)>*;                              
        using security_procedure_t =      sdk::function<int32_t(void*, enum sec::operation_code_t, uint32_t*, void*, uint32_t*, void**, enum nt::pool_type_t, struct nt::generic_mapping_t*, char)>*;                              
        using query_name_procedure_t =    sdk::function<int32_t(void*, uint8_t, struct nt::object_name_information_t*, uint32_t, uint32_t*, char)>*;                              
        using okay_to_close_procedure_t = sdk::function<uint8_t(struct nt::eprocess_t*, void*, void*, char)>*;                              
                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                               
        _m000 uint16_t                     length;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m001 varuint_t                    object_type_flags;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ObjectTypeFlags
        _m002 uint1_t                      case_insensitive;               //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .CaseInsensitive
        _m003 uint1_t                      unnamed_objects_only;           //{ +0x0002@1  +0x0002@1  +0x0002@1  +0x0002@1  } | .UnnamedObjectsOnly
        _m004 uint1_t                      use_default_object;             //{ +0x0002@2  +0x0002@2  +0x0002@2  +0x0002@2  } | .UseDefaultObject
        _m005 uint1_t                      security_required;              //{ +0x0002@3  +0x0002@3  +0x0002@3  +0x0002@3  } | .SecurityRequired
        _m006 uint1_t                      maintain_handle_count;          //{ +0x0002@4  +0x0002@4  +0x0002@4  +0x0002@4  } | .MaintainHandleCount
        _m007 uint1_t                      maintain_type_list;             //{ +0x0002@5  +0x0002@5  +0x0002@5  +0x0002@5  } | .MaintainTypeList
        _m008 uint1_t                      supports_object_callbacks;      //{ +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  } | .SupportsObjectCallbacks
        _m009 uint1_t                      cache_aligned;                  //{ +0x0002@7  +0x0002@7  +0x0002@7  +0x0002@7  } | .CacheAligned
        _m010 uint1_t                      use_extended_parameters;        //{ +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  } | .UseExtendedParameters
        _m011 uint32_t                     object_type_code;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ObjectTypeCode
        _m012 uint32_t                     invalid_attributes;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InvalidAttributes
        _m013 struct nt::generic_mapping_t generic_mapping;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .GenericMapping
        _m014 uint32_t                     valid_access_mask;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ValidAccessMask
        _m015 uint32_t                     retain_access;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RetainAccess
        _m016 enum nt::pool_type_t         pool_type;                      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .PoolType
        _m017 uint32_t                     default_paged_pool_charge;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DefaultPagedPoolCharge
        _m018 uint32_t                     default_non_paged_pool_charge;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .DefaultNonPagedPoolCharge
        _m019 dump_procedure_t             dump_procedure;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DumpProcedure
        _m020 open_procedure_t             open_procedure;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OpenProcedure
        _m021 close_procedure_t            close_procedure;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CloseProcedure
        _m022 sdk::function<void(void*)>*  delete_procedure;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DeleteProcedure
        _m023 parse_procedure_t            parse_procedure;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ParseProcedure
        _m024 parse_procedure_ex_t         parse_procedure_ex;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ParseProcedureEx
        _m025 security_procedure_t         security_procedure;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .SecurityProcedure
        _m026 query_name_procedure_t       query_name_procedure;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .QueryNameProcedure
        _m027 okay_to_close_procedure_t    okay_to_close_procedure;        //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .OkayToCloseProcedure
        _m028 uint32_t                     wait_object_flag_mask;          //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .WaitObjectFlagMask
        _m029 uint16_t                     wait_object_flag_offset;        //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .WaitObjectFlagOffset
        _m030 uint16_t                     wait_object_pointer_offset;     //{ +0x0076    +0x0076    +0x0076    +0x0076    } | .WaitObjectPointerOffset
                                                                         
        // Windows 10 v1607                                              
        //                                                               
        _m031 uint8_t                      object_type_flags2;             //{ +0x0003    } | .ObjectTypeFlags2
                                                                         
        SDK_MAGIC_PROPERTIES( "_OBJECT_TYPE_INITIALIZER.$", 0x78, true, 0x619169dccb66d4e3 );                              
        SDK_FIXED_SIZE( object_type_initializer_t, 0x78 );                              
    };                                                                   
};
#include "magic/object_type_initializer_t.end.hpp"
SDK_VERIFY( struct nt::object_type_initializer_t, 0x78 );
