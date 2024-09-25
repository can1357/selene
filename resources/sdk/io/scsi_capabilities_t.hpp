#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scsi_capabilities_t.start.hpp"
namespace io
{
    // [struct _IO_SCSI_CAPABILITIES]
    // => WDK 10 (NV)
    //
    struct scsi_capabilities_t                      
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint32_t length;                         //{ +0x0000    } | .Length
        _m01 uint32_t maximum_transfer_length;        //{ +0x0004    } | .MaximumTransferLength
        _m02 uint32_t maximum_physical_pages;         //{ +0x0008    } | .MaximumPhysicalPages
        _m03 uint32_t supported_asynchronous_events;  //{ +0x000c    } | .SupportedAsynchronousEvents
        _m04 uint32_t alignment_mask;                 //{ +0x0010    } | .AlignmentMask
        _m05 uint8_t  tagged_queuing;                 //{ +0x0014    } | .TaggedQueuing
        _m06 uint8_t  adapter_scans_down;             //{ +0x0015    } | .AdapterScansDown
        _m07 uint8_t  adapter_uses_pio;               //{ +0x0016    } | .AdapterUsesPio
                                                    
        SDK_NONVOL_PROPERTIES( "_IO_SCSI_CAPABILITIES.$", 0x0, false, 0x673be48d10f9d2b7 );                              
        SDK_FIXED_SIZE( scsi_capabilities_t, 0x18 );                              
    };                                              
};
#include "magic/scsi_capabilities_t.end.hpp"
SDK_VERIFY( struct io::scsi_capabilities_t, 0x18 );
