#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/exception_t.start.hpp"
namespace win
{
    // [struct _exception]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct exception_t      
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 int32_t type;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .type
        _m01 char*   name;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .name
        _m02 double  arg1;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .arg1
        _m03 double  arg2;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .arg2
        _m04 double  retval;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .retval
                            
        SDK_MAGIC_PROPERTIES( "_exception.$", 0x28, true, 0x5551ad6429ef91c );       
        SDK_FIXED_SIZE( exception_t, 0x28 );       
    };                      
};
#include "magic/exception_t.end.hpp"
SDK_VERIFY( struct win::exception_t, 0x28 );
