#pragma once
#include <sdkgen/support_library.hpp>
#include "nb10_t.hpp"
#include "rsds_t.hpp"
#include "../win/nb10i_t.hpp"
#include "../win/rsdsi_t.hpp"
#include "../win/nb10i_header_t.hpp"
#include "../win/rsdsi_header_t.hpp"
#include "../win/l_ep_bi_header_t.hpp"

#include "magic/cvdd_t.start.hpp"
namespace nt
{
    // [union _CVDD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union cvdd_t                                    
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                          
        _m00 uint32_t                     dw_sig;     //{ +0x0000    +0x0000    +0x0000    } | .dwSig
        _m01 struct win::nb10i_t          nb10i;      //{ +0x0000    +0x0000    +0x0000    } | .nb10i
        _m02 struct win::rsdsi_t          rsdsi;      //{ +0x0000    +0x0000    +0x0000    } | .rsdsi
        _m03 struct win::nb10i_header_t   nb10ih;     //{ +0x0000    +0x0000    +0x0000    } | .nb10ih
        _m04 struct win::rsdsi_header_t   rsdsih;     //{ +0x0000    +0x0000    +0x0000    } | .rsdsih
                                                    
        // Windows 10 v1607                         
        //                                          
        _m05 uint32_t                     signature;  //{ +0x0000    } | .Signature
        _m06 struct nt::nb10_t            nb10;       //{ +0x0000    } | .NB10
        _m07 struct nt::rsds_t            rs_ds;      //{ +0x0000    } | .RsDs
                                                    
        // Windows 11                               
        //                                          
        _m08 struct win::l_ep_bi_header_t lepbih;     //{ +0x0000    } | .lepbih
                                                    
        SDK_MAGIC_PROPERTIES( "_CVDD.$", 0x324, true, 0x2b870f4bb18340f0 );          
        SDK_DYNAMIC_SIZE( cvdd_t );                 
    };                                              
};
#include "magic/cvdd_t.end.hpp"
