#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/irp_ext_track_offset_header_t.start.hpp"
namespace io
{
    struct irp_ext_track_offset_header_t;

    // [struct _IO_IRP_EXT_TRACK_OFFSET_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct irp_ext_track_offset_header_t                                            
    {                                                                               
        using pio_irp_ext_process_tracked_offset_callback_t = sdk::function<void(struct io::irp_ext_track_offset_header_t*, struct io::irp_ext_track_offset_header_t*, int64_t)>*;                        
                                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                          
        _m00 uint16_t                                       validation;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Validation
        _m01 uint16_t                                       flags;                    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m02 pio_irp_ext_process_tracked_offset_callback_t  tracked_offset_callback;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TrackedOffsetCallback
                                                                                    
        SDK_NONVOL_PROPERTIES( "_IO_IRP_EXT_TRACK_OFFSET_HEADER.$", 0x10, true, 0x6d76a7b01203ce9e );                        
        SDK_FIXED_SIZE( irp_ext_track_offset_header_t, 0x10 );                        
    };                                                                              
};
#include "magic/irp_ext_track_offset_header_t.end.hpp"
SDK_VERIFY( struct io::irp_ext_track_offset_header_t, 0x10 );
