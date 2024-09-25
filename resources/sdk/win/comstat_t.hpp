#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/comstat_t.start.hpp"
namespace win
{
    // [struct _COMSTAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct comstat_t              
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint1_t  f_cts_hold;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .fCtsHold
        _m01 uint1_t  f_dsr_hold;   //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .fDsrHold
        _m02 uint1_t  f_rlsd_hold;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .fRlsdHold
        _m03 uint1_t  f_xoff_hold;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .fXoffHold
        _m04 uint1_t  f_xoff_sent;  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .fXoffSent
        _m05 uint1_t  f_eof;        //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .fEof
        _m06 uint1_t  f_txim;       //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .fTxim
        _m07 uint25_t f_reserved;   //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .fReserved
        _m08 uint32_t cb_in_que;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbInQue
        _m09 uint32_t cb_out_que;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbOutQue
                                  
        SDK_MAGIC_PROPERTIES( "_COMSTAT.$", 0xc, true, 0x67861c98ea131820 );            
        SDK_FIXED_SIZE( comstat_t, 0xc );            
    };                            
};
#include "magic/comstat_t.end.hpp"
SDK_VERIFY( struct win::comstat_t, 0xc );
