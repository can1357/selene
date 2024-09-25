#pragma once
#include <sdkgen/support_library.hpp>
#include "containerversion_t.hpp"
#include "user_context_properties_data_t.hpp"
#include "win_rt_activation_properties_data_t.hpp"

namespace tag { struct blob_t; }

#include "magic/com_win_rt_activation_properties_data_t.start.hpp"
namespace win
{
    // [struct ComWinRTActivationPropertiesData]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct com_win_rt_activation_properties_data_t                                             
    {                                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                     
        _m00 struct win::win_rt_activation_properties_data_t winrt_activation_properties_data;   //{ +0x0000    +0x0000    +0x0000    } | .winrtActivationPropertiesData
        _m01 struct win::user_context_properties_data_t      user_context_properties_data;       //{ +0x0010    +0x0010    +0x0010    } | .userContextPropertiesData
        _m02 struct tag::blob_t*                             rtb_process_mitigation_polcy_blob;  //{ +0x0018    +0x0018    +0x0018    } | .rtbProcessMitigationPolcyBlob
        _m03 struct win::containerversion_t                  negotiated_container_version;       //{ +0x0020    +0x0020    +0x0020    } | .negotiatedContainerVersion
                                                                                               
        SDK_MAGIC_PROPERTIES( "ComWinRTActivationPropertiesData.$", 0x38, true, 0x7e682cc758f1d1 );                                  
        SDK_FIXED_SIZE( com_win_rt_activation_properties_data_t, 0x38 );                                  
    };                                                                                         
};
#include "magic/com_win_rt_activation_properties_data_t.end.hpp"
SDK_VERIFY( struct win::com_win_rt_activation_properties_data_t, 0x38 );
