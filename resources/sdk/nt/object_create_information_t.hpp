#pragma once
#include <sdkgen/support_library.hpp>
#include "../sec/quality_of_service_t.hpp"

#include "magic/object_create_information_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_CREATE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_create_information_t                                     
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                 
        _m00 uint32_t                          attributes;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Attributes
        _m01 void*                             root_directory;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RootDirectory
        _m02 char                              probe_mode;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProbeMode
        _m03 uint32_t                          paged_pool_charge;            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PagedPoolCharge
        _m04 uint32_t                          non_paged_pool_charge;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NonPagedPoolCharge
        _m05 uint32_t                          security_descriptor_charge;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SecurityDescriptorCharge
        _m06 void*                             security_descriptor;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SecurityDescriptor
        _m07 struct sec::quality_of_service_t* security_qos;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SecurityQos
        _m08 struct sec::quality_of_service_t  security_quality_of_service;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SecurityQualityOfService
                                                                           
        SDK_MAGIC_PROPERTIES( "_OBJECT_CREATE_INFORMATION.$", 0x40, true, 0xbd0ea964f194e759 );                            
        SDK_FIXED_SIZE( object_create_information_t, 0x40 );                            
    };                                                                     
};
#include "magic/object_create_information_t.end.hpp"
SDK_VERIFY( struct nt::object_create_information_t, 0x40 );
