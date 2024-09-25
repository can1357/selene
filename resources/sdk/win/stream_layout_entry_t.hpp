#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stream_layout_entry_t.start.hpp"
namespace win
{
    // [struct _STREAM_LAYOUT_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct stream_layout_entry_t                              
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                    
        _m00 uint32_t               version;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t               next_stream_offset;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NextStreamOffset
        _m02 uint32_t               flags;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t               extent_information_offset;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ExtentInformationOffset
        _m04 int64_t                allocation_size;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocationSize
        _m05 int64_t                end_of_file;                //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .EndOfFile
        _m06 uint32_t               attribute_flags;            //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .AttributeFlags
        _m07 uint32_t               stream_identifier_length;   //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .StreamIdentifierLength
        _m08 sdk::array<wchar_t, 1> stream_identifier;          //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .StreamIdentifier
                                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                    
        _m09 uint32_t               stream_information_offset;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StreamInformationOffset
        _m10 uint32_t               attribute_type_code;        //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .AttributeTypeCode
                                                              
        SDK_NONVOL_PROPERTIES( "_STREAM_LAYOUT_ENTRY.$", 0x38, true, 0x948d79fe66e8aa91 );                          
        SDK_FIXED_SIZE( stream_layout_entry_t, 0x38 );                          
    };                                                        
};
#include "magic/stream_layout_entry_t.end.hpp"
SDK_VERIFY( struct win::stream_layout_entry_t, 0x38 );
