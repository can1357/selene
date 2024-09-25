#pragma once
#include <sdkgen/support_library.hpp>
#include "entry_t.hpp"
#include "extended_entry_t.hpp"
#include "unpacked_entry_t.hpp"

#include "magic/free_entry_t.start.hpp"
namespace heap
{
    // [struct _HEAP_FREE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct free_entry_t                                                 
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                              
        _m000 struct heap::entry_t          heap_entry;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HeapEntry
        _m001 struct heap::unpacked_entry_t unpacked_entry;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UnpackedEntry
        _m002 void*                         previous_block_private_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreviousBlockPrivateData
        _m003 uint16_t                      size;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m004 uint8_t                       flags;                        //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Flags
        _m005 uint8_t                       small_tag_index;              //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .SmallTagIndex
        _m006 uint32_t                      sub_segment_code;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SubSegmentCode
        _m007 uint16_t                      previous_size;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PreviousSize
        _m008 uint8_t                       segment_offset;               //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .SegmentOffset
        _m009 uint8_t                       lfh_flags;                    //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .LFHFlags
        _m010 uint8_t                       unused_bytes;                 //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .UnusedBytes
        _m011 uint64_t                      compact_header;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompactHeader
        _m012 struct heap::extended_entry_t extended_entry;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExtendedEntry
        _m013 uint16_t                      function_index;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FunctionIndex
        _m014 uint16_t                      context_value;                //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .ContextValue
        _m015 uint32_t                      interceptor_value;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InterceptorValue
        _m016 uint16_t                      unused_bytes_length;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .UnusedBytesLength
        _m017 uint8_t                       entry_offset;                 //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .EntryOffset
        _m018 uint8_t                       extended_block_signature;     //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .ExtendedBlockSignature
        _m019 void*                         reserved_for_alignment;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReservedForAlignment
        _m020 uint32_t                      code1;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Code1
        _m021 uint16_t                      code2;                        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Code2
        _m022 uint8_t                       code3;                        //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .Code3
        _m023 uint8_t                       code4;                        //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .Code4
        _m024 uint32_t                      code234;                      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Code234
        _m025 uint64_t                      agregate_code;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AgregateCode
        _m026 nt::list_entry_t              free_list;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FreeList
                                                                        
        SDK_MAGIC_PROPERTIES( "_HEAP_FREE_ENTRY.$", 0x20, true, 0x379318954f57ffac );                            
        SDK_FIXED_SIZE( free_entry_t, 0x20 );                            
    };                                                                  
};
#include "magic/free_entry_t.end.hpp"
SDK_VERIFY( struct heap::free_entry_t, 0x20 );
