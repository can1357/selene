#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pool_entry_inuse_t.start.hpp"
namespace ver
{
    // [struct _VI_POOL_ENTRY_INUSE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_entry_inuse_t         
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 void*    virtual_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m01 void*    calling_address;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CallingAddress
        _m02 uint64_t number_of_bytes;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfBytes
        _m03 uint64_t tag;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Tag
                                      
        SDK_MAGIC_PROPERTIES( "_VI_POOL_ENTRY_INUSE.$", 0x20, true, 0x3e7c4f2360feb3f4 );                
        SDK_FIXED_SIZE( pool_entry_inuse_t, 0x20 );                
    };                                
};
#include "magic/pool_entry_inuse_t.end.hpp"
SDK_VERIFY( struct ver::pool_entry_inuse_t, 0x20 );
