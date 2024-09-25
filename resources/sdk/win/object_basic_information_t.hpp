#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_basic_information_t.start.hpp"
namespace win
{
    // [struct _OBJECT_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_basic_information_t          
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t attributes;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Attributes
        _m01 uint32_t granted_access;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .GrantedAccess
        _m02 uint32_t handle_count;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HandleCount
        _m03 uint32_t pointer_count;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PointerCount
        _m04 uint32_t paged_pool_charge;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PagedPoolCharge
        _m05 uint32_t non_paged_pool_charge;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NonPagedPoolCharge
        _m06 uint32_t name_info_size;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .NameInfoSize
        _m07 uint32_t type_info_size;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TypeInfoSize
        _m08 uint32_t security_descriptor_size;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .SecurityDescriptorSize
        _m09 int64_t  creation_time;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CreationTime
                                               
        SDK_MAGIC_PROPERTIES( "_OBJECT_BASIC_INFORMATION.$", 0x38, true, 0x4554596090befcc2 );                         
        SDK_FIXED_SIZE( object_basic_information_t, 0x38 );                         
    };                                         
};
#include "magic/object_basic_information_t.end.hpp"
SDK_VERIFY( struct win::object_basic_information_t, 0x38 );
