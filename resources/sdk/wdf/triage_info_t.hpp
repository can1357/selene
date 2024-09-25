#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triage_info_t.start.hpp"
namespace wdf
{
    struct wdfirp_triage_info_t;
    struct wdfqueue_triage_info_t;
    struct wdfdevice_triage_info_t;
    struct wdfobject_triage_info_t;
    struct wdfcontext_triage_info_t;
    struct wdfrequest_triage_info_t;
    struct wdfirpqueue_triage_info_t;
    struct wdfcontexttype_triage_info_t;
    struct wdffwdprogress_triage_info_t;

    // [struct _WDF_TRIAGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct triage_info_t                                                            
    {                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                          
        _m00 uint32_t                                  wdf_major_version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WdfMajorVersion
        _m01 uint32_t                                  wdf_minor_version;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .WdfMinorVersion
        _m02 uint32_t                                  triage_info_major_version;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TriageInfoMajorVersion
        _m03 uint32_t                                  triage_info_minor_version;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TriageInfoMinorVersion
        _m04 struct wdf::wdfobject_triage_info_t*      wdf_object_triage_info;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WdfObjectTriageInfo
        _m05 struct wdf::wdfcontext_triage_info_t*     wdf_context_triage_info;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .WdfContextTriageInfo
        _m06 struct wdf::wdfcontexttype_triage_info_t* wdf_context_type_triage_info;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .WdfContextTypeTriageInfo
        _m07 struct wdf::wdfqueue_triage_info_t*       wdf_queue_triage_info;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .WdfQueueTriageInfo
        _m08 struct wdf::wdffwdprogress_triage_info_t* wdf_fwd_progress_triage_info;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .WdfFwdProgressTriageInfo
        _m09 struct wdf::wdfirpqueue_triage_info_t*    wdf_irp_queue_triage_info;     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .WdfIrpQueueTriageInfo
        _m10 struct wdf::wdfrequest_triage_info_t*     wdf_request_triage_info;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .WdfRequestTriageInfo
        _m11 struct wdf::wdfdevice_triage_info_t*      wdf_device_triage_info;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .WdfDeviceTriageInfo
        _m12 struct wdf::wdfirp_triage_info_t*         wdf_irp_triage_info;           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .WdfIrpTriageInfo
                                                                                    
        SDK_MAGIC_PROPERTIES( "_WDF_TRIAGE_INFO.$", 0x60, true, 0xc1b815f8ca561f13 );                             
        SDK_FIXED_SIZE( triage_info_t, 0x60 );                                      
    };                                                                              
};
#include "magic/triage_info_t.end.hpp"
SDK_VERIFY( struct wdf::triage_info_t, 0x60 );
