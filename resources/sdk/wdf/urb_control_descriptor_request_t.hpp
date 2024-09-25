#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"
#include "urb_hcd_area_t.hpp"

namespace nt { struct mdl_t; }

#include "magic/urb_control_descriptor_request_t.start.hpp"
namespace wdf
{
    struct urb_t;

    // [struct _URB_CONTROL_DESCRIPTOR_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_control_descriptor_request_t                    
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                     
        _m00 struct wdf::urb_header_t   hdr;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 uint32_t                   transfer_buffer_length;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .TransferBufferLength
        _m02 void*                      transfer_buffer;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TransferBuffer
        _m03 struct nt::mdl_t*          transfer_buffer_mdl;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TransferBufferMDL
        _m04 struct wdf::urb_t*         urb_link;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .UrbLink
        _m05 struct wdf::urb_hcd_area_t hca;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .hca
        _m06 uint8_t                    index;                   //{ +0x0082    +0x0082    +0x0082    +0x0082    } | .Index
        _m07 uint8_t                    descriptor_type;         //{ +0x0083    +0x0083    +0x0083    +0x0083    } | .DescriptorType
        _m08 uint16_t                   language_id;             //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .LanguageId
                                                               
        SDK_MAGIC_PROPERTIES( "_URB_CONTROL_DESCRIPTOR_REQUEST.$", 0x88, true, 0xf07c1f830a53e587 );                       
        SDK_FIXED_SIZE( urb_control_descriptor_request_t, 0x88 );                       
    };                                                         
};
#include "magic/urb_control_descriptor_request_t.end.hpp"
SDK_VERIFY( struct wdf::urb_control_descriptor_request_t, 0x88 );
