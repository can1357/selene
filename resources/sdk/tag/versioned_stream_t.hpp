#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace win { struct i_stream_t; }

#include "magic/versioned_stream_t.start.hpp"
namespace tag
{
    // [struct tagVersionedStream]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct versioned_stream_t                     
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                        
        _m00 struct nt::guid_t       guid_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .guidVersion
        _m01 struct win::i_stream_t* p_stream;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pStream
                                                  
        SDK_MAGIC_PROPERTIES( "tagVersionedStream.$", 0x18, true, 0xee4cdde67a674a2c );             
        SDK_FIXED_SIZE( versioned_stream_t, 0x18 );             
    };                                            
};
#include "magic/versioned_stream_t.end.hpp"
SDK_VERIFY( struct tag::versioned_stream_t, 0x18 );
