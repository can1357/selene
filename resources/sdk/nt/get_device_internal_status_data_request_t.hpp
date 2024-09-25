#pragma once
#include <sdkgen/support_library.hpp>
#include "device_internal_status_data_set_t.hpp"
#include "device_internal_status_data_request_type_t.hpp"

#include "magic/get_device_internal_status_data_request_t.start.hpp"
namespace nt
{
    // [struct _GET_DEVICE_INTERNAL_STATUS_DATA_REQUEST]
    // => WDK 10 (NV)
    //
    struct get_device_internal_status_data_request_t                       
    {                                                                      
        using device_internal_status_data_request_type_t = enum nt::device_internal_status_data_request_type_t;                  
                                                                           
        // WDK 10                                                          
        //                                                                 
        _m00 uint32_t                                    version;            //{ +0x0000    } | .Version
        _m01 uint32_t                                    size;               //{ +0x0004    } | .Size
        _m02 device_internal_status_data_request_type_t  request_data_type;  //{ +0x0008    } | .RequestDataType
        _m03 enum nt::device_internal_status_data_set_t  request_data_set;   //{ +0x000c    } | .RequestDataSet
                                                                           
        SDK_NONVOL_PROPERTIES( "_GET_DEVICE_INTERNAL_STATUS_DATA_REQUEST.$", 0x0, false, 0xc8c02d8a1be5ba75 );                  
        SDK_FIXED_SIZE( get_device_internal_status_data_request_t, 0x10 );                  
    };                                                                     
};
#include "magic/get_device_internal_status_data_request_t.end.hpp"
SDK_VERIFY( struct nt::get_device_internal_status_data_request_t, 0x10 );
