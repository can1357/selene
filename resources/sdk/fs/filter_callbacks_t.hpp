#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/filter_callbacks_t.start.hpp"
namespace fs
{
    struct filter_callback_data_t;

    // [struct _FS_FILTER_CALLBACKS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct filter_callbacks_t                                                           
    {                                                                                   
        using pfs_filter_callback_t =            sdk::function<int32_t(struct fs::filter_callback_data_t*, void**)>*;                                         
        using pfs_filter_completion_callback_t = sdk::function<void(struct fs::filter_callback_data_t*, int32_t, void*)>*;                                         
        using pfs_filter_callback_t =            sdk::function<int32_t(struct fs::filter_callback_data_t*, void**)>*;                                         
        using pfs_filter_completion_callback_t = sdk::function<void(struct fs::filter_callback_data_t*, int32_t, void*)>*;                                         
        using pfs_filter_callback_t =            sdk::function<int32_t(struct fs::filter_callback_data_t*, void**)>*;                                         
        using pfs_filter_completion_callback_t = sdk::function<void(struct fs::filter_callback_data_t*, int32_t, void*)>*;                                         
        using pfs_filter_callback_t =            sdk::function<int32_t(struct fs::filter_callback_data_t*, void**)>*;                                         
        using pfs_filter_completion_callback_t = sdk::function<void(struct fs::filter_callback_data_t*, int32_t, void*)>*;                                         
        using pfs_filter_callback_t =            sdk::function<int32_t(struct fs::filter_callback_data_t*, void**)>*;                                         
        using pfs_filter_completion_callback_t = sdk::function<void(struct fs::filter_callback_data_t*, int32_t, void*)>*;                                         
        using pfs_filter_callback_t =            sdk::function<int32_t(struct fs::filter_callback_data_t*, void**)>*;                                         
        using pfs_filter_completion_callback_t = sdk::function<void(struct fs::filter_callback_data_t*, int32_t, void*)>*;                                         
        using pfs_filter_callback_t =            sdk::function<int32_t(struct fs::filter_callback_data_t*, void**)>*;                                         
        using pfs_filter_completion_callback_t = sdk::function<void(struct fs::filter_callback_data_t*, int32_t, void*)>*;                                         
                                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                              
        _m00 uint32_t                          size_of_fs_filter_callbacks;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SizeOfFsFilterCallbacks
        _m01 pfs_filter_callback_t             pre_acquire_for_section_synchronization;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PreAcquireForSectionSynchronization
        _m02 pfs_filter_completion_callback_t  post_acquire_for_section_synchronization;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PostAcquireForSectionSynchronization
        _m03 pfs_filter_callback_t             pre_release_for_section_synchronization;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .PreReleaseForSectionSynchronization
        _m04 pfs_filter_completion_callback_t  post_release_for_section_synchronization;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .PostReleaseForSectionSynchronization
        _m05 pfs_filter_callback_t             pre_acquire_for_cc_flush;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .PreAcquireForCcFlush
        _m06 pfs_filter_completion_callback_t  post_acquire_for_cc_flush;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .PostAcquireForCcFlush
        _m07 pfs_filter_callback_t             pre_release_for_cc_flush;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .PreReleaseForCcFlush
        _m08 pfs_filter_completion_callback_t  post_release_for_cc_flush;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .PostReleaseForCcFlush
        _m09 pfs_filter_callback_t             pre_acquire_for_modified_page_writer;      //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .PreAcquireForModifiedPageWriter
        _m10 pfs_filter_completion_callback_t  post_acquire_for_modified_page_writer;     //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .PostAcquireForModifiedPageWriter
        _m11 pfs_filter_callback_t             pre_release_for_modified_page_writer;      //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .PreReleaseForModifiedPageWriter
        _m12 pfs_filter_completion_callback_t  post_release_for_modified_page_writer;     //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .PostReleaseForModifiedPageWriter
                                                                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                              
        _m13 pfs_filter_callback_t             pre_query_open;                            //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .PreQueryOpen
        _m14 pfs_filter_completion_callback_t  post_query_open;                           //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .PostQueryOpen
                                                                                        
        SDK_NONVOL_PROPERTIES( "_FS_FILTER_CALLBACKS.$", 0x78, true, 0x6883579f66c1e893 );                                         
        SDK_DYNAMIC_SIZE( filter_callbacks_t );                                         
    };                                                                                  
};
#include "magic/filter_callbacks_t.end.hpp"
