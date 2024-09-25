#pragma once
#include <sdkgen/support_library.hpp>
#include "smart_attribute_t.hpp"
#include "smart_threshold_t.hpp"

#include "magic/device_smart_data_t.start.hpp"
namespace stor::port
{
    // [struct _DEVICE_SMART_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_smart_data_t                                             
    {                                                                      
        using attributes_t = sdk::array<struct stor::port::smart_attribute_t, 30>;                                     
        using thresholds_t = sdk::array<struct stor::port::smart_threshold_t, 30>;                                     
                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                 
        _m00 uint16_t                 revision;                              //{ +0x0000    +0x0000    +0x0000    } | .Revision
        _m01 attributes_t             attributes;                            //{ +0x0002    +0x0002    +0x0002    } | .Attributes
        _m02 thresholds_t             thresholds;                            //{ +0x0002    +0x0002    +0x0002    } | .Thresholds
        _m03 uint8_t                  offline_data_collection_status;        //{ +0x016a    +0x016a    +0x016a    } | .OfflineDataCollectionStatus
        _m04 uint8_t                  self_test_execution_status;            //{ +0x016b    +0x016b    +0x016b    } | .SelfTestExecutionStatus
        _m05 uint16_t                 offline_data_collection_period;        //{ +0x016c    +0x016c    +0x016c    } | .OfflineDataCollectionPeriod
        _m06 uint8_t                  vendor_specific1;                      //{ +0x016e    +0x016e    +0x016e    } | .VendorSpecific1
        _m07 uint8_t                  offline_data_collection_capabilities;  //{ +0x016f    +0x016f    +0x016f    } | .OfflineDataCollectionCapabilities
        _m08 uint16_t                 smart_capabilities;                    //{ +0x0170    +0x0170    +0x0170    } | .SmartCapabilities
        _m09 uint8_t                  error_logging_capabilities;            //{ +0x0172    +0x0172    +0x0172    } | .ErrorLoggingCapabilities
        _m10 uint8_t                  vendor_specific2;                      //{ +0x0173    +0x0173    +0x0173    } | .VendorSpecific2
        _m11 uint8_t                  short_self_test_polling_period;        //{ +0x0174    +0x0174    +0x0174    } | .ShortSelfTestPollingPeriod
        _m12 uint8_t                  extended_self_test_polling_period;     //{ +0x0175    +0x0175    +0x0175    } | .ExtendedSelfTestPollingPeriod
        _m13 sdk::array<uint8_t, 125> vendor_specific3;                      //{ +0x0182    +0x0182    +0x0182    } | .VendorSpecific3
        _m14 uint8_t                  checksum;                              //{ +0x01ff    +0x01ff    +0x01ff    } | .Checksum
                                                                           
        SDK_MAGIC_PROPERTIES( "_DEVICE_SMART_DATA.$", 0x200, true, 0xe171b4f21d370f1f );                                     
        SDK_FIXED_SIZE( device_smart_data_t, 0x200 );                                     
    };                                                                     
};
#include "magic/device_smart_data_t.end.hpp"
SDK_VERIFY( struct stor::port::device_smart_data_t, 0x200 );
