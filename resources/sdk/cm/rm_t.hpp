#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct cmhive_t;    }
namespace nt { struct eresource_t; }

#include "magic/rm_t.start.hpp"
namespace cm
{
    // [struct _CM_RM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rm_t                                            
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                 
        _m00 nt::list_entry_t        rm_list_entry;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RmListEntry
        _m01 nt::list_entry_t        transaction_list_head;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TransactionListHead
        _m02 void*                   tm_handle;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TmHandle
        _m03 void*                   tm;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Tm
        _m04 void*                   rm_handle;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RmHandle
        _m05 void*                   ktm_rm;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .KtmRm
        _m06 uint32_t                ref_count;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .RefCount
        _m07 uint32_t                container_num;          //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .ContainerNum
        _m08 uint64_t                container_size;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ContainerSize
        _m09 struct nt::cmhive_t*    cm_hive;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CmHive
        _m10 void*                   log_file_object;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .LogFileObject
        _m11 void*                   marshalling_context;    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .MarshallingContext
        _m12 uint32_t                rm_flags;               //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .RmFlags
        _m13 int32_t                 log_start_status1;      //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .LogStartStatus1
        _m14 int32_t                 log_start_status2;      //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .LogStartStatus2
        _m15 uint64_t                base_lsn;               //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .BaseLsn
        _m16 struct nt::eresource_t* rm_lock;                //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .RmLock
                                                           
        SDK_MAGIC_PROPERTIES( "_CM_RM.$", 0x88, true, 0xa946814404bca07c );                      
        SDK_FIXED_SIZE( rm_t, 0x88 );                      
    };                                                     
};
#include "magic/rm_t.end.hpp"
SDK_VERIFY( struct cm::rm_t, 0x88 );
