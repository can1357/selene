#pragma once
#include <sdkgen/support_library.hpp>
#include "colorspace_transform_data_type_t.hpp"

#include "magic/colorspace_transform_data_cap_t.start.hpp"
namespace nt
{
    // [struct _COLORSPACE_TRANSFORM_DATA_CAP]
    // => WDK 10 (NV)
    //
    struct colorspace_transform_data_cap_t                                   
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 enum nt::colorspace_transform_data_type_t data_type;              //{ +0x0000    } | .DataType
        _m01 uint6_t                                   bit_count_of_integer;   //{ +0x0004@0  } | .BitCountOfInteger
        _m02 uint6_t                                   bit_count_of_fraction;  //{ +0x0004@6  } | .BitCountOfFraction
        _m03 uint6_t                                   bit_count_of_exponent;  //{ +0x0004@0  } | .BitCountOfExponent
        _m04 uint6_t                                   bit_count_of_mantissa;  //{ +0x0004@6  } | .BitCountOfMantissa
        _m05 uint32_t                                  value;                  //{ +0x0004    } | .Value
        _m06 float                                     numeric_range_min;      //{ +0x0008    } | .NumericRangeMin
        _m07 float                                     numeric_range_max;      //{ +0x000c    } | .NumericRangeMax
                                                                             
        SDK_NONVOL_PROPERTIES( "_COLORSPACE_TRANSFORM_DATA_CAP.$", 0x0, false, 0xbe3c1fd7c315b556 );                      
        SDK_FIXED_SIZE( colorspace_transform_data_cap_t, 0x10 );                      
    };                                                                       
};
#include "magic/colorspace_transform_data_cap_t.end.hpp"
SDK_VERIFY( struct nt::colorspace_transform_data_cap_t, 0x10 );
