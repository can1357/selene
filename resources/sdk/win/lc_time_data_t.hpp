#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lc_time_data_t.start.hpp"
namespace win
{
    // [struct __lc_time_data]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lc_time_data_t                           
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m00 sdk::array<char*, 7>     wday_abbr;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wday_abbr
        _m01 sdk::array<char*, 7>     wday;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .wday
        _m02 sdk::array<char*, 12>    month_abbr;     //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .month_abbr
        _m03 sdk::array<char*, 12>    month;          //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .month
        _m04 sdk::array<char*, 2>     ampm;           //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .ampm
        _m05 char*                    ww_sdatefmt;    //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .ww_sdatefmt
        _m06 char*                    ww_ldatefmt;    //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .ww_ldatefmt
        _m07 char*                    ww_timefmt;     //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .ww_timefmt
        _m08 uint32_t                 ww_lcid;        //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .ww_lcid
        _m09 int32_t                  ww_caltype;     //{ +0x015c    +0x015c    +0x015c    +0x015c    } | .ww_caltype
        _m10 int32_t                  refcount;       //{ +0x0160    +0x0160    +0x0160    +0x0160    } | .refcount
        _m11 sdk::array<wchar_t*, 7>  w_wday_abbr;    //{ +0x0168    +0x0168    +0x0168    +0x0168    } | ._W_wday_abbr
        _m12 sdk::array<wchar_t*, 7>  w_wday;         //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | ._W_wday
        _m13 sdk::array<wchar_t*, 12> w_month_abbr;   //{ +0x01d8    +0x01d8    +0x01d8    +0x01d8    } | ._W_month_abbr
        _m14 sdk::array<wchar_t*, 12> w_month;        //{ +0x0238    +0x0238    +0x0238    +0x0238    } | ._W_month
        _m15 sdk::array<wchar_t*, 2>  w_ampm;         //{ +0x0298    +0x0298    +0x0298    +0x0298    } | ._W_ampm
        _m16 wchar_t*                 w_ww_sdatefmt;  //{ +0x02a8    +0x02a8    +0x02a8    +0x02a8    } | ._W_ww_sdatefmt
        _m17 wchar_t*                 w_ww_ldatefmt;  //{ +0x02b0    +0x02b0    +0x02b0    +0x02b0    } | ._W_ww_ldatefmt
        _m18 wchar_t*                 w_ww_timefmt;   //{ +0x02b8    +0x02b8    +0x02b8    +0x02b8    } | ._W_ww_timefmt
                                                    
        SDK_MAGIC_PROPERTIES( "__lc_time_data.$", 0x2c0, true, 0x62ab7a6b6885580f );              
        SDK_FIXED_SIZE( lc_time_data_t, 0x2c0 );              
    };                                              
};
#include "magic/lc_time_data_t.end.hpp"
SDK_VERIFY( struct win::lc_time_data_t, 0x2c0 );
