#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/lc_id_t.hpp"

#include "magic/threadlocaleinfostruct_t.start.hpp"
namespace win
{
    struct lconv_t;
    struct lc_time_data_t;

    // [struct threadlocaleinfostruct]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct threadlocaleinfostruct_t                                 
    {                                                               
        struct u0_lc_category_t                                     
        {                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                      
            _m05 char*    locale;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .locale
            _m06 wchar_t* wlocale;                                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wlocale
            _m07 int32_t* refcount;                                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .refcount
            _m08 int32_t* wrefcount;                                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .wrefcount
                                                                    
            SDK_MAGIC_PROPERTIES( "threadlocaleinfostruct.lc_category.$", 0x20, true, 0xf0077d256e1dee4b );                              
            SDK_FIXED_SIZE( u0_lc_category_t, 0x20 );                              
        };                                                          
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                          
        _m00 int32_t                            refcount;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .refcount
        _m01 uint32_t                           lc_codepage;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .lc_codepage
        _m02 uint32_t                           lc_collate_cp;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lc_collate_cp
        _m03 sdk::array<uint32_t, 6>            lc_handle;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .lc_handle
        _m04 sdk::array<struct tag::lc_id_t, 6> lc_id;                //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .lc_id
        _m09 sdk::array<u0_lc_category_t, 6>    lc_category;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .lc_category
        _m10 int32_t                            lc_clike;             //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .lc_clike
        _m11 int32_t                            mb_cur_max;           //{ +0x010c    +0x010c    +0x010c    +0x010c    } | .mb_cur_max
        _m12 int32_t*                           lconv_intl_refcount;  //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .lconv_intl_refcount
        _m13 int32_t*                           lconv_num_refcount;   //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .lconv_num_refcount
        _m14 int32_t*                           lconv_mon_refcount;   //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .lconv_mon_refcount
        _m15 struct win::lconv_t*               lconv;                //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .lconv
        _m16 int32_t*                           ctype1_refcount;      //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .ctype1_refcount
        _m17 uint16_t*                          ctype1;               //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .ctype1
        _m18 const uint16_t*                    pctype;               //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .pctype
        _m19 const uint8_t*                     pclmap;               //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .pclmap
        _m20 const uint8_t*                     pcumap;               //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .pcumap
        _m21 struct win::lc_time_data_t*        lc_time_curr;         //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .lc_time_curr
                                                                    
        SDK_MAGIC_PROPERTIES( "threadlocaleinfostruct.$", 0x160, true, 0x655dfb07ce07bdc1 );                    
        SDK_FIXED_SIZE( threadlocaleinfostruct_t, 0x160 );                    
    };                                                              
};
#include "magic/threadlocaleinfostruct_t.end.hpp"
SDK_VERIFY( struct win::threadlocaleinfostruct_t::u0_lc_category_t, 0x20 );
SDK_VERIFY( struct win::threadlocaleinfostruct_t, 0x160 );
