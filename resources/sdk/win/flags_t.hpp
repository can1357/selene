#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flags_t.start.hpp"
namespace win
{
    // [struct _Flags]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flags_t                         
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                 
        _m00 uint1_t valid_call_pending;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ValidCallPending
        _m01 uint1_t error_pending;          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ErrorPending
        _m02 uint1_t bad_stub_data;          //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .BadStubData
        _m03 uint1_t runtime_cleaned_up;     //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .RuntimeCleanedUp
        _m04 uint1_t client_handle_created;  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ClientHandleCreated
        _m05 uint1_t handleless_obj_call;    //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .HandlelessObjCall
        _m06 uint1_t has_big_by_value_arg;   //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .HasBigByValueArg
        _m07 uint1_t client_dcom_pipe_call;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .ClientDcomPipeCall
                                           
        SDK_MAGIC_PROPERTIES( "_Flags.$", 0x2, true, 0x44bda5604c8002b2 );                      
        SDK_FIXED_SIZE( flags_t, 0x2 );                      
    };                                     
};
#include "magic/flags_t.end.hpp"
SDK_VERIFY( struct win::flags_t, 0x2 );
