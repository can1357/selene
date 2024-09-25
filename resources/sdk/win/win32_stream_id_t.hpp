#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/win32_stream_id_t.start.hpp"
namespace win
{
    // [struct _WIN32_STREAM_ID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct win32_stream_id_t                             
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                               
        _m00 uint32_t               dw_stream_id;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwStreamId
        _m01 uint32_t               dw_stream_attributes;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwStreamAttributes
        _m02 int64_t                size;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m03 uint32_t               dw_stream_name_size;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwStreamNameSize
        _m04 sdk::array<wchar_t, 1> c_stream_name;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cStreamName
                                                         
        SDK_MAGIC_PROPERTIES( "_WIN32_STREAM_ID.$", 0x18, true, 0xa887f0fb63e3cf2b );                     
        SDK_FIXED_SIZE( win32_stream_id_t, 0x18 );                     
    };                                                   
};
#include "magic/win32_stream_id_t.end.hpp"
SDK_VERIFY( struct win::win32_stream_id_t, 0x18 );
