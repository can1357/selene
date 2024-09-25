#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memstm_t.start.hpp"
namespace win
{
    // [struct MEMSTM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memstm_t                           
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t cb;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cb
        _m01 uint32_t c_ref;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cRef
        _m02 uint8_t* m_p_buf;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_pBuf
        _m03 void*    h_global;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hGlobal
        _m04 int32_t  f_delete_on_release;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .fDeleteOnRelease
                                              
        // Windows 10 v2004, Windows 10 v20H2                        
        //                                    
        _m05 int32_t  possible_leak_condition;  //{ +0x001c    +0x001c    } | .possibleLeakCondition
                                              
        SDK_MAGIC_PROPERTIES( "MEMSTM.$", 0x20, true, 0x99995f1a937a8307 );                        
        SDK_FIXED_SIZE( memstm_t, 0x20 );                        
    };                                        
};
#include "magic/memstm_t.end.hpp"
SDK_VERIFY( struct win::memstm_t, 0x20 );
