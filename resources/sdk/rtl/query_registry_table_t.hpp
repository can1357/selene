#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_registry_table_t.start.hpp"
namespace rtl
{
    // [struct _RTL_QUERY_REGISTRY_TABLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct query_registry_table_t                          
    {                                                      
        using prtl_query_registry_routine_t = sdk::function<int32_t(wchar_t*, uint32_t, void*, uint32_t, void*, void*)>*;               
                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                 
        _m00 prtl_query_registry_routine_t  query_routine;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryRoutine
        _m01 uint32_t                       flags;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 wchar_t*                       name;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Name
        _m03 void*                          entry_context;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .EntryContext
        _m04 uint32_t                       default_type;    //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .DefaultType
        _m05 void*                          default_data;    //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .DefaultData
        _m06 uint32_t                       default_length;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .DefaultLength
                                                           
        SDK_NONVOL_PROPERTIES( "_RTL_QUERY_REGISTRY_TABLE.$", 0x38, true, 0x82c3132343ce4a12 );               
        SDK_FIXED_SIZE( query_registry_table_t, 0x38 );               
    };                                                     
};
#include "magic/query_registry_table_t.end.hpp"
SDK_VERIFY( struct rtl::query_registry_table_t, 0x38 );
