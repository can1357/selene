#pragma once
#include <sdkgen/support_library.hpp>
#include "fp_32_t.hpp"
#include "fp_64_t.hpp"
#include "fp_80_t.hpp"
#include "fp_128_t.hpp"

#include "magic/fp_ieee_value_t.start.hpp"
namespace win
{
    // [struct _FP_IEEE_VALUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fp_ieee_value_t                                  
    {                                                       
        union u0_value_t                                    
        {                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
            //                                              
            _m00 int16_t              i16_value;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .I16Value
            _m01 uint16_t             u16_value;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .U16Value
            _m02 int32_t              i32_value;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .I32Value
            _m03 uint32_t             u32_value;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .U32Value
            _m04 void*                string_value;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StringValue
            _m05 uint32_t             compare_value;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CompareValue
            _m06 struct win::fp_32_t  fp32_value;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Fp32Value
            _m07 int64_t              i64_value;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .I64Value
            _m08 uint64_t             u64_value;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .U64Value
            _m09 struct win::fp_64_t  fp64_value;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Fp64Value
            _m10 struct win::fp_80_t  fp80_value;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Fp80Value
            _m11 struct win::fp_128_t fp128_value;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Fp128Value
                                                            
            SDK_MAGIC_PROPERTIES( "_FP_IEEE_VALUE.Value.$", 0x10, true, 0x1422b2ca177ee9ae );                      
            SDK_FIXED_SIZE( u0_value_t, 0x10 );                      
        };                                                  
                                                            
        struct u4_control_t                                 
        {                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                              
            _m13 uint2_t  rounding_mode;                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .RoundingMode
            _m14 uint1_t  inexact;                            //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Inexact
            _m15 uint1_t  underflow;                          //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Underflow
            _m16 uint1_t  overflow;                           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Overflow
            _m17 uint1_t  zero_divide;                        //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ZeroDivide
            _m18 uint1_t  invalid_operation;                  //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .InvalidOperation
            _m19 uint1_t  operand_valid;                      //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .OperandValid
            _m20 uint4_t  format;                             //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Format
            _m21 uint4_t  precision;                          //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .Precision
            _m22 uint12_t operation;                          //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Operation
            _m23 uint1_t  hardware_exception;                 //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .HardwareException
                                                            
            SDK_MAGIC_PROPERTIES( "_FP_IEEE_VALUE.Control.$", 0x4, true, 0xd8bd230f8aeaec50 );                           
            SDK_FIXED_SIZE( u4_control_t, 0x4 );                           
        };                                                  
                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                  
        _m12 u0_value_t                             value;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
        _m24 u4_control_t                           control;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Control
                                                            
        SDK_MAGIC_PROPERTIES( "_FP_IEEE_VALUE.$", 0x18, true, 0xc68b70a4a2da4415 );        
        SDK_FIXED_SIZE( fp_ieee_value_t, 0x18 );            
    };                                                      
};
#include "magic/fp_ieee_value_t.end.hpp"
SDK_VERIFY( union win::fp_ieee_value_t::u0_value_t, 0x10 );
SDK_VERIFY( struct win::fp_ieee_value_t::u4_control_t, 0x4 );
SDK_VERIFY( struct win::fp_ieee_value_t, 0x18 );
