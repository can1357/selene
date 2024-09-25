#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "urb_header_t.hpp"
#include "urb_hcd_area_t.hpp"

#include "magic/urb_secure_bulk_or_interrupt_transfer_t.start.hpp"
namespace wdf
{
    struct urb_t;

    // [struct _URB_SECURE_BULK_OR_INTERRUPT_TRANSFER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_secure_bulk_or_interrupt_transfer_t                    
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                            
        _m00 struct wdf::urb_header_t   hdr;                            //{ +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 void*                      pipe_handle;                    //{ +0x0018    +0x0018    +0x0018    } | .PipeHandle
        _m02 uint32_t                   transfer_flags;                 //{ +0x0020    +0x0020    +0x0020    } | .TransferFlags
        _m03 struct nt::guid_t          secure_transfer_buffer_guid;    //{ +0x0024    +0x0024    +0x0024    } | .SecureTransferBufferGuid
        _m04 uint32_t                   secure_transfer_buffer_length;  //{ +0x0034    +0x0034    +0x0034    } | .SecureTransferBufferLength
        _m05 struct wdf::urb_t*         urb_link;                       //{ +0x0038    +0x0038    +0x0038    } | .UrbLink
        _m06 struct wdf::urb_hcd_area_t hca;                            //{ +0x0040    +0x0040    +0x0040    } | .hca
                                                                      
        SDK_MAGIC_PROPERTIES( "_URB_SECURE_BULK_OR_INTERRUPT_TRANSFER.$", 0x80, true, 0x4b455559c7f75918 );                              
        SDK_FIXED_SIZE( urb_secure_bulk_or_interrupt_transfer_t, 0x80 );                              
    };                                                                
};
#include "magic/urb_secure_bulk_or_interrupt_transfer_t.end.hpp"
SDK_VERIFY( struct wdf::urb_secure_bulk_or_interrupt_transfer_t, 0x80 );
