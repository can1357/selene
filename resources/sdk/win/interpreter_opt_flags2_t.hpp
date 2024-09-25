#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interpreter_opt_flags2_t.start.hpp"
namespace win
{
    // [struct INTERPRETER_OPT_FLAGS2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interpreter_opt_flags2_t         
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                  
        _m00 uint1_t has_new_corr_desc;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .HasNewCorrDesc
        _m01 uint1_t client_corr_check;       //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ClientCorrCheck
        _m02 uint1_t server_corr_check;       //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .ServerCorrCheck
        _m03 uint1_t has_notify;              //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .HasNotify
        _m04 uint1_t has_notify2;             //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .HasNotify2
        _m05 uint1_t has_complex_return;      //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .HasComplexReturn
        _m06 uint1_t has_conformance_range;   //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .HasConformanceRange
        _m07 uint1_t has_big_by_value_param;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasBigByValueParam
                                            
        SDK_MAGIC_PROPERTIES( "INTERPRETER_OPT_FLAGS2.$", 0x1, true, 0xc8fb1d89e11e6364 );                       
        SDK_FIXED_SIZE( interpreter_opt_flags2_t, 0x1 );                       
    };                                      
};
#include "magic/interpreter_opt_flags2_t.end.hpp"
SDK_VERIFY( struct win::interpreter_opt_flags2_t, 0x1 );
