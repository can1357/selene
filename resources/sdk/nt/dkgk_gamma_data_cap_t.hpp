#pragma once
#include <sdkgen/support_library.hpp>
#include "../dxgk/gamma_data_type_t.hpp"

#include "magic/dkgk_gamma_data_cap_t.start.hpp"
namespace nt
{
    // [struct _DKGK_GAMMA_DATA_CAP]
    // => WDK 10 (NV)
    //
    struct dkgk_gamma_data_cap_t                                
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 enum dxgk::gamma_data_type_t data_type;              //{ +0x0000    } | .DataType
        _m01 uint6_t                      bit_count_of_integer;   //{ +0x0004@0  } | .BitCountOfInteger
        _m02 uint6_t                      bit_count_of_fraction;  //{ +0x0004@6  } | .BitCountOfFraction
        _m03 uint6_t                      bit_count_of_exponent;  //{ +0x0004@0  } | .BitCountOfExponent
        _m04 uint6_t                      bit_count_of_mantissa;  //{ +0x0004@6  } | .BitCountOfMantissa
        _m05 uint32_t                     value;                  //{ +0x0004    } | .Value
        _m06 float                        numeric_range_min;      //{ +0x0008    } | .NumericRangeMin
        _m07 float                        numeric_range_max;      //{ +0x000c    } | .NumericRangeMax
                                                                
        SDK_NONVOL_PROPERTIES( "_DKGK_GAMMA_DATA_CAP.$", 0x0, false, 0xa693628dcce06d0 );                      
        SDK_FIXED_SIZE( dkgk_gamma_data_cap_t, 0x10 );                      
    };                                                          
};
#include "magic/dkgk_gamma_data_cap_t.end.hpp"
SDK_VERIFY( struct nt::dkgk_gamma_data_cap_t, 0x10 );
