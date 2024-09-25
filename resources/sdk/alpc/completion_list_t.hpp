#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

namespace nt { struct eprocess_t; }
namespace nt { struct mdl_t;      }

#include "magic/completion_list_t.start.hpp"
namespace alpc
{
    struct completion_list_header_t;

    // [struct _ALPC_COMPLETION_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct completion_list_t                                             
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                               
        _m00 nt::list_entry_t                       entry;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Entry
        _m01 struct nt::eprocess_t*                 owner_process;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OwnerProcess
        _m02 struct ex::push_lock_t                 completion_list_lock;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CompletionListLock
        _m03 struct nt::mdl_t*                      mdl;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Mdl
        _m04 void*                                  user_va;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .UserVa
        _m05 void*                                  user_limit;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .UserLimit
        _m06 void*                                  data_user_va;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DataUserVa
        _m07 void*                                  system_va;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SystemVa
        _m08 uint64_t                               total_size;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .TotalSize
        _m09 struct alpc::completion_list_header_t* header;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Header
        _m10 void*                                  list;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .List
        _m11 uint64_t                               list_size;             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ListSize
        _m12 void*                                  bitmap;                //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Bitmap
        _m13 uint64_t                               bitmap_size;           //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .BitmapSize
        _m14 void*                                  data;                  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .Data
        _m15 uint64_t                               data_size;             //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .DataSize
        _m16 uint32_t                               bitmap_limit;          //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .BitmapLimit
        _m17 uint32_t                               bitmap_next_hint;      //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .BitmapNextHint
        _m18 uint32_t                               concurrency_count;     //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .ConcurrencyCount
        _m19 uint32_t                               attribute_flags;       //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .AttributeFlags
        _m20 uint32_t                               attribute_size;        //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .AttributeSize
                                                                         
        SDK_MAGIC_PROPERTIES( "_ALPC_COMPLETION_LIST.$", 0xa0, true, 0xf8d6d3e3f5a1c5b );                     
        SDK_FIXED_SIZE( completion_list_t, 0xa0 );                       
    };                                                                   
};
#include "magic/completion_list_t.end.hpp"
SDK_VERIFY( struct alpc::completion_list_t, 0xa0 );
