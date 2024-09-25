#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_internal_status_data_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_INTERNAL_STATUS_DATA]
    // => WDK 10 (NV)
    //
    struct device_internal_status_data_t                  
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint32_t                 version;              //{ +0x0000    } | .Version
        _m01 uint32_t                 size;                 //{ +0x0004    } | .Size
        _m02 uint64_t                 t10_vendor_id;        //{ +0x0008    } | .T10VendorId
        _m03 uint32_t                 data_set1_length;     //{ +0x0010    } | .DataSet1Length
        _m04 uint32_t                 data_set2_length;     //{ +0x0014    } | .DataSet2Length
        _m05 uint32_t                 data_set3_length;     //{ +0x0018    } | .DataSet3Length
        _m06 uint32_t                 data_set4_length;     //{ +0x001c    } | .DataSet4Length
        _m07 uint8_t                  status_data_version;  //{ +0x0020    } | .StatusDataVersion
        _m08 sdk::array<uint8_t, 128> reason_identifier;    //{ +0x0024    } | .ReasonIdentifier
        _m09 uint32_t                 status_data_length;   //{ +0x00a4    } | .StatusDataLength
        _m10 sdk::array<uint8_t, 1>   status_data;          //{ +0x00a8    } | .StatusData
                                                          
        SDK_NONVOL_PROPERTIES( "_DEVICE_INTERNAL_STATUS_DATA.$", 0x0, false, 0xece5d07ca97cda16 );                    
        SDK_FIXED_SIZE( device_internal_status_data_t, 0xb0 );                    
    };                                                    
};
#include "magic/device_internal_status_data_t.end.hpp"
SDK_VERIFY( struct nt::device_internal_status_data_t, 0xb0 );
