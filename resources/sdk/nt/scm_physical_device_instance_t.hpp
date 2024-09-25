#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SCM_PHYSICAL_DEVICE_INSTANCE]
    // => WDK 10
    //
    struct scm_physical_device_instance_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "_SCM_PHYSICAL_DEVICE_INSTANCE.$", 0x0, false, 0xe98f06559f9e60be );
        SDK_FIXED_SIZE( scm_physical_device_instance_t, 0x0 );
    };                                   
};
SDK_VERIFY( struct nt::scm_physical_device_instance_t, 0x0 );
