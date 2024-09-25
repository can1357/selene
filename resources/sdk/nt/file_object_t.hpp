#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"

namespace io { struct completion_context_t; }

#include "magic/file_object_t.start.hpp"
namespace nt
{
    struct vpb_t;
    struct file_object_t;
    struct device_object_t;
    struct section_object_pointers_t;

    // [struct _FILE_OBJECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_object_t                                                   
    {                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                 
        _m000 int16_t                               type;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m001 int16_t                               size;                    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m002 struct nt::device_object_t*           device_object;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceObject
        _m003 struct nt::vpb_t*                     vpb;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Vpb
        _m004 void*                                 fs_context;              //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .FsContext
        _m005 void*                                 fs_context2;             //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .FsContext2
        _m006 struct nt::section_object_pointers_t* section_object_pointer;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SectionObjectPointer
        _m007 void*                                 private_cache_map;       //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .PrivateCacheMap
        _m008 int32_t                               final_status;            //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .FinalStatus
        _m009 struct nt::file_object_t*             related_file_object;     //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .RelatedFileObject
        _m010 uint8_t                               lock_operation;          //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .LockOperation
        _m011 uint8_t                               delete_pending;          //{ +0x0049    +0x0049    +0x0049    +0x0049    +0x0049    } | .DeletePending
        _m012 uint8_t                               read_access;             //{ +0x004a    +0x004a    +0x004a    +0x004a    +0x004a    } | .ReadAccess
        _m013 uint8_t                               write_access;            //{ +0x004b    +0x004b    +0x004b    +0x004b    +0x004b    } | .WriteAccess
        _m014 uint8_t                               delete_access;           //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .DeleteAccess
        _m015 uint8_t                               shared_read;             //{ +0x004d    +0x004d    +0x004d    +0x004d    +0x004d    } | .SharedRead
        _m016 uint8_t                               shared_write;            //{ +0x004e    +0x004e    +0x004e    +0x004e    +0x004e    } | .SharedWrite
        _m017 uint8_t                               shared_delete;           //{ +0x004f    +0x004f    +0x004f    +0x004f    +0x004f    } | .SharedDelete
        _m018 uint32_t                              flags;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .Flags
        _m019 nt::unicode_view                      file_name;               //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .FileName
        _m020 int64_t                               current_byte_offset;     //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .CurrentByteOffset
        _m021 uint32_t                              waiters;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .Waiters
        _m022 uint32_t                              busy;                    //{ +0x0074    +0x0074    +0x0074    +0x0074    +0x0074    } | .Busy
        _m023 void*                                 last_lock;               //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .LastLock
        _m024 struct nt::kevent_t                   lock;                    //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .Lock
        _m025 struct nt::kevent_t                   event;                   //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .Event
        _m026 struct io::completion_context_t*      completion_context;      //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .CompletionContext
        _m027 uint64_t                              irp_list_lock;           //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .IrpListLock
        _m028 nt::list_entry_t                      irp_list;                //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .IrpList
        _m029 void*                                 file_object_extension;   //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .FileObjectExtension
                                                                           
        SDK_NONVOL_PROPERTIES( "_FILE_OBJECT.$", 0xd8, true, 0x3ccf7754cb714115 );                       
        SDK_FIXED_SIZE( file_object_t, 0xd8 );                             
    };                                                                     
};
#include "magic/file_object_t.end.hpp"
SDK_VERIFY( struct nt::file_object_t, 0xd8 );
