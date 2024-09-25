#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scsi_supported_control_type_list_t.start.hpp"
namespace nt
{
    // [struct _SCSI_SUPPORTED_CONTROL_TYPE_LIST]
    // => WDK 10 (NV)
    //
    struct scsi_supported_control_type_list_t        
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint32_t            max_control_type;     //{ +0x0000    } | .MaxControlType
        _m01 sdk::array<uint8_t> supported_type_list;  //{ +0x0004    } | .SupportedTypeList
                                                     
        SDK_NONVOL_PROPERTIES( "_SCSI_SUPPORTED_CONTROL_TYPE_LIST.$", 0x0, false, 0xb432ba753876c2a1 );                    
        SDK_FIXED_SIZE( scsi_supported_control_type_list_t, 0x4 );                    
    };                                               
};
#include "magic/scsi_supported_control_type_list_t.end.hpp"
SDK_VERIFY( struct nt::scsi_supported_control_type_list_t, 0x4 );
