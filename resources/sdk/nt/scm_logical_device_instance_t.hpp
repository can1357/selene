#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_LOGICAL_DEVICE_INSTANCE]
    // => WDK 10
    //
    struct scm_logical_device_instance_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "_SCM_LOGICAL_DEVICE_INSTANCE.$", 0x0, false, 0x381966f62f688ec6 );
        SDK_FIXED_SIZE( scm_logical_device_instance_t, 0x0 );
    };                                  
};
SDK_VERIFY( struct nt::scm_logical_device_instance_t, 0x0 );
