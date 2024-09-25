#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"
#include "urb_hcd_area_t.hpp"

namespace nt { struct mdl_t; }

#include "magic/urb_control_transfer_ex_t.start.hpp"
namespace wdf
{
    // [struct _URB_CONTROL_TRANSFER_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_control_transfer_ex_t                           
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                     
        _m00 struct wdf::urb_header_t   hdr;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 void*                      pipe_handle;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PipeHandle
        _m02 uint32_t                   transfer_flags;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TransferFlags
        _m03 uint32_t                   transfer_buffer_length;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .TransferBufferLength
        _m04 void*                      transfer_buffer;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TransferBuffer
        _m05 struct nt::mdl_t*          transfer_buffer_mdl;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TransferBufferMDL
        _m06 uint32_t                   timeout;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Timeout
        _m07 struct wdf::urb_hcd_area_t hca;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .hca
        _m08 sdk::array<uint8_t, 8>     setup_packet;            //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .SetupPacket
                                                               
        SDK_MAGIC_PROPERTIES( "_URB_CONTROL_TRANSFER_EX.$", 0x88, true, 0x2e4f61128532a061 );                       
        SDK_FIXED_SIZE( urb_control_transfer_ex_t, 0x88 );                       
    };                                                         
};
#include "magic/urb_control_transfer_ex_t.end.hpp"
SDK_VERIFY( struct wdf::urb_control_transfer_ex_t, 0x88 );
