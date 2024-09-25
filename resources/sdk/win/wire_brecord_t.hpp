#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_brecord_t.start.hpp"
namespace win
{
    struct i_record_info_t;

    // [struct _wireBRECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_brecord_t                            
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 uint32_t                     f_flags;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fFlags
        _m01 uint32_t                     cl_size;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .clSize
        _m02 struct win::i_record_info_t* p_rec_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pRecInfo
        _m03 uint8_t*                     p_record;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pRecord
                                                     
        SDK_MAGIC_PROPERTIES( "_wireBRECORD.$", 0x18, true, 0xe42bf4972c251dcf );           
        SDK_FIXED_SIZE( wire_brecord_t, 0x18 );           
    };                                               
};
#include "magic/wire_brecord_t.end.hpp"
SDK_VERIFY( struct win::wire_brecord_t, 0x18 );
