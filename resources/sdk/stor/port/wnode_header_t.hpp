#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/guid_t.hpp"

#include "magic/wnode_header_t.start.hpp"
namespace stor::port
{
    // [struct _WNODE_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wnode_header_t                         
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                        
        _m00 uint32_t          buffer_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BufferSize
        _m01 uint32_t          provider_id;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProviderId
        _m02 uint64_t          historical_context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HistoricalContext
        _m03 uint32_t          version;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Version
        _m04 uint32_t          linkage;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Linkage
        _m05 uint32_t          count_lost;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CountLost
        _m06 void*             kernel_handle;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .KernelHandle
        _m07 int64_t           time_stamp;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeStamp
        _m08 struct nt::guid_t guid;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Guid
        _m09 uint32_t          client_context;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ClientContext
        _m10 uint32_t          flags;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Flags
                                                  
        SDK_MAGIC_PROPERTIES( "_WNODE_HEADER.$", 0x30, true, 0x393270aa773082cd );                   
        SDK_FIXED_SIZE( wnode_header_t, 0x30 );                   
    };                                            
};
#include "magic/wnode_header_t.end.hpp"
SDK_VERIFY( struct stor::port::wnode_header_t, 0x30 );
