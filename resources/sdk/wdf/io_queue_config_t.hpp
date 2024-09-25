#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"
#include "io_queue_dispatch_type_t.hpp"

#include "magic/io_queue_config_t.start.hpp"
namespace wdf
{
    struct wdfqueue_t;
    struct wdfdriver_t;
    struct wdfrequest_t;

    // [struct _WDF_IO_QUEUE_CONFIG]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct io_queue_config_t                                                                       
    {                                                                                              
        union u0_settings_t                                                                        
        {                                                                                          
            struct u5_parallel_t                                                                   
            {                                                                                      
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
                //                                                                                 
                _m13 uint32_t number_of_presented_requests;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfPresentedRequests
                                                                                                   
                SDK_NONVOL_PROPERTIES( "_WDF_IO_QUEUE_CONFIG.Settings.Parallel.$", 0x4, true, 0x81f07c91a948d221 );                                                                     
                SDK_FIXED_SIZE( u5_parallel_t, 0x4 );                                                                     
            };                                                                                     
                                                                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                                                     
            _m14 u5_parallel_t                             parallel;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Parallel
                                                                                                   
            SDK_NONVOL_PROPERTIES( "_WDF_IO_QUEUE_CONFIG.Settings.$", 0x4, true, 0xe45a7a7e11f6630b );                                        
            SDK_FIXED_SIZE( u0_settings_t, 0x4 );                                                  
        };                                                                                         
                                                                                                   
        using evt_io_default_t =                 sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*;                               
        using evt_io_read_t =                    sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*;                               
        using evt_io_write_t =                   sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*;                               
        using evt_io_device_control_t =          sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*;                               
        using evt_io_internal_device_control_t = sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*;                               
        using pfn_wdf_io_queue_io_stop_t =       sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint32_t)>*;                               
        using evt_io_resume_t =                  sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*;                               
        using evt_io_canceled_on_queue_t =       sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*;                               
                                                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                                         
        _m00 uint32_t                                               size;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum wdf::io_queue_dispatch_type_t                     dispatch_type;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DispatchType
        _m02 enum wdf::tri_state_t                                  power_managed;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PowerManaged
        _m03 uint8_t                                                allow_zero_length_requests;      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .AllowZeroLengthRequests
        _m04 uint8_t                                                default_queue;                   //{ +0x000d    +0x000d    +0x000d    +0x000d    +0x000d    } | .DefaultQueue
        _m05 evt_io_default_t                                       evt_io_default;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .EvtIoDefault
        _m06 evt_io_read_t                                          evt_io_read;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .EvtIoRead
        _m07 evt_io_write_t                                         evt_io_write;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .EvtIoWrite
        _m08 evt_io_device_control_t                                evt_io_device_control;           //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .EvtIoDeviceControl
        _m09 evt_io_internal_device_control_t                       evt_io_internal_device_control;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .EvtIoInternalDeviceControl
        _m10 pfn_wdf_io_queue_io_stop_t                             evt_io_stop;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .EvtIoStop
        _m11 evt_io_resume_t                                        evt_io_resume;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .EvtIoResume
        _m12 evt_io_canceled_on_queue_t                             evt_io_canceled_on_queue;        //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .EvtIoCanceledOnQueue
        _m15 u0_settings_t                                          settings;                        //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .Settings
        _m16 struct wdf::wdfdriver_t*                               driver;                          //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .Driver
                                                                                                   
        SDK_NONVOL_PROPERTIES( "_WDF_IO_QUEUE_CONFIG.$", 0x60, true, 0x161b9dc524f5254 );                               
        SDK_FIXED_SIZE( io_queue_config_t, 0x60 );                                                 
    };                                                                                             
};
#include "magic/io_queue_config_t.end.hpp"
SDK_VERIFY( struct wdf::io_queue_config_t::u0_settings_t::u5_parallel_t, 0x4 );
SDK_VERIFY( union wdf::io_queue_config_t::u0_settings_t, 0x4 );
SDK_VERIFY( struct wdf::io_queue_config_t, 0x60 );
