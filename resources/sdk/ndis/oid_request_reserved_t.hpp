#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "oid_request_flags_t.hpp"

#include "magic/oid_request_reserved_t.start.hpp"
namespace ndis
{
    struct request_t;
    struct vf_block_t;
    struct oid_request_t;
    struct vport_block_t;
    struct wol_xlation_context_t;
    struct packet_pattern_entry_t;
    struct request_xlation_context_t;

    // [struct _NDIS_OID_REQUEST_RESERVED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct oid_request_reserved_t                                                                
    {                                                                                            
        struct u0_co_ndis_t                                                                      
        {                                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                                                   
            _m10 void* party_context;                                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PartyContext
            _m11 void* call_mgr_context;                                                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CallMgrContext
            _m12 void* vc_context;                                                                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VcContext
            _m13 void* af_context;                                                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AfContext
                                                                                                 
            SDK_MAGIC_PROPERTIES( "_NDIS_OID_REQUEST_RESERVED.CoNdis.$", 0x20, true, 0xbacb7f66f5093c33 );                                        
            SDK_FIXED_SIZE( u0_co_ndis_t, 0x20 );                                                
        };                                                                                       
                                                                                                 
        struct u4_iov_context_t                                                                  
        {                                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                                                   
            _m22 struct ndis::vf_block_t*    vf_block;                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VFBlock
            _m23 struct ndis::vport_block_t* v_port_block;                                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VPortBlock
                                                                                                 
            SDK_MAGIC_PROPERTIES( "_NDIS_OID_REQUEST_RESERVED.IovContext.$", 0x10, true, 0x825957913313692 );                                    
            SDK_FIXED_SIZE( u4_iov_context_t, 0x10 );                                            
        };                                                                                       
                                                                                                 
        struct u8_pm_context_t                                                                   
        {                                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
            //                                                                                   
            _m25 struct ndis::wol_xlation_context_t*  wol_xlation_context;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WolXlationContext
            _m26 uint32_t                             wol_pattern_id;                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WolPatternId
            _m27 struct ndis::packet_pattern_entry_t* source_packet_entry;                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SourcePacketEntry
                                                                                                 
            SDK_MAGIC_PROPERTIES( "_NDIS_OID_REQUEST_RESERVED.PMContext.$", 0x18, true, 0x287bfeebaed6049b );                                           
            SDK_FIXED_SIZE( u8_pm_context_t, 0x18 );                                             
        };                                                                                       
                                                                                                 
        struct u12_offload_params_context_t                                                      
        {                                                                                        
            // Windows 10 v2004, Windows 10 v20H2                                                
            //                                                                                   
            _m29 uint1_t skip_registry_update;                                                     //{ +0x0000@0  +0x0000@0  } | .SkipRegistryUpdate
                                                                                                 
            SDK_MAGIC_PROPERTIES( "_NDIS_OID_REQUEST_RESERVED.OffloadParamsContext.$", 0x1, true, 0x8d9f62f225cfa08f );                                            
            SDK_FIXED_SIZE( u12_offload_params_context_t, 0x1 );                                            
        };                                                                                       
                                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                                       
        _m00 nt::list_entry_t                                             entry;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Entry
        _m01 struct ndis::oid_request_t*                                  next_request;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextRequest
        _m02 int32_t                                                      status;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Status
        _m03 struct ndis::oid_request_flags_t                             flags;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m04 uint32_t                                                     oid_table_index;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .OidTableIndex
        _m05 struct ndis::oid_request_t*                                  oid_request;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OidRequest
        _m06 struct ndis::request_t*                                      request;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Request
        _m07 void*                                                        source_handle;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SourceHandle
        _m08 struct nt::kevent_t                                          event;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Event
        _m09 void*                                                        ndis_vc_handle;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NdisVcHandle
        _m14 u0_co_ndis_t                                                 co_ndis;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CoNdis
        _m15 uint64_t                                                     start_cycle;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .StartCycle
        _m16 struct ndis::request_xlation_context_t*                      p_oid_xlation_context;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pOidXlationContext
        _m17 uint32_t                                                     original_buffer_length;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .OriginalBufferLength
        _m18 uint32_t                                                     saved_oid;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .SavedOid
        _m19 void*                                                        saved_info_buf;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .SavedInfoBuf
        _m20 uint32_t                                                     saved_info_buf_len;      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .SavedInfoBufLen
        _m21 uint32_t                                                     request_buffer;          //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .RequestBuffer
        _m24 u4_iov_context_t                                             iov_context;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .IovContext
        _m28 u8_pm_context_t                                              pm_context;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PMContext
                                                                                                 
        // Windows 10 v2004, Windows 10 v20H2                                                    
        //                                                                                       
        _m30 u12_offload_params_context_t                                 offload_params_context;  //{ +0x0048    +0x0048    } | .OffloadParamsContext
                                                                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_OID_REQUEST_RESERVED.$", 0x60, true, 0x966cc7784faa8b15 );                       
        SDK_FIXED_SIZE( oid_request_reserved_t, 0x60 );                                          
    };                                                                                           
};
#include "magic/oid_request_reserved_t.end.hpp"
SDK_VERIFY( struct ndis::oid_request_reserved_t::u0_co_ndis_t, 0x20 );
SDK_VERIFY( struct ndis::oid_request_reserved_t::u4_iov_context_t, 0x10 );
SDK_VERIFY( struct ndis::oid_request_reserved_t::u8_pm_context_t, 0x18 );
SDK_VERIFY( struct ndis::oid_request_reserved_t::u12_offload_params_context_t, 0x1 );
SDK_VERIFY( struct ndis::oid_request_reserved_t, 0x60 );
