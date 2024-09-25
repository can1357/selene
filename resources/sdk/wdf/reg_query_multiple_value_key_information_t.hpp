#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct key_value_entry_t; }

#include "magic/reg_query_multiple_value_key_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_query_multiple_value_key_information_t              
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                         
        _m00 void*                          object;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 struct win::key_value_entry_t* value_entries;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ValueEntries
        _m02 uint32_t                       entry_count;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .EntryCount
        _m03 void*                          value_buffer;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ValueBuffer
        _m04 uint32_t*                      buffer_length;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .BufferLength
        _m05 uint32_t*                      required_buffer_length;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .RequiredBufferLength
        _m06 void*                          call_context;            //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .CallContext
        _m07 void*                          object_context;          //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ObjectContext
                                                                   
        SDK_NONVOL_PROPERTIES( "_REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION.$", 0x48, true, 0x5b4e53db0df79041 );                       
        SDK_FIXED_SIZE( reg_query_multiple_value_key_information_t, 0x48 );                       
    };                                                             
};
#include "magic/reg_query_multiple_value_key_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_query_multiple_value_key_information_t, 0x48 );
