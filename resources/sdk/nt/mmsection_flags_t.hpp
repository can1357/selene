#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmsection_flags_t.start.hpp"
namespace nt
{
    // [struct _MMSECTION_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmsection_flags_t                                  
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                    
        _m000 uint1_t   being_deleted;                          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .BeingDeleted
        _m001 uint1_t   being_created;                          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .BeingCreated
        _m002 uint1_t   being_purged;                           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .BeingPurged
        _m003 uint1_t   no_modified_writing;                    //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .NoModifiedWriting
        _m004 uint1_t   fail_all_io;                            //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .FailAllIo
        _m005 uint1_t   image;                                  //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Image
        _m006 uint1_t   based;                                  //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Based
        _m007 uint1_t   file;                                   //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .File
        _m008 uint1_t   attempting_delete;                      //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .AttemptingDelete
        _m009 uint1_t   prefetch_created;                       //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .PrefetchCreated
        _m010 uint1_t   physical_memory;                        //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .PhysicalMemory
        _m011 uint1_t   image_control_area_on_removable_media;  //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .ImageControlAreaOnRemovableMedia
        _m012 uint1_t   reserve;                                //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .Reserve
        _m013 uint1_t   commit;                                 //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .Commit
        _m014 uint1_t   no_change;                              //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .NoChange
        _m015 uint1_t   was_purged;                             //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .WasPurged
        _m016 uint1_t   user_reference;                         //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .UserReference
        _m017 uint1_t   global_memory;                          //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .GlobalMemory
        _m018 uint1_t   delete_on_close;                        //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .DeleteOnClose
        _m019 uint1_t   file_pointer_null;                      //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .FilePointerNull
        _m020 varuint_t preferred_node;                         //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .PreferredNode
        _m021 uint1_t   global_only_per_session;                //{ +0x0000@26 +0x0000@26 +0x0000@27 +0x0000@26 } | .GlobalOnlyPerSession
        _m022 uint1_t   user_writable;                          //{ +0x0000@27 +0x0000@27 +0x0000@28 +0x0000@27 } | .UserWritable
        _m023 uint1_t   system_va_allocated;                    //{ +0x0000@28 +0x0000@28 +0x0000@29 +0x0000@28 } | .SystemVaAllocated
        _m024 uint1_t   preferred_fs_compression_boundary;      //{ +0x0000@29 +0x0000@29 +0x0000@30 +0x0000@29 } | .PreferredFsCompressionBoundary
        _m025 uint1_t   page_size64k;                           //{ +0x0000@31 +0x0000@31 +0x0000@31 +0x0000@31 } | .PageSize64K
                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                      
        //                                                    
        _m026 uint1_t   using_file_extents;                     //{ +0x0000@30 +0x0000@30 +0x0000@30 } | .UsingFileExtents
                                                              
        SDK_MAGIC_PROPERTIES( "_MMSECTION_FLAGS.$", 0x4, true, 0x781e642cc8acc2f3 );                                      
        SDK_FIXED_SIZE( mmsection_flags_t, 0x4 );                                      
    };                                                        
};
#include "magic/mmsection_flags_t.end.hpp"
SDK_VERIFY( struct nt::mmsection_flags_t, 0x4 );
