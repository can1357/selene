#pragma once
#include <sdkgen/support_library.hpp>
#include "../hv/details_t.hpp"

#include "magic/system_hypervisor_detail_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_HYPERVISOR_DETAIL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_hypervisor_detail_information_t            
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                   
        _m00 struct hv::details_t hv_vendor_and_max_function;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HvVendorAndMaxFunction
        _m01 struct hv::details_t hypervisor_interface;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HypervisorInterface
        _m02 struct hv::details_t hypervisor_version;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HypervisorVersion
        _m03 struct hv::details_t hv_features;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .HvFeatures
        _m04 struct hv::details_t hw_features;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .HwFeatures
        _m05 struct hv::details_t enlightenment_info;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .EnlightenmentInfo
        _m06 struct hv::details_t implementation_limits;       //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ImplementationLimits
                                                             
        SDK_MAGIC_PROPERTIES( "_SYSTEM_HYPERVISOR_DETAIL_INFORMATION.$", 0x70, true, 0x2e2d36932aa5f013 );                           
        SDK_FIXED_SIZE( system_hypervisor_detail_information_t, 0x70 );                           
    };                                                       
};
#include "magic/system_hypervisor_detail_information_t.end.hpp"
SDK_VERIFY( struct win::system_hypervisor_detail_information_t, 0x70 );
