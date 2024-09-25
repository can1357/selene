#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "idle_condition_t.hpp"
#include "net_device_reset_type_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/wdf_cx_characteristics_t.start.hpp"
namespace ndis
{
    struct guid_t;
    struct pm_parameters_t;
    struct wdf_complete_add_params_t;

    // [struct _NDIS_WDF_CX_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdf_cx_characteristics_t                                                                      
    {                                                                                                    
        using evt_cx_power_reference_t =                    sdk::variant<sdk::function<int32_t(void*, uint8_t)>*, sdk::function<int32_t(void*, uint8_t, uint8_t)>*>;                                           
        using evt_cx_get_device_object_t =                  sdk::function<struct nt::device_object_t*(void*)>*;                                           
        using evt_cx_get_next_device_object_t =             sdk::function<struct nt::device_object_t*(void*)>*;                                           
        using evt_cx_get_ndis_handle_from_device_object_t = sdk::function<void*(struct nt::device_object_t*)>*;                                           
        using evt_cx_update_pm_parameters_t =               sdk::function<void(void*, struct ndis::pm_parameters_t*)>*;                                           
        using evt_cx_get_assigned_fdo_name_t =              sdk::function<int32_t(void*, nt::unicode_view*)>*;                                           
        using evt_cx_miniport_complete_add_t =              sdk::function<void(void*, struct ndis::wdf_complete_add_params_t*)>*;                                           
        using evt_cx_miniport_device_reset_t =              sdk::function<int32_t(void*, enum ndis::net_device_reset_type_t)>*;                                           
        using evt_cx_get_wmi_event_guid_t =                 sdk::function<int32_t(void*, int32_t, struct ndis::guid_t**)>*;                                           
        using evt_cx_update_idle_condition_t =              sdk::function<void(void*, enum ndis::idle_condition_t)>*;                                           
                                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                               
        _m00 struct ndis::object_header_t                     header;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 evt_cx_power_reference_t                         evt_cx_power_reference;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EvtCxPowerReference
        _m02 sdk::function<void(void*)>*                      evt_cx_power_dereference;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EvtCxPowerDereference
        _m03 evt_cx_get_device_object_t                       evt_cx_get_device_object;                    //{ +0x0018    +0x0028    +0x0020    +0x0028    } | .EvtCxGetDeviceObject
        _m04 evt_cx_get_next_device_object_t                  evt_cx_get_next_device_object;               //{ +0x0020    +0x0030    +0x0028    +0x0030    } | .EvtCxGetNextDeviceObject
        _m05 evt_cx_get_ndis_handle_from_device_object_t      evt_cx_get_ndis_handle_from_device_object;   //{ +0x0030    +0x0040    +0x0038    +0x0040    } | .EvtCxGetNdisHandleFromDeviceObject
        _m06 evt_cx_update_pm_parameters_t                    evt_cx_update_pm_parameters;                 //{ +0x0038    +0x0048    +0x0040    +0x0048    } | .EvtCxUpdatePMParameters
                                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                                                               
        _m07 evt_cx_get_assigned_fdo_name_t                   evt_cx_get_assigned_fdo_name;                //{ +0x0038    +0x0030    +0x0038    } | .EvtCxGetAssignedFdoName
        _m08 sdk::function<int32_t(void*, uint32_t, void**)>* evt_cx_allocate_miniport_block;              //{ +0x0050    +0x0048    +0x0050    } | .EvtCxAllocateMiniportBlock
        _m09 evt_cx_miniport_complete_add_t                   evt_cx_miniport_complete_add;                //{ +0x0058    +0x0050    +0x0058    } | .EvtCxMiniportCompleteAdd
        _m10 sdk::function<void(void*)>*                      evt_cx_device_start_complete;                //{ +0x0060    +0x0058    +0x0060    } | .EvtCxDeviceStartComplete
        _m11 evt_cx_miniport_device_reset_t                   evt_cx_miniport_device_reset;                //{ +0x0068    +0x0060    +0x0068    } | .EvtCxMiniportDeviceReset
        _m12 sdk::function<int32_t(void*, uint32_t*)>*        evt_cx_miniport_query_device_reset_support;  //{ +0x0070    +0x0068    +0x0070    } | .EvtCxMiniportQueryDeviceResetSupport
        _m13 evt_cx_get_wmi_event_guid_t                      evt_cx_get_wmi_event_guid;                   //{ +0x0078    +0x0070    +0x0078    } | .EvtCxGetWmiEventGuid
                                                                                                         
        // Windows 10 v2004, Windows 10 v20H2                                                            
        //                                                                                               
        _m14 sdk::function<void(void*)>*                      evt_cx_power_ao_ac_engage;                   //{ +0x0018    +0x0018    } | .EvtCxPowerAoAcEngage
        _m15 sdk::function<int32_t(void*, uint8_t)>*          evt_cx_power_ao_ac_disengage;                //{ +0x0020    +0x0020    } | .EvtCxPowerAoAcDisengage
                                                                                                         
        // Windows 11                                                                                    
        //                                                                                               
        _m16 evt_cx_update_idle_condition_t                   evt_cx_update_idle_condition;                //{ +0x0018    } | .EvtCxUpdateIdleCondition
                                                                                                         
        // Windows 10 v1607                                                                              
        //                                                                                               
        _m17 sdk::function<uint32_t(void*)>*                  evt_cx_get_assigned_fdo_index;               //{ +0x0028    } | .EvtCxGetAssignedFdoIndex
                                                                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_WDF_CX_CHARACTERISTICS.$", 0x80, true, 0xcc5b53bd0cca9912 );                                           
        SDK_DYNAMIC_SIZE( wdf_cx_characteristics_t );                                                    
    };                                                                                                   
};
#include "magic/wdf_cx_characteristics_t.end.hpp"
