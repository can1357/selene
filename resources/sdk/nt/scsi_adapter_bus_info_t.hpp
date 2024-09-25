#pragma once
#include <sdkgen/support_library.hpp>
#include "scsi_bus_data_t.hpp"

#include "magic/scsi_adapter_bus_info_t.start.hpp"
namespace nt
{
    // [struct _SCSI_ADAPTER_BUS_INFO]
    // => WDK 10 (NV)
    //
    struct scsi_adapter_bus_info_t                                     
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 uint8_t                                   number_of_buses;  //{ +0x0000    } | .NumberOfBuses
        _m01 sdk::array<struct nt::scsi_bus_data_t, 1> bus_data;         //{ +0x0004    } | .BusData
                                                                       
        SDK_NONVOL_PROPERTIES( "_SCSI_ADAPTER_BUS_INFO.$", 0x0, false, 0x34d890a921f05bd5 );                
        SDK_FIXED_SIZE( scsi_adapter_bus_info_t, 0xc );                
    };                                                                 
};
#include "magic/scsi_adapter_bus_info_t.end.hpp"
SDK_VERIFY( struct nt::scsi_adapter_bus_info_t, 0xc );
