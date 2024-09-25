#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/object_method_exception_handling_info_t.start.hpp"
namespace win
{
    // [struct ObjectMethodExceptionHandlingInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_method_exception_handling_info_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                        
        _m00 void*             pv_object;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pvObject
        _m01 struct nt::guid_t iid;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iid
        _m02 uint32_t          i_method;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .iMethod
        _m03 void*             p_vtable_address;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pVtableAddress
        _m04 const char*       psz_possible_cause;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pszPossibleCause
                                                  
        SDK_MAGIC_PROPERTIES( "ObjectMethodExceptionHandlingInfo.$", 0x30, true, 0x39cdb8db9e8c502d );                   
        SDK_FIXED_SIZE( object_method_exception_handling_info_t, 0x30 );                   
    };                                            
};
#include "magic/object_method_exception_handling_info_t.end.hpp"
SDK_VERIFY( struct win::object_method_exception_handling_info_t, 0x30 );
