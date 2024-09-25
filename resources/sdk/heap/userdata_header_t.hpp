#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_ex_t.hpp"
#include "userdata_offsets_t.hpp"
#include "../nt/single_list_entry_t.hpp"

#include "magic/userdata_header_t.start.hpp"
namespace heap
{
    struct subsegment_t;

    // [struct _HEAP_USERDATA_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct userdata_header_t                                        
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                          
        _m00 struct nt::single_list_entry_t  s_free_list_entry;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SFreeListEntry
        _m01 struct heap::subsegment_t*      sub_segment;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SubSegment
        _m02 uint32_t                        size_index_and_padding;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SizeIndexAndPadding
        _m03 uint8_t                         size_index;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SizeIndex
        _m04 uint8_t                         guard_page_present;      //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .GuardPagePresent
        _m05 uint16_t                        padding_bytes;           //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .PaddingBytes
        _m06 uint32_t                        signature;               //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Signature
        _m07 struct heap::userdata_offsets_t encoded_offsets;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EncodedOffsets
        _m08 struct rtl::bitmap_ex_t         busy_bitmap;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BusyBitmap
        _m09 sdk::array<uint64_t, 1>         bitmap_data;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BitmapData
                                                                    
        SDK_MAGIC_PROPERTIES( "_HEAP_USERDATA_HEADER.$", 0x38, true, 0xd59c69d3969b8e57 );                       
        SDK_FIXED_SIZE( userdata_header_t, 0x38 );                       
    };                                                              
};
#include "magic/userdata_header_t.end.hpp"
SDK_VERIFY( struct heap::userdata_header_t, 0x38 );
