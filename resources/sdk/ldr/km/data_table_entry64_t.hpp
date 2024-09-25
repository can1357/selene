#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/list_entry64_t.hpp"

#include "magic/data_table_entry64_t.start.hpp"
namespace ldr::km
{
    // [struct _KLDR_DATA_TABLE_ENTRY64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct data_table_entry64_t                             
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                  
        _m00 struct nt::list_entry64_t in_load_order_links;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InLoadOrderLinks
        _m01 uint64_t                  undefined1;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .__Undefined1
        _m02 uint64_t                  undefined2;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .__Undefined2
        _m03 uint64_t                  undefined3;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .__Undefined3
        _m04 uint64_t                  non_paged_debug_info;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NonPagedDebugInfo
        _m05 uint64_t                  dll_base;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DllBase
        _m06 uint64_t                  entry_point;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .EntryPoint
        _m07 uint32_t                  size_of_image;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SizeOfImage
        _m08 nt::ascii_view            full_dll_name;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .FullDllName
        _m09 nt::ascii_view            base_dll_name;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .BaseDllName
        _m10 uint32_t                  flags;                 //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Flags
        _m11 uint16_t                  load_count;            //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .LoadCount
        _m12 uint16_t                  undefined5;            //{ +0x006e    +0x006e    +0x006e    +0x006e    } | .__Undefined5
        _m13 uint64_t                  undefined6;            //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .__Undefined6
        _m14 uint32_t                  check_sum;             //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .CheckSum
        _m15 uint32_t                  padding1;              //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .__padding1
        _m16 uint32_t                  time_date_stamp;       //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .TimeDateStamp
        _m17 uint32_t                  padding2;              //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .__padding2
                                                            
        SDK_MAGIC_PROPERTIES( "_KLDR_DATA_TABLE_ENTRY64.$", 0x88, true, 0xd580d80b8bf07f32 );                     
        SDK_FIXED_SIZE( data_table_entry64_t, 0x88 );                     
    };                                                      
};
#include "magic/data_table_entry64_t.end.hpp"
SDK_VERIFY( struct ldr::km::data_table_entry64_t, 0x88 );
