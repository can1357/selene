#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PD_DEVICE_SPECIFIC_PROPERTY]
    // => WDK 10
    //
    struct scm_pd_device_specific_property_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "_SCM_PD_DEVICE_SPECIFIC_PROPERTY.$", 0x0, false, 0xf22ef44e56afec53 );
        SDK_FIXED_SIZE( scm_pd_device_specific_property_t, 0x0 );
    };                                      
};
SDK_VERIFY( struct nt::scm_pd_device_specific_property_t, 0x0 );
