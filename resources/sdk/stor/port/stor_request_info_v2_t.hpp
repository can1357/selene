#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_io_priority_hint_t.hpp"

#include "magic/stor_request_info_v2_t.start.hpp"
namespace stor::port
{
    struct stor_unicode_string_t;

    // [struct _STOR_REQUEST_INFO_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_request_info_v2_t                                       
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                              
        _m00 uint16_t                                  version;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t                                  size;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 enum stor::port::stor_io_priority_hint_t  priority_hint;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PriorityHint
        _m03 uint32_t                                  flags;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m04 uint32_t                                  key;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Key
        _m05 uint32_t                                  length;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
        _m06 uint8_t                                   is_write_request;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .IsWriteRequest
        _m07 struct stor::port::stor_unicode_string_t* file_name;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FileName
        _m08 uint32_t                                  process_id;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ProcessId
                                                                        
        SDK_MAGIC_PROPERTIES( "_STOR_REQUEST_INFO_V2.$", 0x28, true, 0x48e24f14919b9b06 );                 
        SDK_FIXED_SIZE( stor_request_info_v2_t, 0x28 );                 
    };                                                                  
};
#include "magic/stor_request_info_v2_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_request_info_v2_t, 0x28 );
