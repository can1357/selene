#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/fast_ref_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "mmsection_flags_t.hpp"
#include "mmsection_flags2_t.hpp"

namespace mi { struct control_area_wait_block_t;  }
namespace mi { struct image_security_reference_t; }

#include "magic/control_area_t.start.hpp"
namespace nt
{
    struct segment_t;

    // [struct _CONTROL_AREA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct control_area_t                                                              
    {                                                                                  
        union u0_u1_t                                                                  
        {                                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                                         
            _m08 uint32_t                      long_flags;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LongFlags
            _m09 struct nt::mmsection_flags2_t flags;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                                                                                       
            SDK_MAGIC_PROPERTIES( "_CONTROL_AREA.u1.$", 0x4, true, 0xf322143d5c7623a4 );                                        
            SDK_FIXED_SIZE( u0_u1_t, 0x4 );                                            
        };                                                                             
                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                             
        _m000 struct nt::segment_t*                       segment;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Segment
        _m001 nt::list_entry_t                            list_head;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ListHead
        _m002 uint64_t                                    number_of_section_references;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NumberOfSectionReferences
        _m003 uint64_t                                    number_of_pfn_references;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NumberOfPfnReferences
        _m004 uint64_t                                    number_of_mapped_views;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NumberOfMappedViews
        _m005 uint64_t                                    number_of_user_references;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NumberOfUserReferences
        _m006 uint32_t                                    long_flags;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .LongFlags
        _m007 struct nt::mmsection_flags_t                flags;                         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Flags
        _m010 u0_u1_t                                     u1;                            //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .u1
        _m011 struct ex::fast_ref_t                       file_pointer;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .FilePointer
        _m012 volatile int32_t                            control_area_lock;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ControlAreaLock
        _m013 uint32_t                                    modified_write_count;          //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .ModifiedWriteCount
        _m014 struct mi::control_area_wait_block_t*       wait_list;                     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .WaitList
        _m015 uint32_t                                    number_of_system_cache_views;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .NumberOfSystemCacheViews
        _m016 uint32_t                                    image_relocation_start_bit;    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ImageRelocationStartBit
        _m017 volatile int32_t                            writable_user_references;      //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .WritableUserReferences
        _m018 volatile uint16_t                           image_relocation_size_in64k;   //{ +0x005c@0  +0x005c@0  +0x005c@0  +0x005c@0  } | .ImageRelocationSizeIn64k
        _m019 volatile uint1_t                            system_image;                  //{ +0x005c@25 +0x005c@16 +0x005c@16 +0x005c@16 } | .SystemImage
        _m020 volatile uint1_t                            cant_move;                     //{ +0x005c@28 +0x005c@17 +0x005c@17 +0x005c@17 } | .CantMove
        _m021 volatile uint2_t                            strong_code;                   //{ +0x005c@26 +0x005c@18 +0x005c@18 +0x005c@18 } | .StrongCode
        _m022 volatile uint2_t                            bit_map;                       //{ +0x005c@29 +0x005c@20 +0x005c@20 +0x005c@20 } | .BitMap
        _m023 volatile uint1_t                            image_active;                  //{ +0x005c@31 +0x005c@22 +0x005c@22 +0x005c@22 } | .ImageActive
        _m024 uint32_t                                    flush_in_progress_count;       //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .FlushInProgressCount
        _m025 uint32_t                                    number_of_subsections;         //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .NumberOfSubsections
        _m026 struct mi::image_security_reference_t*      se_image_stub;                 //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .SeImageStub
        _m027 struct ex::push_lock_t                      file_object_lock;              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .FileObjectLock
        _m028 volatile uint64_t                           locked_pages;                  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .LockedPages
        _m029 uint61_t                                    io_attribution_context;        //{ +0x0078@0  +0x0078@0  +0x0078@0  +0x0078@0  } | .IoAttributionContext
                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                             
        _m030 void*                                       awe_context;                   //{ +0x0008    +0x0008    +0x0008    } | .AweContext
        _m031 volatile uint1_t                            image_base_ok_to_reuse;        //{ +0x005c@23 +0x005c@23 +0x005c@23 } | .ImageBaseOkToReuse
        _m032 uint64_t                                    image_cross_partition_charge;  //{ +0x0078    +0x0078    +0x0078    } | .ImageCrossPartitionCharge
        _m033 uint36_t                                    committed_page_count;          //{ +0x0078@0  +0x0078@0  +0x0078@0  } | .CommittedPageCount
                                                                                       
        // Windows 10 v1607                                                            
        //                                                                             
        _m034 uint64_t                                    spare_image;                   //{ +0x0078    } | .SpareImage
                                                                                       
        SDK_MAGIC_PROPERTIES( "_CONTROL_AREA.$", 0x80, true, 0x57bb6e73334e0e00 );                             
        SDK_FIXED_SIZE( control_area_t, 0x80 );                                        
    };                                                                                 
};
#include "magic/control_area_t.end.hpp"
SDK_VERIFY( union nt::control_area_t::u0_u1_t, 0x4 );
SDK_VERIFY( struct nt::control_area_t, 0x80 );
