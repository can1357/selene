#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/entry_header_t.start.hpp"
namespace tag
{
    // [struct tagEntryHeader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct entry_header_t                
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                               
        _m00 uint32_t          signature;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t          cb_buffer;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbBuffer
        _m02 uint32_t          cb_size;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbSize
        _m03 struct nt::guid_t policy_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .policyID
                                         
        SDK_MAGIC_PROPERTIES( "tagEntryHeader.$", 0x20, true, 0x744265bc43cf7efa );          
        SDK_FIXED_SIZE( entry_header_t, 0x20 );          
    };                                   
};
#include "magic/entry_header_t.end.hpp"
SDK_VERIFY( struct tag::entry_header_t, 0x20 );
