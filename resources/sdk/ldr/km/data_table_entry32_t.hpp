#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/list_entry32_t.hpp"

#include "magic/data_table_entry32_t.start.hpp"
namespace ldr::km
{
    // [struct _KLDR_DATA_TABLE_ENTRY32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct data_table_entry32_t                             
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                  
        _m00 struct nt::list_entry32_t in_load_order_links;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InLoadOrderLinks
        _m01 uint32_t                  undefined1;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .__Undefined1
        _m02 uint32_t                  undefined2;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .__Undefined2
        _m03 uint32_t                  undefined3;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .__Undefined3
        _m04 uint32_t                  non_paged_debug_info;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NonPagedDebugInfo
        _m05 uint32_t                  dll_base;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DllBase
        _m06 uint32_t                  entry_point;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .EntryPoint
        _m07 uint32_t                  size_of_image;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SizeOfImage
        _m08 nt::ascii_view32          full_dll_name;         //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .FullDllName
        _m09 nt::ascii_view32          base_dll_name;         //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .BaseDllName
        _m10 uint32_t                  flags;                 //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Flags
        _m11 uint16_t                  load_count;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .LoadCount
        _m12 uint16_t                  undefined5;            //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .__Undefined5
        _m13 uint32_t                  undefined6;            //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .__Undefined6
        _m14 uint32_t                  check_sum;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CheckSum
        _m15 uint32_t                  time_date_stamp;       //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .TimeDateStamp
                                                            
        SDK_MAGIC_PROPERTIES( "_KLDR_DATA_TABLE_ENTRY32.$", 0x48, true, 0xb78e77cd88a0ec7e );                     
        SDK_FIXED_SIZE( data_table_entry32_t, 0x48 );                     
    };                                                      
};
#include "magic/data_table_entry32_t.end.hpp"
SDK_VERIFY( struct ldr::km::data_table_entry32_t, 0x48 );
