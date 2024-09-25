#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scsi_sense_descriptor_header_t.start.hpp"
namespace stor::port
{
    // [struct _SCSI_SENSE_DESCRIPTOR_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scsi_sense_descriptor_header_t
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                             
        _m00 uint8_t descriptor_type;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DescriptorType
        _m01 uint8_t additional_length;    //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .AdditionalLength
                                         
        SDK_NONVOL_PROPERTIES( "_SCSI_SENSE_DESCRIPTOR_HEADER.$", 0x2, true, 0xaa773434eca4fe08 );                  
        SDK_FIXED_SIZE( scsi_sense_descriptor_header_t, 0x2 );                  
    };                                   
};
#include "magic/scsi_sense_descriptor_header_t.end.hpp"
SDK_VERIFY( struct stor::port::scsi_sense_descriptor_header_t, 0x2 );
