#pragma once
#include <sdkgen/support_library.hpp>
#include "dump_entry_t.hpp"
#include "dump_io_mode_t.hpp"
#include "dump_control_code_t.hpp"
#include "ntstor_unicode_string_t.hpp"

#include "magic/dump_driver_info_t.start.hpp"
namespace stor::port
{
    struct dump_disk_info_t;
    struct storage_dump_info_t;

    // [struct _DUMP_DRIVER_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dump_driver_info_t                                                    
    {                                                                            
        using live_control_t = sdk::function<int32_t(struct stor::port::dump_disk_info_t*, enum stor::port::dump_control_code_t, void*)>*;                         
        using dump_read_t =    sdk::function<int32_t(struct stor::port::dump_disk_info_t*, enum stor::port::dump_io_mode_t, uint64_t*, void*)>*;                         
        using dump_write_t =   sdk::function<int32_t(struct stor::port::dump_disk_info_t*, enum stor::port::dump_io_mode_t, uint64_t*, void*, void*)>*;                         
        using dump_flush_t =   sdk::function<int32_t(struct stor::port::dump_disk_info_t*, uint64_t*, uint64_t*)>*;                         
        using dump_control_t = sdk::function<int32_t(struct stor::port::dump_disk_info_t*, enum stor::port::dump_control_code_t, void*)>*;                         
                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                       
        _m00 uint32_t                                   version;                   //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 struct stor::port::dump_entry_t            entry;                     //{ +0x0008    +0x0008    +0x0008    } | .Entry
        _m02 live_control_t                             live_control;              //{ +0x0018    +0x0018    +0x0018    } | .LiveControl
        _m03 wchar_t*                                   name;                      //{ +0x0020    +0x0020    +0x0020    } | .Name
        _m04 wchar_t*                                   base_name;                 //{ +0x0028    +0x0028    +0x0028    } | .BaseName
        _m05 wchar_t*                                   library_driver_name;       //{ +0x0030    +0x0030    +0x0030    } | .LibraryDriverName
        _m06 wchar_t*                                   library_driver_base_name;  //{ +0x0038    +0x0038    +0x0038    } | .LibraryDriverBaseName
        _m07 uint32_t                                   flags;                     //{ +0x0040    +0x0040    +0x0040    } | .Flags
        _m08 uint32_t                                   context_size;              //{ +0x0044    +0x0044    +0x0044    } | .ContextSize
        _m09 void*                                      context;                   //{ +0x0048    +0x0048    +0x0048    } | .Context
        _m10 dump_read_t                                dump_read;                 //{ +0x0050    +0x0050    +0x0050    } | .DumpRead
        _m11 dump_write_t                               dump_write;                //{ +0x0058    +0x0058    +0x0058    } | .DumpWrite
        _m12 dump_flush_t                               dump_flush;                //{ +0x0060    +0x0060    +0x0060    } | .DumpFlush
        _m13 dump_control_t                             dump_control;              //{ +0x0068    +0x0068    +0x0068    } | .DumpControl
        _m14 struct stor::port::storage_dump_info_t*    dump_info;                 //{ +0x0070    +0x0070    +0x0070    } | .DumpInfo
        _m15 struct stor::port::ntstor_unicode_string_t driver_full_path;          //{ +0x0080    +0x0080    +0x0080    } | .DriverFullPath
        _m16 struct stor::port::ntstor_unicode_string_t library_driver_full_path;  //{ +0x0090    +0x0090    +0x0090    } | .LibraryDriverFullPath
                                                                                 
        SDK_MAGIC_PROPERTIES( "_DUMP_DRIVER_INFO.$", 0xa0, true, 0x939b600b21ca12d4 );                         
        SDK_FIXED_SIZE( dump_driver_info_t, 0xa0 );                              
    };                                                                           
};
#include "magic/dump_driver_info_t.end.hpp"
SDK_VERIFY( struct stor::port::dump_driver_info_t, 0xa0 );
