#pragma once
#include <sdkgen/support_library.hpp>
#include "dpc_buffer_t.hpp"

#include "magic/stor_dpc_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_DPC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_dpc_t                             
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                        
        _m00 struct stor::port::dpc_buffer_t dpc;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Dpc
        _m01 uint64_t                        lock;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Lock
                                                  
        SDK_MAGIC_PROPERTIES( "_STOR_DPC.$", 0x48, true, 0xc0f51c4ff854d9b3 );     
        SDK_FIXED_SIZE( stor_dpc_t, 0x48 );       
    };                                            
};
#include "magic/stor_dpc_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_dpc_t, 0x48 );
