#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_info_exceptions_t.start.hpp"
namespace nt
{
    // [struct _MODE_INFO_EXCEPTIONS]
    // => WDK 10 (NV)
    //
    struct mode_info_exceptions_t                  
    {                                              
        // WDK 10                                  
        //                                         
        _m00 uint6_t                page_code;       //{ +0x0000@0  } | .PageCode
        _m01 uint1_t                ps_bit;          //{ +0x0000@7  } | .PSBit
        _m02 uint8_t                page_length;     //{ +0x0001    } | .PageLength
        _m03 uint8_t                flags;           //{ +0x0002    } | .Flags
        _m04 uint1_t                log_err;         //{ +0x0002@0  } | .LogErr
        _m05 uint1_t                test;            //{ +0x0002@2  } | .Test
        _m06 uint1_t                dexcpt;          //{ +0x0002@3  } | .Dexcpt
        _m07 uint1_t                perf;            //{ +0x0002@7  } | .Perf
        _m08 uint4_t                report_method;   //{ +0x0003@0  } | .ReportMethod
        _m09 sdk::array<uint8_t, 4> interval_timer;  //{ +0x0004    } | .IntervalTimer
        _m10 sdk::array<uint8_t, 4> report_count;    //{ +0x0008    } | .ReportCount
                                                   
        SDK_NONVOL_PROPERTIES( "_MODE_INFO_EXCEPTIONS.$", 0x0, false, 0xa125e0da7dab69a5 );               
        SDK_FIXED_SIZE( mode_info_exceptions_t, 0xc );               
    };                                             
};
#include "magic/mode_info_exceptions_t.end.hpp"
SDK_VERIFY( struct nt::mode_info_exceptions_t, 0xc );
