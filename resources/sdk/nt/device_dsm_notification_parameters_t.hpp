#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/device_dsm_notification_parameters_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_NOTIFICATION_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct device_dsm_notification_parameters_t                  
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 uint32_t                         size;                //{ +0x0000    } | .Size
        _m01 uint32_t                         flags;               //{ +0x0004    } | .Flags
        _m02 uint32_t                         num_file_type_i_ds;  //{ +0x0008    } | .NumFileTypeIDs
        _m03 sdk::array<struct nt::guid_t, 1> file_type_id;        //{ +0x000c    } | .FileTypeID
                                                                 
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_NOTIFICATION_PARAMETERS.$", 0x0, false, 0x8eec6845dd977f2c );                   
        SDK_FIXED_SIZE( device_dsm_notification_parameters_t, 0x1c );                   
    };                                                           
};
#include "magic/device_dsm_notification_parameters_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_notification_parameters_t, 0x1c );
