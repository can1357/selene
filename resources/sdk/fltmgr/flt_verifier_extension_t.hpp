#pragma once
#include <sdkgen/support_library.hpp>
#include "tree_root_t.hpp"
#include "flt_filesystem_type_t.hpp"
#include "flt_verifier_operations_t.hpp"
#include "../nt/npaged_lookaside_list_t.hpp"
#include "flt_verifier_extension_flags_t.hpp"

namespace nt { struct file_object_t; }

#include "magic/flt_verifier_extension_t.start.hpp"
namespace fltmgr
{
    struct flt_instance_t;
    struct flt_name_control_t;
    struct flt_callback_data_t;
    struct flt_related_objects_t;
    struct file_names_information_t;

    // [struct _FLT_VERIFIER_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_verifier_extension_t                                                           
    {                                                                                         
        using instance_setup_t =              sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, uint32_t, uint32_t, enum fltmgr::flt_filesystem_type_t)>*;                                     
        using instance_query_teardown_t =     sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, uint32_t)>*;                                     
        using instance_teardown_start_t =     sdk::function<void(const struct fltmgr::flt_related_objects_t*, uint32_t)>*;                                     
        using instance_teardown_complete_t =  sdk::function<void(const struct fltmgr::flt_related_objects_t*, uint32_t)>*;                                     
        using generate_file_name_t =          sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, struct fltmgr::flt_callback_data_t*, uint32_t, uint8_t*, struct fltmgr::flt_name_control_t*)>*;                                     
        using normalize_name_component_t =    sdk::function<int32_t(struct fltmgr::flt_instance_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*;                                     
        using normalize_name_component_ex_t = sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*;                                     
        using operations_t =                  sdk::array<struct fltmgr::flt_verifier_operations_t, 50>;                                     
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                    
        _m00 enum fltmgr::flt_verifier_extension_flags_t flags;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 sdk::function<int32_t(uint32_t)>*           filter_unload;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FilterUnload
        _m02 instance_setup_t                            instance_setup;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InstanceSetup
        _m03 instance_query_teardown_t                   instance_query_teardown;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InstanceQueryTeardown
        _m04 instance_teardown_start_t                   instance_teardown_start;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .InstanceTeardownStart
        _m05 instance_teardown_complete_t                instance_teardown_complete;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .InstanceTeardownComplete
        _m06 generate_file_name_t                        generate_file_name;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .GenerateFileName
        _m07 normalize_name_component_t                  normalize_name_component;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NormalizeNameComponent
        _m08 normalize_name_component_ex_t               normalize_name_component_ex;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NormalizeNameComponentEx
        _m09 operations_t                                operations;                            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Operations
        _m10 char*                                       name;                                  //{ +0x0368    +0x0368    +0x0368    +0x0368    } | .Name
        _m11 struct nt::npaged_lookaside_list_t          flt_verifier_objects_lookaside_list;   //{ +0x0380    +0x0380    +0x0380    +0x0380    } | .FltVerifierObjectsLookasideList
        _m12 struct fltmgr::tree_root_t                  list;                                  //{ +0x0400    +0x0400    +0x0400    +0x0400    } | .List
        _m13 uint64_t                                    lock;                                  //{ +0x0408    +0x0408    +0x0408    +0x0408    } | .Lock
        _m14 sdk::array<uint32_t, 11>                    count;                                 //{ +0x0410    +0x0410    +0x0410    +0x0410    } | .Count
        _m15 int32_t                                     flt_verifier_objects_alloc_failures;   //{ +0x043c    +0x043c    +0x043c    +0x043c    } | .FltVerifierObjectsAllocFailures
        _m16 int32_t                                     flt_verifier_objects_unlink_failures;  //{ +0x0440    +0x0440    +0x0440    +0x0440    } | .FltVerifierObjectsUnlinkFailures
                                                                                              
        SDK_MAGIC_PROPERTIES( "_FLT_VERIFIER_EXTENSION.$", 0x480, true, 0x95df2df4325782b2 );                                     
        SDK_FIXED_SIZE( flt_verifier_extension_t, 0x480 );                                     
    };                                                                                        
};
#include "magic/flt_verifier_extension_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_verifier_extension_t, 0x480 );
