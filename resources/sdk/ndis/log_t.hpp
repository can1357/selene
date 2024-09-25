#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/log_t.start.hpp"
namespace ndis
{
    struct miniport_block_t;

    // [struct _NDIS_LOG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct log_t                                         
    {                                                    
        // Windows 10 v1607                              
        //                                               
        _m00 struct ndis::miniport_block_t* miniport;      //{ +0x0000    } | .Miniport
        _m01 uint64_t                       log_lock;      //{ +0x0008    } | .LogLock
        _m02 struct nt::irp_t*              irp;           //{ +0x0010    } | .Irp
        _m03 uint32_t                       total_size;    //{ +0x0018    } | .TotalSize
        _m04 uint32_t                       current_size;  //{ +0x001c    } | .CurrentSize
        _m05 uint32_t                       in_ptr;        //{ +0x0020    } | .InPtr
        _m06 uint32_t                       out_ptr;       //{ +0x0024    } | .OutPtr
        _m07 sdk::array<uint8_t, 1>         log_buf;       //{ +0x0028    } | .LogBuf
                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_LOG.$", 0x0, true, 0x4f85c216c9aec2af );             
        SDK_DYNAMIC_SIZE( log_t );                       
    };                                                   
};
#include "magic/log_t.end.hpp"
