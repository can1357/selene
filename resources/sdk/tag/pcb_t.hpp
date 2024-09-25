#pragma once
#include <sdkgen/support_library.hpp>
#include "stream_acl_t.hpp"

#include "magic/pcb_t.start.hpp"
namespace tag
{
    // [struct tagPCB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pcb_t                                                 
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                       
        _m00 char*                    p_pickling_buff;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pPicklingBuff
        _m01 char*                    p_true_pickling_buff;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pTruePicklingBuff
        _m02 uint32_t                 ul_pickling_buff_size;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ulPicklingBuffSize
        _m03 uint32_t                 ul_bytes_used;               //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ulBytesUsed
        _m04 struct tag::stream_acl_t stream_acl;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StreamACL
        _m05 void*                    pickle_handle;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PickleHandle
        _m06 int32_t                  b_dirty_handle;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .bDirtyHandle
        _m07 int32_t                  b_pickled;                   //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .bPickled
        _m08 uint32_t                 ul_max_num_of_stream_ac_es;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ulMaxNumOfStreamACEs
        _m09 uint32_t                 ul_num_of_stream_ac_es;      //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .ulNumOfStreamACEs
                                                                 
        SDK_MAGIC_PROPERTIES( "tagPCB.$", 0x40, true, 0xd313199581541e6a );                           
        SDK_FIXED_SIZE( pcb_t, 0x40 );                           
    };                                                           
};
#include "magic/pcb_t.end.hpp"
SDK_VERIFY( struct tag::pcb_t, 0x40 );
