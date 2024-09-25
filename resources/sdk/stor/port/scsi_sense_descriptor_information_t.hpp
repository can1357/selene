#pragma once
#include <sdkgen/support_library.hpp>
#include "scsi_sense_descriptor_header_t.hpp"

#include "magic/scsi_sense_descriptor_information_t.start.hpp"
namespace stor::port
{
    // [struct _SCSI_SENSE_DESCRIPTOR_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scsi_sense_descriptor_information_t           
    {                                                    
        using scsi_sense_descriptor_header_t = struct stor::port::scsi_sense_descriptor_header_t;            
                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                               
        _m00 scsi_sense_descriptor_header_t  header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint1_t                         valid;        //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .Valid
        _m02 sdk::array<uint8_t, 8>          information;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Information
                                                         
        SDK_NONVOL_PROPERTIES( "_SCSI_SENSE_DESCRIPTOR_INFORMATION.$", 0xc, true, 0xe404e88152c1219d );            
        SDK_FIXED_SIZE( scsi_sense_descriptor_information_t, 0xc );            
    };                                                   
};
#include "magic/scsi_sense_descriptor_information_t.end.hpp"
SDK_VERIFY( struct stor::port::scsi_sense_descriptor_information_t, 0xc );
