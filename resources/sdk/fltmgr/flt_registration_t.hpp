#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_filesystem_type_t.hpp"

namespace nt { struct file_object_t; }

#include "magic/flt_registration_t.start.hpp"
namespace fltmgr
{
    struct flt_instance_t;
    struct flt_name_control_t;
    struct flt_callback_data_t;
    struct flt_related_objects_t;
    struct file_names_information_t;
    struct flt_context_registration_t;
    struct flt_operation_registration_t;

    // [struct _FLT_REGISTRATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_registration_t                                                                      
    {                                                                                              
        using operation_registration_t =               const struct fltmgr::flt_operation_registration_t*;                                     
        using instance_setup_callback_t =              sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, uint32_t, uint32_t, enum fltmgr::flt_filesystem_type_t)>*;                                     
        using instance_query_teardown_callback_t =     sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, uint32_t)>*;                                     
        using instance_teardown_start_callback_t =     sdk::function<void(const struct fltmgr::flt_related_objects_t*, uint32_t)>*;                                     
        using instance_teardown_complete_callback_t =  sdk::function<void(const struct fltmgr::flt_related_objects_t*, uint32_t)>*;                                     
        using generate_file_name_callback_t =          sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, struct fltmgr::flt_callback_data_t*, uint32_t, uint8_t*, struct fltmgr::flt_name_control_t*)>*;                                     
        using normalize_name_component_callback_t =    sdk::function<int32_t(struct fltmgr::flt_instance_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*;                                     
        using transaction_notification_callback_t =    sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, void*, uint32_t)>*;                                     
        using normalize_name_component_ex_callback_t = sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*;                                     
        using section_notification_callback_t =        sdk::function<int32_t(struct fltmgr::flt_instance_t*, void*, struct fltmgr::flt_callback_data_t*)>*;                                     
                                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                         
        _m00 uint16_t                                         size;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                         version;                               //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 uint32_t                                         flags;                                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m03 const struct fltmgr::flt_context_registration_t* context_registration;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextRegistration
        _m04 operation_registration_t                         operation_registration;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OperationRegistration
        _m05 sdk::function<int32_t(uint32_t)>*                filter_unload_callback;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FilterUnloadCallback
        _m06 instance_setup_callback_t                        instance_setup_callback;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .InstanceSetupCallback
        _m07 instance_query_teardown_callback_t               instance_query_teardown_callback;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .InstanceQueryTeardownCallback
        _m08 instance_teardown_start_callback_t               instance_teardown_start_callback;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .InstanceTeardownStartCallback
        _m09 instance_teardown_complete_callback_t            instance_teardown_complete_callback;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .InstanceTeardownCompleteCallback
        _m10 generate_file_name_callback_t                    generate_file_name_callback;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .GenerateFileNameCallback
        _m11 normalize_name_component_callback_t              normalize_name_component_callback;     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NormalizeNameComponentCallback
        _m12 sdk::function<void(void**)>*                     normalize_context_cleanup_callback;    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NormalizeContextCleanupCallback
        _m13 transaction_notification_callback_t              transaction_notification_callback;     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .TransactionNotificationCallback
        _m14 normalize_name_component_ex_callback_t           normalize_name_component_ex_callback;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .NormalizeNameComponentExCallback
        _m15 section_notification_callback_t                  section_notification_callback;         //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .SectionNotificationCallback
                                                                                                   
        SDK_MAGIC_PROPERTIES( "_FLT_REGISTRATION.$", 0x70, true, 0x7f00149848ed6fd6 );                                     
        SDK_FIXED_SIZE( flt_registration_t, 0x70 );                                                
    };                                                                                             
};
#include "magic/flt_registration_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_registration_t, 0x70 );
