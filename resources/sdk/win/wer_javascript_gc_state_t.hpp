#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/wer_javascript_gc_state_t.start.hpp"
namespace win
{
    // [struct _WER_JAVASCRIPT_GC_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wer_javascript_gc_state_t                                                  
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
        //                                                                            
        _m00 struct win::filetime_t initial_collection_start_time;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InitialCollectionStartTime
        _m01 uint64_t               initial_collection_start_process_used_bytes;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InitialCollectionStartProcessUsedBytes
        _m02 struct win::filetime_t current_collection_start_time;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentCollectionStartTime
        _m03 uint64_t               current_collection_start_process_used_bytes;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CurrentCollectionStartProcessUsedBytes
        _m04 struct win::filetime_t concurrent_mark_finish_time;                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ConcurrentMarkFinishTime
        _m05 struct win::filetime_t dispose_start_time;                                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DisposeStartTime
        _m06 struct win::filetime_t dispose_end_time;                                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DisposeEndTime
        _m07 struct win::filetime_t external_weak_reference_object_resolve_start_time;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ExternalWeakReferenceObjectResolveStartTime
        _m08 struct win::filetime_t external_weak_reference_object_resolve_end_time;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ExternalWeakReferenceObjectResolveEndTime
        _m09 struct win::filetime_t current_collection_end_time;                        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CurrentCollectionEndTime
        _m10 struct win::filetime_t last_collection_end_time;                           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .LastCollectionEndTime
        _m11 uint32_t               exhaustive_repeated_count;                          //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ExhaustiveRepeatedCount
        _m12 struct win::filetime_t last_script_start_time;                             //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .LastScriptStartTime
        _m13 struct win::filetime_t last_script_end_time;                               //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .LastScriptEndTime
        _m14 struct win::filetime_t suspend_start_time;                                 //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .SuspendStartTime
        _m15 struct win::filetime_t suspend_end_time;                                   //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .SuspendEndTime
                                                                                      
        SDK_MAGIC_PROPERTIES( "_WER_JAVASCRIPT_GC_STATE.$", 0x80, true, 0xdf5fbfa76c7e5a2c );                                                  
        SDK_FIXED_SIZE( wer_javascript_gc_state_t, 0x80 );                                                  
    };                                                                                
};
#include "magic/wer_javascript_gc_state_t.end.hpp"
SDK_VERIFY( struct win::wer_javascript_gc_state_t, 0x80 );
