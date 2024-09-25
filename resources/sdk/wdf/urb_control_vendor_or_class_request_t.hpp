#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"
#include "urb_hcd_area_t.hpp"

namespace nt { struct mdl_t; }

#include "magic/urb_control_vendor_or_class_request_t.start.hpp"
namespace wdf
{
    struct urb_t;

    // [struct _URB_CONTROL_VENDOR_OR_CLASS_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_control_vendor_or_class_request_t                   
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                         
        _m00 struct wdf::urb_header_t   hdr;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 uint32_t                   transfer_flags;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TransferFlags
        _m02 uint32_t                   transfer_buffer_length;      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .TransferBufferLength
        _m03 void*                      transfer_buffer;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TransferBuffer
        _m04 struct nt::mdl_t*          transfer_buffer_mdl;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TransferBufferMDL
        _m05 struct wdf::urb_t*         urb_link;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .UrbLink
        _m06 struct wdf::urb_hcd_area_t hca;                         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .hca
        _m07 uint8_t                    request_type_reserved_bits;  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .RequestTypeReservedBits
        _m08 uint8_t                    request;                     //{ +0x0081    +0x0081    +0x0081    +0x0081    } | .Request
        _m09 uint16_t                   value;                       //{ +0x0082    +0x0082    +0x0082    +0x0082    } | .Value
        _m10 uint16_t                   index;                       //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .Index
                                                                   
        SDK_MAGIC_PROPERTIES( "_URB_CONTROL_VENDOR_OR_CLASS_REQUEST.$", 0x88, true, 0x7f47f0e3cb022fb2 );                           
        SDK_FIXED_SIZE( urb_control_vendor_or_class_request_t, 0x88 );                           
    };                                                             
};
#include "magic/urb_control_vendor_or_class_request_t.end.hpp"
SDK_VERIFY( struct wdf::urb_control_vendor_or_class_request_t, 0x88 );
