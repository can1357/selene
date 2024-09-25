#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/modwriter_flags_t.start.hpp"
namespace nt
{
    // [struct _MODWRITER_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct modwriter_flags_t              
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                
        _m00 uint1_t keep_forever;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .KeepForever
        _m01 uint1_t networked;             //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Networked
        _m02 uint3_t io_priority;           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .IoPriority
        _m03 uint1_t modified_store_write;  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ModifiedStoreWrite
                                          
        SDK_MAGIC_PROPERTIES( "_MODWRITER_FLAGS.$", 0x4, true, 0x8112bf185b1147f9 );                     
        SDK_FIXED_SIZE( modwriter_flags_t, 0x4 );                     
    };                                    
};
#include "magic/modwriter_flags_t.end.hpp"
SDK_VERIFY( struct nt::modwriter_flags_t, 0x4 );
