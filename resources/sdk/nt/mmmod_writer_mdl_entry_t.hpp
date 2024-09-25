#pragma once
#include <sdkgen/support_library.hpp>
#include "mdl_t.hpp"
#include "kapc_t.hpp"
#include "modwriter_flags_t.hpp"
#include "../io/status_block_t.hpp"

namespace mi { struct partition_t; }

#include "magic/mmmod_writer_mdl_entry_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct eresource_t;
    struct file_object_t;
    struct control_area_t;
    struct mmpaging_file_t;

    // [struct _MMMOD_WRITER_MDL_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmmod_writer_mdl_entry_t                                  
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                           
        _m00 nt::list_entry_t             links;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Links
        _m01 struct io::status_block_t    io_status;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IoStatus
        _m02 struct nt::irp_t*            irp;                         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Irp
        _m03 struct nt::modwriter_flags_t u1;                          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .u1
        _m04 uint32_t                     store_write_ref_count;       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .StoreWriteRefCount
        _m05 struct nt::kapc_t            store_write_completion_apc;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .StoreWriteCompletionApc
        _m06 uint32_t                     byte_count;                  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ByteCount
        _m07 uint32_t                     charged_pages;               //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .ChargedPages
        _m08 struct nt::mmpaging_file_t*  paging_file;                 //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .PagingFile
        _m09 struct nt::file_object_t*    file;                        //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .File
        _m10 struct nt::control_area_t*   control_area;                //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ControlArea
        _m11 struct nt::eresource_t*      file_resource;               //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .FileResource
        _m12 int64_t                      write_offset;                //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .WriteOffset
        _m13 int64_t                      issue_time;                  //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .IssueTime
        _m14 struct mi::partition_t*      partition;                   //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .Partition
        _m15 struct nt::mdl_t*            pointer_mdl;                 //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .PointerMdl
        _m16 struct nt::mdl_t             mdl;                         //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .Mdl
        _m17 sdk::array<uint64_t, 1>      page;                        //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .Page
                                                                     
        SDK_MAGIC_PROPERTIES( "_MMMOD_WRITER_MDL_ENTRY.$", 0x108, true, 0xfc673dbfc150285a );                           
        SDK_FIXED_SIZE( mmmod_writer_mdl_entry_t, 0x108 );                           
    };                                                               
};
#include "magic/mmmod_writer_mdl_entry_t.end.hpp"
SDK_VERIFY( struct nt::mmmod_writer_mdl_entry_t, 0x108 );
