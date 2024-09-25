#pragma once
#include <sdkgen/support_library.hpp>
#include "extended_arguments_t.hpp"

#include "magic/scsi_extended_message_t.start.hpp"
namespace nt
{
    // [struct _SCSI_EXTENDED_MESSAGE]
    // => WDK 10 (NV)
    //
    struct scsi_extended_message_t                               
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 uint8_t                        initial_message_code;  //{ +0x0000    } | .InitialMessageCode
        _m01 uint8_t                        message_length;        //{ +0x0001    } | .MessageLength
        _m02 uint8_t                        message_type;          //{ +0x0002    } | .MessageType
        _m03 union nt::extended_arguments_t extended_arguments;    //{ +0x0003    } | .ExtendedArguments
                                                                 
        SDK_NONVOL_PROPERTIES( "_SCSI_EXTENDED_MESSAGE.$", 0x0, false, 0x4d2e0dd532bbf7c7 );                     
        SDK_FIXED_SIZE( scsi_extended_message_t, 0x7 );                     
    };                                                           
};
#include "magic/scsi_extended_message_t.end.hpp"
SDK_VERIFY( struct nt::scsi_extended_message_t, 0x7 );
