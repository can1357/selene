#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scsi_bus_data_t.start.hpp"
namespace nt
{
    // [struct _SCSI_BUS_DATA]
    // => WDK 10 (NV)
    //
    struct scsi_bus_data_t                    
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint8_t  number_of_logical_units;  //{ +0x0000    } | .NumberOfLogicalUnits
        _m01 uint8_t  initiator_bus_id;         //{ +0x0001    } | .InitiatorBusId
        _m02 uint32_t inquiry_data_offset;      //{ +0x0004    } | .InquiryDataOffset
                                              
        SDK_NONVOL_PROPERTIES( "_SCSI_BUS_DATA.$", 0x0, false, 0x6de8e93446c46ef1 );                        
        SDK_FIXED_SIZE( scsi_bus_data_t, 0x8 );                        
    };                                        
};
#include "magic/scsi_bus_data_t.end.hpp"
SDK_VERIFY( struct nt::scsi_bus_data_t, 0x8 );
