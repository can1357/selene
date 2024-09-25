#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"
#include "urb_pipe_request_t.hpp"
#include "urb_isoch_transfer_t.hpp"
#include "urb_control_transfer_t.hpp"
#include "urb_get_frame_length_t.hpp"
#include "urb_select_interface_t.hpp"
#include "urb_set_frame_length_t.hpp"
#include "urb_control_transfer_ex_t.hpp"
#include "urb_open_static_streams_t.hpp"
#include "urb_frame_length_control_t.hpp"
#include "urb_select_configuration_t.hpp"
#include "urb_control_feature_request_t.hpp"
#include "urb_get_current_frame_number_t.hpp"
#include "urb_bulk_or_interrupt_transfer_t.hpp"
#include "urb_control_descriptor_request_t.hpp"
#include "urb_control_get_status_request_t.hpp"
#include "urb_control_get_interface_request_t.hpp"
#include "urb_os_feature_descriptor_request_t.hpp"
#include "urb_control_vendor_or_class_request_t.hpp"
#include "urb_control_get_configuration_request_t.hpp"
#include "urb_get_isoch_pipe_transfer_path_delays_t.hpp"

#include "magic/urb_t.start.hpp"
namespace wdf
{
    // [struct _URB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_t                                                                                     
    {                                                                                                
        using urb_control_vendor_class_request_t =        struct wdf::urb_control_vendor_or_class_request_t;                                        
        using urb_control_get_configuration_request_t =   struct wdf::urb_control_get_configuration_request_t;                                        
        using urb_get_isoch_pipe_transfer_path_delays_t = struct wdf::urb_get_isoch_pipe_transfer_path_delays_t;                                        
                                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                           
        _m00 struct wdf::urb_header_t                        urb_header;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbHeader
        _m01 struct wdf::urb_select_interface_t              urb_select_interface;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbSelectInterface
        _m02 struct wdf::urb_select_configuration_t          urb_select_configuration;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbSelectConfiguration
        _m03 struct wdf::urb_pipe_request_t                  urb_pipe_request;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbPipeRequest
        _m04 struct wdf::urb_frame_length_control_t          urb_frame_length_control;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbFrameLengthControl
        _m05 struct wdf::urb_get_frame_length_t              urb_get_frame_length;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbGetFrameLength
        _m06 struct wdf::urb_set_frame_length_t              urb_set_frame_length;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbSetFrameLength
        _m07 struct wdf::urb_get_current_frame_number_t      urb_get_current_frame_number;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbGetCurrentFrameNumber
        _m08 struct wdf::urb_control_transfer_t              urb_control_transfer;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbControlTransfer
        _m09 struct wdf::urb_control_transfer_ex_t           urb_control_transfer_ex;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbControlTransferEx
        _m10 struct wdf::urb_bulk_or_interrupt_transfer_t    urb_bulk_or_interrupt_transfer;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbBulkOrInterruptTransfer
        _m11 struct wdf::urb_isoch_transfer_t                urb_isochronous_transfer;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbIsochronousTransfer
        _m12 struct wdf::urb_control_descriptor_request_t    urb_control_descriptor_request;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbControlDescriptorRequest
        _m13 struct wdf::urb_control_get_status_request_t    urb_control_get_status_request;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbControlGetStatusRequest
        _m14 struct wdf::urb_control_feature_request_t       urb_control_feature_request;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbControlFeatureRequest
        _m15 urb_control_vendor_class_request_t              urb_control_vendor_class_request;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbControlVendorClassRequest
        _m16 struct wdf::urb_control_get_interface_request_t urb_control_get_interface_request;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbControlGetInterfaceRequest
        _m17 urb_control_get_configuration_request_t         urb_control_get_configuration_request;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbControlGetConfigurationRequest
        _m18 struct wdf::urb_os_feature_descriptor_request_t urb_os_feature_descriptor_request;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbOSFeatureDescriptorRequest
        _m19 struct wdf::urb_open_static_streams_t           urb_open_static_streams;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UrbOpenStaticStreams
                                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
        //                                                                                           
        _m20 urb_get_isoch_pipe_transfer_path_delays_t       urb_get_isoch_pipe_transfer_path_delays;  //{ +0x0000    +0x0000    +0x0000    } | .UrbGetIsochPipeTransferPathDelays
                                                                                                     
        SDK_MAGIC_PROPERTIES( "_URB.$", 0x98, true, 0x7aa0ac39ae7acd0e );                                        
        SDK_FIXED_SIZE( urb_t, 0x98 );                                                               
    };                                                                                               
};
#include "magic/urb_t.end.hpp"
SDK_VERIFY( struct wdf::urb_t, 0x98 );
