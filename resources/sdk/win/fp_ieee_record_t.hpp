#pragma once
#include <sdkgen/support_library.hpp>
#include "fp_ieee_value_t.hpp"

#include "magic/fp_ieee_record_t.start.hpp"
namespace win
{
    // [struct _FP_IEEE_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fp_ieee_record_t                       
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                        
        _m00 struct win::fp_ieee_value_t operand1;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Operand1
        _m01 struct win::fp_ieee_value_t operand2;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Operand2
        _m02 struct win::fp_ieee_value_t result;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Result
                                                  
        SDK_MAGIC_PROPERTIES( "_FP_IEEE_RECORD.$", 0x48, true, 0x268483530519b2c6 );         
        SDK_FIXED_SIZE( fp_ieee_record_t, 0x48 );         
    };                                            
};
#include "magic/fp_ieee_record_t.end.hpp"
SDK_VERIFY( struct win::fp_ieee_record_t, 0x48 );
