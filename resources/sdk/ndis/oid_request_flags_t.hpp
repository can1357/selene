#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/oid_request_flags_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_OID_REQUEST_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct oid_request_flags_t               
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m000 uint1_t completed;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Completed
        _m001 uint1_t free_request;            //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .FreeRequest
        _m002 uint1_t oid_in_table;            //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .OidInTable
        _m003 uint1_t signal_event;            //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .SignalEvent
        _m004 uint1_t co_ndis;                 //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .CoNdis
        _m005 uint1_t from_protocol;           //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .FromProtocol
        _m006 uint1_t from_filter;             //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .FromFilter
        _m007 uint1_t passthrough;             //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .Passthrough
        _m008 uint1_t last_restore_filter;     //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .LastRestoreFilter
        _m009 uint1_t only_deref_open;         //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .OnlyDerefOpen
        _m010 uint1_t signal_and_exit;         //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .SignalAndExit
        _m011 uint1_t mp_save_buf;             //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .MpSaveBuf
        _m012 uint1_t down_level;              //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .DownLevel
        _m013 uint1_t cloned;                  //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .Cloned
        _m014 uint1_t mandatory;               //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .Mandatory
        _m015 uint1_t sent_to_miniport;        //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .SentToMiniport
        _m016 uint1_t sent_to_filter;          //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .SentToFilter
        _m017 uint1_t for_reset;               //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .ForReset
        _m018 uint1_t for_restore;             //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .ForRestore
        _m019 uint1_t for_mp_direct;           //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .ForMpDirect
        _m020 uint1_t direct_request;          //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .DirectRequest
        _m021 uint1_t revision_changed;        //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .RevisionChanged
        _m022 uint1_t skip_pre_proc;           //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .SkipPreProc
        _m023 uint1_t skip_post_proc;          //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .SkipPostProc
        _m024 uint1_t skip_source_completion;  //{ +0x0000@25 +0x0000@25 +0x0000@25 +0x0000@25 } | .SkipSourceCompletion
        _m025 uint1_t source_completion_only;  //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .SourceCompletionOnly
        _m026 uint1_t internal_clone;          //{ +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 } | .InternalClone
        _m027 uint4_t remainder;               //{ +0x0000@28 +0x0000@28 +0x0000@28 +0x0000@28 } | .Remainder
                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_OID_REQUEST_FLAGS.$", 0x4, true, 0x1478555cde212161 );                       
        SDK_FIXED_SIZE( oid_request_flags_t, 0x4 );                       
    };                                       
};
#include "magic/oid_request_flags_t.end.hpp"
SDK_VERIFY( struct ndis::oid_request_flags_t, 0x4 );
