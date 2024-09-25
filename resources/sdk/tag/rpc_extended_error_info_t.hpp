#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/filetime_t.hpp"
#include "../win/systemtime_t.hpp"
#include "rpc_ee_info_param_t.hpp"

#include "magic/rpc_extended_error_info_t.start.hpp"
namespace tag
{
    // [struct tagRPC_EXTENDED_ERROR_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rpc_extended_error_info_t                                             
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                       
        _m00 uint32_t                                       version;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 wchar_t*                                       computer_name;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ComputerName
        _m02 uint32_t                                       process_id;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessID
        _m03 struct win::systemtime_t                       system_time;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SystemTime
        _m04 struct win::filetime_t                         file_time;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .FileTime
        _m05 uint32_t                                       generating_component;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .GeneratingComponent
        _m06 uint32_t                                       status;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Status
        _m07 uint16_t                                       detection_location;    //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .DetectionLocation
        _m08 uint16_t                                       flags;                 //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .Flags
        _m09 int32_t                                        number_of_parameters;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NumberOfParameters
        _m10 sdk::array<struct tag::rpc_ee_info_param_t, 4> parameters;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Parameters
                                                                                 
        SDK_MAGIC_PROPERTIES( "tagRPC_EXTENDED_ERROR_INFO.$", 0x98, true, 0xbb29a64a4f04e6e8 );                     
        SDK_FIXED_SIZE( rpc_extended_error_info_t, 0x98 );                       
    };                                                                           
};
#include "magic/rpc_extended_error_info_t.end.hpp"
SDK_VERIFY( struct tag::rpc_extended_error_info_t, 0x98 );
