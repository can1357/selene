#pragma once
#include <sdkgen/support_library.hpp>
#include "callback_node_flags_t.hpp"
#include "flt_preop_callback_status_t.hpp"
#include "flt_postop_callback_status_t.hpp"

namespace nt { struct file_object_t; }

#include "magic/callback_node_t.start.hpp"
namespace fltmgr
{
    struct flt_instance_t;
    struct flt_name_control_t;
    struct flt_callback_data_t;
    struct flt_related_objects_t;
    struct file_names_information_t;

    // [struct _CALLBACK_NODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct callback_node_t                                                  
    {                                                                       
        using pre_operation_t =               sdk::function<enum fltmgr::flt_preop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void**)>*;                            
        using post_operation_t =              sdk::function<enum fltmgr::flt_postop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void*, uint32_t)>*;                            
        using generate_file_name_t =          sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, struct fltmgr::flt_callback_data_t*, uint32_t, uint8_t*, struct fltmgr::flt_name_control_t*)>*;                            
        using normalize_name_component_t =    sdk::function<int32_t(struct fltmgr::flt_instance_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*;                            
        using normalize_name_component_ex_t = sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*;                            
                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                  
        _m00 nt::list_entry_t                   callback_links;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CallbackLinks
        _m01 struct fltmgr::flt_instance_t*     instance;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Instance
        _m02 pre_operation_t                    pre_operation;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PreOperation
        _m03 post_operation_t                   post_operation;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PostOperation
        _m04 generate_file_name_t               generate_file_name;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GenerateFileName
        _m05 normalize_name_component_t         normalize_name_component;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NormalizeNameComponent
        _m06 normalize_name_component_ex_t      normalize_name_component_ex;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NormalizeNameComponentEx
        _m07 sdk::function<void(void**)>*       normalize_context_cleanup;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NormalizeContextCleanup
        _m08 enum fltmgr::callback_node_flags_t flags;                        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Flags
                                                                            
        SDK_MAGIC_PROPERTIES( "_CALLBACK_NODE.$", 0x30, true, 0x258460a217f48b6a );                            
        SDK_FIXED_SIZE( callback_node_t, 0x30 );                            
    };                                                                      
};
#include "magic/callback_node_t.end.hpp"
SDK_VERIFY( struct fltmgr::callback_node_t, 0x30 );
